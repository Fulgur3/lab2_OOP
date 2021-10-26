#pragma once
#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "timer.h"
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QVBoxLayout>
#include <QTimer>
#include <QtCore/QTime>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QApplication>
#include <QtGui/QFontDatabase>
#include <QtCore/QList>
#include <QtWidgets/QMessageBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QCheckBox>

class MainWindow :
    public QMainWindow {
    Q_OBJECT
public:
    MainWindow();
    QTime temp;
private:


    //Tools
    QToolBar* toolbar;
    void setToolBar();
    QLabel* timelabel;
    //Window Widgets
    QLabel* mainTimerLabel;
    QTextEdit* mainTimerDescriptionLabel;
    QListWidget* listW;
    QList<Timer> timers;
    //Add window
    QWidget* addWindow;
    QLabel* addTimerLbl;
    QLabel* addDescLbl;
    QLabel* addCountLbl;
    QTimeEdit* addTimeEdit;
    QTextEdit* addTextEdit;
    QTextEdit* addCountTextEdit;
    void addTimer();
    //Signal Window
    QWidget* signalWindow;
    QLabel* timeoutLbl;
    QTextEdit* timeoutDescLbl;
    QPushButton* timeoutOKBtn;
    void timeoutWindow();
    //Edit Window
    QWidget* editWindow;
    QLabel* editTimeLbl;
    QLabel* editDescLbl;
    QTimeEdit* editTimeEdit;
    QTextEdit* editDescEdit;
    QPushButton* editTimerBtn;
    void toEditWindow();
    Timer buffer;
    QString tmp;
    int positionToEdit;
    //Info Window
    QWidget* settingsWindow;
    QLabel* doNotLbl;
    QCheckBox* doNotCheckBox;
    QPushButton* infoOKBtn;
    bool doNotDisturb;
    //To Stop
    QVector<int> stoppedTimersPositions;

private slots:
    void addTimerBtnClicked();
    void stopTimer();
    void editTimerBtnClicked();
    void deleteTimer();
    void deleteAllTimers();
    void settingsWindowSlot();
    void infoOKBtnClicked();
private:
    void timerEvent(QTimerEvent* e);
    QList<Timer> getTimers();
    void timersSort();
    void updateTimersListW();
};

#endif //MAINWINDOW_H
