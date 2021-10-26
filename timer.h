#pragma once
#ifndef TIMER_H
#define TIMER_H

#include <QtWidgets/QWidget>
#include <QtCore/QTime>
#include <QtWidgets/QLabel>

class Timer {
    QTime time;
    QString description;
    void TimerEvent(QTimerEvent *e);
public:
    Timer();
    Timer(QTime time, QLabel description);
    Timer(QTime time, QString description);
    QTime getTime();
    void setTime(QTime newTime);
    QString getDescription();
    void setDescription(QString newDescription);
};
#endif // TIMER_H

