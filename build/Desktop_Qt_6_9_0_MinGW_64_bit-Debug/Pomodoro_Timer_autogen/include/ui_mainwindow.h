/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditHours;
    QLabel *labelDivider;
    QLineEdit *lineEditMinutes;
    QLineEdit *lineEditBreak;
    QLineEdit *lineEditVideo;
    QPushButton *buttonStart;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *buttonDelete;
    QPushButton *buttonAdd;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(470, 733);
        MainWindow->setMaximumSize(QSize(470, 733));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lineEditHours = new QLineEdit(centralwidget);
        lineEditHours->setObjectName("lineEditHours");
        QFont font;
        font.setPointSize(18);
        lineEditHours->setFont(font);
        lineEditHours->setMaxLength(2);
        lineEditHours->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(lineEditHours);

        labelDivider = new QLabel(centralwidget);
        labelDivider->setObjectName("labelDivider");

        horizontalLayout->addWidget(labelDivider);

        lineEditMinutes = new QLineEdit(centralwidget);
        lineEditMinutes->setObjectName("lineEditMinutes");
        lineEditMinutes->setFont(font);
        lineEditMinutes->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(lineEditMinutes);


        verticalLayout_2->addLayout(horizontalLayout);

        lineEditBreak = new QLineEdit(centralwidget);
        lineEditBreak->setObjectName("lineEditBreak");
        lineEditBreak->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEditBreak->setClearButtonEnabled(false);

        verticalLayout_2->addWidget(lineEditBreak);

        lineEditVideo = new QLineEdit(centralwidget);
        lineEditVideo->setObjectName("lineEditVideo");
        QFont font1;
        font1.setItalic(true);
        lineEditVideo->setFont(font1);
        lineEditVideo->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(lineEditVideo);

        buttonStart = new QPushButton(centralwidget);
        buttonStart->setObjectName("buttonStart");

        verticalLayout_2->addWidget(buttonStart);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        listWidget->setMaximumSize(QSize(16777215, 540));
        listWidget->setResizeMode(QListView::ResizeMode::Adjust);
        listWidget->setSpacing(0);

        verticalLayout_2->addWidget(listWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        buttonDelete = new QPushButton(centralwidget);
        buttonDelete->setObjectName("buttonDelete");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonDelete->sizePolicy().hasHeightForWidth());
        buttonDelete->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(buttonDelete);

        buttonAdd = new QPushButton(centralwidget);
        buttonAdd->setObjectName("buttonAdd");
        sizePolicy1.setHeightForWidth(buttonAdd->sizePolicy().hasHeightForWidth());
        buttonAdd->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(buttonAdd);


        verticalLayout_2->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lineEditHours->setText(QCoreApplication::translate("MainWindow", "00", nullptr));
        labelDivider->setText(QCoreApplication::translate("MainWindow", ":", nullptr));
        lineEditMinutes->setText(QCoreApplication::translate("MainWindow", "25", nullptr));
        lineEditVideo->setText(QString());
        buttonStart->setText(QCoreApplication::translate("MainWindow", "Start Session", nullptr));
        buttonDelete->setText(QCoreApplication::translate("MainWindow", "Delete Profile", nullptr));
        buttonAdd->setText(QCoreApplication::translate("MainWindow", "Add to Profiles", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
