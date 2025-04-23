#ifndef RUNNINGSESSIONBOARD_H
#define RUNNINGSESSIONBOARD_H

#include <QDialog>
#include <QUrl>

namespace Ui {
class RunningSessionBoard;
}

class RunningSessionBoard : public QDialog
{
    Q_OBJECT

public:
    explicit RunningSessionBoard(int hours, int minutes, int breakTime, QString link, QWidget *parent = nullptr);
    ~RunningSessionBoard();

private:
    int m_hours;
    int m_minutes;
    int m_secondsLeft;
    int m_breakTime;
    QTimer* m_Timer;

    Ui::RunningSessionBoard *ui;
    void startSession();
    int getSeconds();
    void startBreak();
    bool m_isSession;
    void openVideo(const QUrl&);

private slots:
    void timerTick();
};

#endif // RUNNINGSESSIONBOARD_H
