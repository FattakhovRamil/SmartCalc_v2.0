#ifndef SRC_VIEW_DEPOSITWINDOW_H
#define SRC_VIEW_DEPOSITWINDOW_H

#include <QStandardItemModel>
#include <QWidget>

#include "../Controller/controller.h"
#include "ui_depositWindow.h"
namespace s21 {

class DepositWindow : public QWidget {
  Q_OBJECT

 public:
  explicit DepositWindow(Controller *controller);
  Controller *controller;
  ~DepositWindow();
  void CreditCalc();
 signals:
  void FirstWindow();

 public slots:
  void on_pushButton_clicked();

 private slots:

  void on_result_calc_clicked();

 private:
  Ui::depositWindow *ui_;
  QStandardItemModel *model_;
};
}  // namespace s21

#endif  // SRC_VIEW_DEPOSITWINDOW_H
