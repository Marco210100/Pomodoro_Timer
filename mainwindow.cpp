#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QIntValidator>
#include <QDebug>
#include <QMessageBox>
#include "runningsessionboard.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setMinimumSize(400,600);
    ui->buttonAdd->setMaximumSize(100,80);
    ui->buttonDelete->setMaximumSize(100,80);

    ui->lineEditHours->setValidator(new QIntValidator(0, 59, this));
    ui->lineEditMinutes->setValidator(new QIntValidator(0, 59, this));
    ui->lineEditBreak->setValidator(new QIntValidator(0, 59, this));

    // Placeholder texts
    QFont italicFont;
    italicFont.setItalic(true);
    ui->lineEditVideo->setFont(italicFont);
    ui->lineEditBreak->setFont(italicFont);

    ui->lineEditVideo->setPlaceholderText("Paste video link here...");
    ui->lineEditBreak->setPlaceholderText("Break Duration in minutes");

    connect(ui->buttonStart, &QPushButton::clicked, this, &MainWindow::startSession);
    connect(ui->lineEditHours, &QLineEdit::editingFinished, this, &MainWindow::keepLineEditDoubleDigit);
    connect(ui->lineEditMinutes, &QLineEdit::editingFinished, this, &MainWindow::keepLineEditDoubleDigit);
    connect(ui->lineEditBreak, &QLineEdit::editingFinished, this, &MainWindow::keepLineEditDoubleDigit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::startSession()
{
    int hours   = ui->lineEditHours->text().toInt();
    int minutes = ui->lineEditMinutes->text().toInt();

    if (hours + minutes <= 0)
    {
        QMessageBox::warning(this, "Warning", "You need to input a duration for your session.");
        return;
    }

    // Hide mainwindow and show board
    int breakTime = ui->lineEditBreak->text().toInt();

    this->hide();
    RunningSessionBoard board(hours, minutes, breakTime, this);
    board.exec();
    this->show();
}

void MainWindow::keepLineEditDoubleDigit()
{
    QLineEdit *lineEdit = qobject_cast<QLineEdit*>(sender());
    if (lineEdit->text().length() < 2)
        lineEdit->setText("0" + lineEdit->text());
}
