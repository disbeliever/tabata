#include <qapplication.h>
#include "main_window.h"


int main(int argc, char **argv) {
  QApplication *qapp = new QApplication(argc, argv);

  MainWindow window;
  window.show();

  return qapp->exec();
}
