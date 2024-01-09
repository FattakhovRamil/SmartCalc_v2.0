#ifndef SRC_VIEW_CREDITWINDOW_H
#define SRC_VIEW_CREDITWINDOW_H

#include <QStandardItemModel>
#include <QWidget>

#include "../Controller/controller.h"
#include "ui_creditWindow.h"

namespace s21 {

class CreditWindow : public QWidget {
  Q_OBJECT

 public:
  explicit CreditWindow(Controller *controller);
  Controller *controller;
  ~CreditWindow();
  void CreditCalc();
 signals:
  void FirstWindow();  // Сигнал для первого окна на открытие

 public slots:
  // Слот-обработчик нажатия кнопки
  void on_pushButton_clicked();

 private slots:
  void on_result_calc_clicked();

 private:
  Ui::creditWindow *ui_;
  QStandardItemModel *model_;
};
}  // namespace s21
#endif  // SRC_VIEW_CREDITWINDOW_H
