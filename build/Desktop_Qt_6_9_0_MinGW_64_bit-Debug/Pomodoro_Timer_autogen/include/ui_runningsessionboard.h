/********************************************************************************
** Form generated from reading UI file 'runningsessionboard.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RUNNINGSESSIONBOARD_H
#define UI_RUNNINGSESSIONBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_RunningSessionBoard
{
public:
    QLabel *labelHours;
    QLabel *labelMinutes;
    QLabel *label_3;
    QLabel *labelSeconds;
    QLabel *label_4;
    QLabel *labelBreak;

    void setupUi(QDialog *RunningSessionBoard)
    {
        if (RunningSessionBoard->objectName().isEmpty())
            RunningSessionBoard->setObjectName("RunningSessionBoard");
        RunningSessionBoard->resize(379, 124);
        labelHours = new QLabel(RunningSessionBoard);
        labelHours->setObjectName("labelHours");
        labelHours->setGeometry(QRect(30, 30, 51, 51));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(true);
        labelHours->setFont(font);
        labelMinutes = new QLabel(RunningSessionBoard);
        labelMinutes->setObjectName("labelMinutes");
        labelMinutes->setGeometry(QRect(170, 30, 51, 51));
        labelMinutes->setFont(font);
        label_3 = new QLabel(RunningSessionBoard);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(120, 30, 51, 51));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setItalic(false);
        label_3->setFont(font1);
        labelSeconds = new QLabel(RunningSessionBoard);
        labelSeconds->setObjectName("labelSeconds");
        labelSeconds->setGeometry(QRect(300, 30, 51, 51));
        labelSeconds->setFont(font);
        label_4 = new QLabel(RunningSessionBoard);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(250, 30, 51, 51));
        label_4->setFont(font1);
        labelBreak = new QLabel(RunningSessionBoard);
        labelBreak->setObjectName("labelBreak");
        labelBreak->setGeometry(QRect(150, 80, 81, 31));
        labelBreak->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(RunningSessionBoard);

        QMetaObject::connectSlotsByName(RunningSessionBoard);
    } // setupUi

    void retranslateUi(QDialog *RunningSessionBoard)
    {
        RunningSessionBoard->setWindowTitle(QCoreApplication::translate("RunningSessionBoard", "Dialog", nullptr));
        labelHours->setText(QCoreApplication::translate("RunningSessionBoard", "00", nullptr));
        labelMinutes->setText(QCoreApplication::translate("RunningSessionBoard", "00", nullptr));
        label_3->setText(QCoreApplication::translate("RunningSessionBoard", ":", nullptr));
        labelSeconds->setText(QCoreApplication::translate("RunningSessionBoard", "00", nullptr));
        label_4->setText(QCoreApplication::translate("RunningSessionBoard", ":", nullptr));
        labelBreak->setText(QCoreApplication::translate("RunningSessionBoard", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700; color:#aa0000;\">BREAK</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RunningSessionBoard: public Ui_RunningSessionBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RUNNINGSESSIONBOARD_H
