#include "controller.h"

#include "../Model/model.h"

namespace s21 {
bool Controller::Calculate(char *str, double x1, long double &ansver_qt) {
  return model_->CalcBasic(str, x1, ansver_qt);
}

int Controller::CalculateCredit(double totalPayment, int term, int yearsOrMonth,
                                double interestRate, int typeOfLoan,
                                double *separatePayment,
                                double *separatePayment1, double *overpayment,
                                double *totalPayout) {
  return model_->CalcCredit(totalPayment, term, yearsOrMonth, interestRate,
                            typeOfLoan, separatePayment, separatePayment1,
                            overpayment, totalPayout);
}

int Controller::CalculateDeposit(double sumVkald, int srok,
                                 double procentStavka, double nalogStavka,
                                 int periodViplat, int capitProsentov,
                                 double spisokPoplneni, double spisokCnaty,
                                 double *nacislenProsenty, double *sumNalog,
                                 double *sumEnd, int spisokPoplneniDate,
                                 int spisokCnatyDate) {
  return model_->CalceDeposit(sumVkald, srok, procentStavka, nalogStavka,
                              periodViplat, capitProsentov, spisokPoplneni,
                              spisokCnaty, nacislenProsenty, sumNalog, sumEnd,
                              spisokPoplneniDate, spisokCnatyDate);
}
}  // namespace s21
