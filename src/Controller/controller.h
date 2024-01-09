#ifndef SRC_CONTROLLER_CONTROLLER_H
#define SRC_CONTROLLER_CONTROLLER_H

#include "../Model/model.h"

namespace s21 {
class Controller {
 public:
  static Controller &getInstance(Model *m) {
    static Controller instance(m);
    return instance;
  }

  bool Calculate(char *str, double x1, long double &ansver_qt);
  int CalculateDeposit(double sumVkald, int srok, double procentStavka,
                       double nalogStavka, int periodViplat, int capitProsentov,
                       double spisokPoplneni, double spisokCnaty,
                       double *nacislenProsenty, double *sumNalog,
                       double *sumEnd, int spisokPoplneniDate,
                       int spisokCnatyDate);
  int CalculateCredit(double totalPayment, int term, int yearsOrMonth,
                      double interestRate, int typeOfLoan,
                      double *separatePayment, double *separatePayment1,
                      double *overpayment, double *totalPayout);

 private:
  Model *model_;
  Controller(Model *m) : model_(m){};  // Сделали конструктор приватным
};
}  // namespace s21
#endif  // SRC_CONTROLLER_CONTROLLER_H
