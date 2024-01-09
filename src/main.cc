#include <QApplication>

#include "View/view.h"
using namespace s21;

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  Model *model = new Model(); // Создаем объект модели
  Controller& controller = Controller::getInstance(model); // Получаем единственный экземпляр контроллера
  View w(&controller);
  View z;
  z.show();
  return a.exec();
}
