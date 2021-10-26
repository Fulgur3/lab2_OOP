#include "timer.h"
Timer::Timer(QTime time, QLabel description) {
    this->time = time;
    this->description = description.text();
}

Timer::Timer(QTime time, QString description) {
    this->time = time;
    this->description = description;
}
QTime Timer::getTime() {
    return time;
}
void Timer::setTime(QTime newTime) {
    time = newTime;
}
QString Timer::getDescription() {
    return description;
}
void Timer::setDescription(QString newDescription) {
    description = newDescription;
}

void Timer::TimerEvent(QTimerEvent* event) {
    Q_UNUSED(event);
}

Timer::Timer() {
    this->time.setHMS(0, 0, 0);
    this->description = "\0";
}
