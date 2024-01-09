#ifndef SRC_MODEL_MODEL_H
#define SRC_MODEL_MODEL_H

#include <stdlib.h>

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <list>
#include <sstream>
#include <string>
#include <vector>

#include "exprtk.hpp"

namespace s21 {

class Model {
 public:
  Model() : data(0) {}
  Model(const std::string expression);

  bool CalcBasic(char *str, double x1, long double &ansverQt);
  int CalceDeposit(double sumVkald, int srok, double procentStavka,
                   double nalogStavka, int periodViplat, int capitProsentov,
                   double spisokPoplneni, double spisokCnaty,
                   double *nacislenProsenty, double *sumNalog, double *sumEnd,
                   int spisokPoplneniDate, int spisokCnatyDate);
  int CalcCredit(double totalPayment, int term, int yearsOrMonth,
                 double interestRate, int typeOfLoan, double *separatePayment,
                 double *separatePayment1, double *overpayment,
                 double *totalPayout);

 private:
  double data;
  enum typeLeksem {
    xV = 0,
    XV = 1,      // икс
    numV = 2,    // число
    plusV = 3,   // +
    minusV = 4,  // -
    delV = 5,    // /
    umnV = 6,    // *
    stepV = 7,   // ^
    modV = 8,
    cosV = 9,
    sinV = 10,
    tanV = 11,
    acosV = 12,
    asinV = 13,
    atanV = 14,
    sqrtV = 15,
    lnV = 16,
    logV = 17,
    LBrV = 18,
    RBrV = 19,
    nothingV = 20,
    exception = 21,  //  ничего
  };

  std::string mathExp;
  double x_ = 10.0;
  int iterator = 0;

  struct Node {
    long double value;
    int priority;
    typeLeksem typeL;
  };

  std::vector<Node> myStack;
  std::vector<Node> Ready;
  std::vector<Node> Support;

  void push_back(Node tmp);

  bool CheckingForCorrectness();
  bool CheckingForCorrectnessExtra();
  bool Parser();

  int IsNumber();

  bool IsOper();

  bool IsSepor();

  bool IsX();

  long double RevPolishNota();

  bool Preparation();

  void printNode(Node node);

  void push_front(Node node, std::vector<Node> &Vector);
  void pop_front(std::vector<Node> &Vector);
  bool MatOperTwo(typeLeksem tmp);
  bool MatOperOne(typeLeksem tmp);
};
}  // namespace s21
#endif  // SRC_MODEL_MODEL_H
