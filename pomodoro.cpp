#include <QtCore>
#include <QtGui>
#include "pomodoro.h"

Pomodoro::Pomodoro() {
  //tasks = new QStringList;
  tasks = new QList<Task>;
  timer = new QTimer;
}

Pomodoro::~Pomodoro() {

}

void Pomodoro::addTask(Task& task) {
  tasks->append(task);
}

Task::Task(QString content) {
  this->content = content;
}

Task::~Task() {

}

QString Task::getContent() {
  return content;
}
