#include "view.h"

namespace s21 {

View::View(QWidget *parent) : QMainWindow(parent) {
  ui_ = new ::Ui::MainWindow();
  ui_->setupUi(this);
  sWindow = new CreditWindow(controller);
  dWindow = new DepositWindow(controller);
  ui_->result_show->setText("");
  connect(ui_->pushButton_0, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
  connect(ui_->pushButton_1, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
  connect(ui_->pushButton_2, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
  connect(ui_->pushButton_3, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
  connect(ui_->pushButton_4, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
  connect(ui_->pushButton_5, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
  connect(ui_->pushButton_6, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
  connect(ui_->pushButton_7, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
  connect(ui_->pushButton_8, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
  connect(ui_->pushButton_9, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
  connect(ui_->pushButton_AC, SIGNAL(clicked()), this, SLOT(DelAll()));
  connect(ui_->pushButton_C, SIGNAL(clicked()), this, SLOT(DelLastChar()));
  connect(ui_->pushButton_acos, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
  connect(ui_->pushButton_asin, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
  connect(ui_->pushButton_atan, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
  connect(ui_->pushButton_br_l, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
  connect(ui_->pushButton_br_r, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
  connect(ui_->pushButton_cos, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
  connect(ui_->pushButton_del, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
  connect(ui_->pushButton_dot, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
  connect(ui_->pushButton_ln, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
  connect(ui_->pushButton_log, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
  connect(ui_->pushButton_min, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
  connect(ui_->pushButton_mod, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
  connect(ui_->pushButton_plus, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
  connect(ui_->pushButton_ravno, SIGNAL(clicked()), this, SLOT(Calculate()));
  connect(ui_->pushButton_sin, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
  connect(ui_->pushButton_sqrt, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
  connect(ui_->pushButton_tan, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
  connect(ui_->pushButton_step, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
  connect(ui_->pushButton_ymno, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
  connect(ui_->pushButton_X, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
  connect(ui_->action_credit, &QAction::triggered, this,
          &View::OpenCreditWindow);
  connect(ui_->action_depoz, &QAction::triggered, this,
          &View::OpenDepositWindow);
  connect(ui_->action_graph, &QAction::triggered, this, &View::OpenGraphWindow);
  connect(ui_->pushButton_e, SIGNAL(clicked()), this, SLOT(DigitsNumbers()));
}

View::~View() { delete ui_; }

void View::OpenCreditWindow() {
  sWindow->show();  // Показываем второе окно
  // this->close();    // Закрываем основное окно
  dWindow->close();
}

void View::OpenDepositWindow() {
  dWindow->show();  // Показываем второе окно
  // this->close();    // Закрываем основное окно
  sWindow->close();
}

void View::OpenGraphWindow() {
  this->show();  // Показываем второе окно
  // dWindow->close();  // Закрываем основное окно
  // sWindow->close();
}

void View::DigitsNumbers() {
  QPushButton *button = (QPushButton *)sender();
  QString newLabel;
  // newLabel = ui_->result_show->text() + button->text());
  newLabel = QString(ui_->result_show->text() + button->text());
  ui_->result_show->setText(newLabel);
}

void View::DelAll() {
  ui_->result_show->setText("");
  ui_->result_ansver->setText("");
}

void View::DelLastChar() {
  QString newLabel = ui_->result_show->text();
  newLabel.chop(1);
  ui_->result_show->setText(newLabel);
  ui_->result_ansver->setText("");
}

void View::Calculate() {
  char str[255] = "";
  QString newLabel = ui_->result_show->text();
  QByteArray bytes =
      newLabel.toLocal8Bit();  // получить локально-совместимую кодировку
  qstrncpy(str, bytes.data(), sizeof(str));
  double x = ui_->lineEdit_x->text().toDouble();
  long double ansver_qt = 0;

  if (!controller->Calculate(str, x, ansver_qt)) {
    ui_->result_ansver->setText(QString::number(ansver_qt, 'f', 7));
  } else {
    ui_->result_ansver->setText("Error");
  }
}

void View::on_pushButton_grah_clicked() {
  x_ = QVector<double>();
  y_ = QVector<double>();
  ui_->widget->clearGraphs();
  char str[255] = "";
  QString newLabel = ui_->result_show->text();
  QByteArray bytes =
      newLabel.toLocal8Bit();  // получить локально-совместимую кодировку
  qstrncpy(str, bytes.data(), sizeof(str));
  h_ = ui_->lineEdit_h->text().toDouble();
  xBegin_ = -100;
  xEnd_ = 100 + h_;
  ui_->widget->xAxis->setRange(ui_->lineEdit_x_l->text().toDouble(),
                               ui_->lineEdit_x_r->text().toDouble());
  ui_->widget->yAxis->setRange(ui_->lineEdit_y_l->text().toDouble(),
                               ui_->lineEdit_y_r->text().toDouble());
  X_ = xBegin_;
  N_ = (xEnd_ - xBegin_) / h_ + 2;
  double x1 = ui_->lineEdit_x->text().toDouble();
  long double ansver_qt = 0;
  if (!controller->Calculate(str, x1, ansver_qt)) {
    ui_->result_ansver->setText(QString::number(ansver_qt, 'g', 10));
    for (X_ = xBegin_; X_ <= xEnd_; X_ += h_) {
      controller->Calculate(str, X_, ansver_qt);
      x_.push_back(X_);
      controller->Calculate(str, X_, ansver_qt);
      y_.push_back(ansver_qt);
    }
    ui_->widget->addGraph();
    ui_->widget->graph(0)->setData(x_, y_);
    ui_->widget->graph(0)->setPen(QColor(50, 50, 50, 255));
    ui_->widget->graph(0)->setLineStyle(QCPGraph::lsNone);
    ui_->widget->graph(0)->setScatterStyle(
        QCPScatterStyle(QCPScatterStyle::ssCircle, 4));
    ui_->widget->replot();
  } else {
    ui_->result_ansver->setText("Error");
  }
}

};  // namespace s21
