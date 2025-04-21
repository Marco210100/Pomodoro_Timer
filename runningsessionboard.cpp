#include "runningsessionboard.h"
#include "ui_runningsessionboard.h"
#include <QTimer>

RunningSessionBoard::RunningSessionBoard(int hours, int minutes, int breakTime, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RunningSessionBoard)
{
    ui->setupUi(this);
    this->m_hours     = hours;
    this->m_minutes   = minutes;
    this->m_breakTime = breakTime;

    this->setFixedSize(this->size());

    ui->labelBreak->setVisible(false);
    ui->labelHours->setText(QString::number(m_hours));
    ui->labelMinutes->setText(QString::number(m_minutes));

    // Initialize timer
    m_Timer = new QTimer(this);
    connect(m_Timer, &QTimer::timeout, this, &RunningSessionBoard::timerTick);

    m_isSession = true;
    startSession();
}

RunningSessionBoard::~RunningSessionBoard()
{
    delete ui;
}

void RunningSessionBoard::startSession()
{
    m_secondsLeft = getSeconds();
    m_Timer->start(1000);
}

int RunningSessionBoard::getSeconds()
{
    return (m_hours * 3600) + (m_minutes * 60);
}

void RunningSessionBoard::timerTick()
{
    if (m_secondsLeft > 0)
    {
        m_secondsLeft--;

        int hoursAfterTick      = m_secondsLeft / 3600;
        int secondsAfterTick    = m_secondsLeft % 3600;
        int minutesAfterTick    = secondsAfterTick / 60;

        secondsAfterTick -= minutesAfterTick * 60;

        ui->labelHours->setText(QString::number(hoursAfterTick));
        ui->labelMinutes->setText(QString::number(minutesAfterTick));
        ui->labelSeconds->setText(QString::number(secondsAfterTick));
    }
    else
    {
        m_Timer->stop();

        if (m_isSession)
        {
            m_isSession = false;
            ui->labelBreak->setVisible(true);
            startBreak();
        }
        else
        {
            m_isSession = true;
            ui->labelBreak->setVisible(false);
            startSession();
        }
    }
}

void RunningSessionBoard::startBreak()
{
    m_secondsLeft = m_breakTime * 60;
    m_Timer->start(1000);
}
