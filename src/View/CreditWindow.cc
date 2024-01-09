#include "creditWindow.h"

#include "ui_creditWindow.h"

namespace s21 {

CreditWindow::CreditWindow(Controller *controller)
// Используем указатель на объект интерфейса
{
  ui_ = new Ui::creditWindow();
  this->controller = controller;
  ui_->setupUi(this);
}

CreditWindow::~CreditWindow() { delete ui_; }

void CreditWindow::on_pushButton_clicked() {
  this->close();       // Закрываем окно
  emit FirstWindow();  // И вызываем сигнал на открытие главного окна
}

void CreditWindow::on_result_calc_clicked() {
  double sumCredit = ui_->sum_credit->text().toDouble();
  int srokCredit = ui_->srok_credit->text().toInt();
  double prosentStavka = ui_->prosent_stavka->text().toDouble();
  int yearOrMonth = ui_->comboBox->currentIndex();
  int typeOfLoan = 0;
  if (ui_->anny->isChecked()) {
    typeOfLoan = 0;  // если 0 не нажат анн, то диф 1
  } else {
    typeOfLoan = 1;
  }
  double separatePayment = 0;
  double SeparatePayment1 = 0;  //  платеж в месяц/год
  double overpayment = 0;       // переплата по кредиту
  double totalPayout = 0;       // общая выплатаÎ

  int flag = controller->CalculateCredit(
      sumCredit, srokCredit, yearOrMonth, prosentStavka, typeOfLoan,
      &separatePayment, &SeparatePayment1, &overpayment, &totalPayout);
  if (flag == 0) {
    printf("Ошибка");
  } else {
    if (typeOfLoan) {
      ui_->separate_payment->setText(QString::number(separatePayment) + "..." +
                                     QString::number(SeparatePayment1));
      ui_->overpayment->setText(QString::number(overpayment));
      ui_->total_payout->setText(QString::number(totalPayout));
    } else {
      ui_->separate_payment->setText(QString::number(separatePayment));
      ui_->overpayment->setText(QString::number(overpayment));
      ui_->total_payout->setText(QString::number(totalPayout));
    }
  }
}
}  // namespace s21
