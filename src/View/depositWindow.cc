#include "depositWindow.h"

namespace s21 {

DepositWindow::DepositWindow(Controller *controller) {
  ui_ = new Ui::depositWindow();
  this->controller = controller;  // Инициализируем поле controller
  ui_->setupUi(this);
}

DepositWindow::~DepositWindow() { delete ui_; }

void DepositWindow::on_pushButton_clicked() {
  this->close();       // Закрываем окно
  emit FirstWindow();  // И вызываем сигнал на открытие главного окна
}

void DepositWindow::on_result_calc_clicked() {
  double sumVkald = ui_->sum_deposit->text().toDouble();
  int srok = ui_->srok_deposit->text().toInt();
  double prosentStavka = ui_->prosent_stavka->text().toDouble();
  double nalogStavka = ui_->nalog_stavka->text().toDouble();
  int periodViplat =
      ui_->comboBox_period_viplat
          ->currentIndex();  // через какое время выплатить в месяцах
  if (periodViplat != 2) {
    if (periodViplat == 0) {
      periodViplat = 1;
    } else {
      periodViplat = 3;
    }
  }
  int capitProsentov =
      0;  // добавление дохода в основную сумму, 0 - вкл, 1 - выкл
  int yearOrMonth = ui_->comboBox->currentIndex();
  if (yearOrMonth == 0) {
    srok *= 12;
  }
  if (ui_->checkBox->checkState()) {
    capitProsentov = 1;
  }
  int spisokPoplneniDate = ui_->comboBox_spisok_popol->currentIndex() + 1;
  int spisokCnatyDate = ui_->comboBox_spisok_snatiy->currentIndex() + 1;
  if (spisokPoplneniDate != 1) {
    spisokPoplneniDate = ui_->comboBox_spisok_popol->currentIndex() * 3;
  }
  if (spisokCnatyDate != 1) {
    spisokCnatyDate = ui_->comboBox_spisok_snatiy->currentIndex() * 3;
  }
  double spisokPoplneni =
      ui_->spisok_poplneni->text().toDouble();  // сколько пополняю ежемесяечно;
  double spisokCnaty =
      ui_->spisok_cnaty->text().toDouble();  // сколько снимаю ежемесяечно;
  double nacislenProsenty = 0;
  double sumNalog = 0;
  double sumEnd = 0;

  int flag = controller->CalculateDeposit(
      sumVkald, srok, prosentStavka, nalogStavka, periodViplat, capitProsentov,
      spisokPoplneni, spisokCnaty, &nacislenProsenty, &sumNalog, &sumEnd,
      spisokPoplneniDate, spisokCnatyDate);
  if (flag == 0) {
    printf("Ошибка");
  } else {
    ui_->nacislen_prosenty->setText(QString::number(nacislenProsenty));
    ui_->sum_nalog->setText(QString::number(sumNalog));
    ui_->sum_end->setText(QString::number(sumEnd));
  }
}

}  // namespace s21
