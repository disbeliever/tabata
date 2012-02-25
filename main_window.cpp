#include <QtGui>
#include <QSound>
#include <iostream>

#include "main_window.h"

MainWindow::MainWindow (QWidget *parent) : QMainWindow(parent) {
  ui.setupUi(this);
  timer = new QTimer(this);
  restTimer = new QTimer(this);
  connect(ui.startButton, SIGNAL(clicked()), SLOT(timerStart()));
  connect(ui.actionRenameTask, SIGNAL(activated()), SLOT(pomodoroRenameTask()));
  connect(restTimer, SIGNAL(timeout()), this, SLOT(restEvent()));
  connect(timer, SIGNAL(timeout()), this, SLOT(paintEvent()));

  connect(ui.pomodoroAddButton, SIGNAL(clicked()), this, SLOT(pomodoroAddTask()));
  running = false;

  pomodoro = new Pomodoro;
  pomodoro->addTask(new Task("Hello"));

  commandAndParameters <<
    "/home/nerevar/samples/thesys_drums_pt1/hats+2perc/hat5.flac";
}

MainWindow::~MainWindow() {

}

void MainWindow::pomodoroAddTask() {
  pomodoro->addTask(new Task("Example"));
  ui.listWidget->addItem("Hello world");
}

void MainWindow::pomodoroRenameTask() {
  ui.listWidget->openPersistentEditor(ui.listWidget->currentItem());
  std::cout << "renaming";
}

void MainWindow::timerStart() {
  if (running == true) {
    timer->stop();
    restTimer->stop();
    this->setStyleSheet("background-color: gray;");
    running = false;
    ui.startButton->setText("Start");
    return;
  }
  activeTime = ui.spinBoxInterval->value();
  restTime = ui.spinBoxPause->value();
  running = true;
  active = true;

  time.setHMS(0,0,0);
  updateTimer(ui.timerLabel);
  timer->start(1000);
  ui.startButton->setText("Stop");
  this->setStyleSheet("background-color: red;");
  restTimer->start(activeTime*1000);
  ps.start("mplayer", commandAndParameters);
}

void MainWindow::paintEvent() {
  time = time.addSecs(1);
  updateTimer(ui.timerLabel);
}

void MainWindow::updateTimer(QLabel *label) {
  label->setText(time.toString("m:ss"));
}

void MainWindow::restEvent() {
  if (active == true) {
    this->setStyleSheet("background-color: green;");
    restTimer->start(restTime*1000);
    active = false;
    ps.start("mplayer", commandAndParameters);
  }
  else {
    this->setStyleSheet("background-color: red;");
    restTimer->start(activeTime*1000);
    active = true;
    ps.start("mplayer", commandAndParameters);
  }
}
