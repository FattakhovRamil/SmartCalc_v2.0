#ifndef SRC_VIEW_VIEW_H
#define SRC_VIEW_VIEW_H

#include <QMainWindow>
#include <QStackedWidget>
#include <QVector>

#include "../Controller/controller.h"
#include "creditWindow.h"
#include "depositWindow.h"
#include "ui_view.h"
namespace s21 {

class View : public QMainWindow {
  Q_OBJECT
 public:
  Controller *controller;
  DepositWindow *dWindow;
  CreditWindow *sWindow;

  View(QWidget *parent = nullptr);
  ~View();
  View(Controller *controller) : controller(controller) {
    dWindow = new DepositWindow(
        controller);  // Инициализация depositWindow с передачей контроллера
    sWindow = new CreditWindow(controller);
  };
 private slots:
  void OpenCreditWindow();
  void OpenDepositWindow();
  void OpenGraphWindow();
  void DigitsNumbers();
  void DelAll();
  void DelLastChar();
  void Calculate();
  void on_pushButton_grah_clicked();

 private:
  double xBegin_, xEnd_, h_, X_;
  int N_;
  QVector<double> x_, y_;
  Ui::MainWindow *ui_;
};

};      // namespace s21
#endif  // SRC_VIEW_VIEW_H
