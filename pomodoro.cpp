#include <QtCore>
#include <QtGui>
#include "pomodoro.h"

Pomodoro::Pomodoro(QObject *parent) : QObject (parent) {
  //tasks = new QStringList;
  tasks = new QList<Task>;
  timer = new QTimer;
}

Pomodoro::~Pomodoro() {

}

void Pomodoro::addTask(Task *task) {
  //tasks << task->getContent();
}

Task::Task(QString content, QObject *parent) : QObject (parent) {
  this->content = content;
}

Task::~Task() {

}

QString Task::getContent() {
  return content;
}
