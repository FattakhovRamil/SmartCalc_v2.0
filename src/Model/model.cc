#include "model.h"

namespace s21 {

Model::Model(const std::string expression) {
  mathExp = expression;

  std::vector<Node> myStack;
  std::vector<Node> Ready;
  std::vector<Node> Support;
}

int Model::CalceDeposit(double sumVkald, int srok, double procentStavka,
                        double nalogStavka, int periodViplat,
                        int capitProsentov, double spisok_poplneni,
                        double spisokCnaty, double *nacislenProsenty,
                        double *sumNalog, double *sumEnd,
                        int spisokPoplneniDate, int spisokCnatyDate) {
  double tmp = sumVkald;
  double tmpScet = 0;
  double capitProsentovTmp = 0;
  double periodViplatSum = 0;
  *sumNalog = 0;
  for (int i = 1; i <= srok; i++) {
    if (capitProsentov == 1) {  // Капитализация процентов
      *nacislenProsenty += tmp * procentStavka / 100. / 12.;  // считаем доход
      *sumNalog += tmp * (procentStavka / 100. / 12.) *
                   (nalogStavka / 100. / 12.);  // считаем налог
      tmp += tmp * procentStavka / 100. / 12. -
             tmp * (procentStavka / 100. / 12.) * (nalogStavka / 100. / 12.);

      if (spisok_poplneni && fmod(i, spisokPoplneniDate) == 0) {
        tmp += spisok_poplneni;
      }

      if (spisokCnaty && fmod(i, spisokCnatyDate) == 0) {
        tmp -= spisokCnaty;
      }
      if (fmod(i, periodViplat) == 0) {
        periodViplatSum += tmp - sumVkald;
        tmp = sumVkald;
      }
    } else {
      // Простые проценты
      tmpScet = sumVkald * (procentStavka / 100.) / 12.;  // доход процентый
      *sumNalog += tmpScet * (nalogStavka / 100. / 12.);  // налог на доход
      if (spisok_poplneni) {
        sumVkald += spisok_poplneni;
      }
      if (spisokCnaty) {
        sumVkald -= spisokCnaty;
      }
      capitProsentovTmp += tmpScet;
    }
  }
  if (capitProsentov == 1) {
    if (periodViplat == 1 || periodViplat == 2 || periodViplat == 3) {
      *sumEnd = tmp + periodViplatSum;
    } else {
      *sumEnd = tmp;
    }
  } else {
    *sumEnd = sumVkald + capitProsentovTmp - *sumNalog;  // вычесть налог
    *nacislenProsenty = capitProsentovTmp;
  }
  return 1;
}

int Model::CalcCredit(double totalPayment, int term, int yearsOrMonth,
                      double interestRate, int typeOfLoan,
                      double *separatePayment, double *separatePayment1,
                      double *overpayment, double *totalPayout) {
  double KA1 = 0;
  double KA2 = 0;
  double KA = 0;
  double EPS = 0;
  double b = 0;
  double totalPaymentTmp = totalPayment;
  EPS = interestRate / 12 / 100;
  if (!yearsOrMonth) {
    term = 12 * term;
  }
  if (typeOfLoan) {                   // Диф
    b = totalPayment / (term * 1.0);  // ежем часть платежа базовая
    for (int i = 0; i < term; i++) {
      if (i == 0) {
        *separatePayment = totalPaymentTmp * EPS + b;
      }
      if (i + 1 == term) {
        *separatePayment1 = totalPaymentTmp * EPS + b;
      }
      *totalPayout += b + (totalPaymentTmp * EPS);  // общая выплата
      totalPaymentTmp -= b;
    }
    *overpayment = *totalPayout - totalPayment;
  } else {  // aнну
    KA1 = EPS * pow((1 + EPS), term);
    KA2 = pow(1 + EPS, term) - 1;
    KA = KA1 / KA2;
    *separatePayment = (totalPayment * KA);
    *separatePayment = *separatePayment;
    *totalPayout = *separatePayment * term;
    *totalPayout = *totalPayout;
    *overpayment = *totalPayout - totalPayment;
    //*overpayment =  *overpayment;
  }
  *separatePayment = *separatePayment;
  *totalPayout = *totalPayout;
  //*overpayment =  *overpayment;
  return 1;
}

bool Model::CheckingForCorrectness() {
  typedef exprtk::symbol_table<double> symbol_table_t;
  typedef exprtk::expression<double> expression_t;
  typedef exprtk::parser<double> parser_t;

  symbol_table_t symbolTable;
  expression_t expression;
  parser_t parser;

  // Определение переменных
  symbolTable.add_variable("x", x_);
  symbolTable.add_function("ln", std::log);

  // Компиляция выражения
  std::string expressionString = mathExp;
  expression.register_symbol_table(symbolTable);

  try {
    parser.compile(expressionString, expression);
    return true;  // Если вычисление прошло успешно, вернуть true
  } catch (const std::exception &e) {
    std::cerr << "Expression compilation or evaluation failed: " << e.what()
              << std::endl;
    return false;
  }
}

bool Model::CheckingForCorrectnessExtra() {
  std::string operators[] = {
      "--", "**", "//", "++", "^^", "..", "%%", "X(", ")X", "tX",
      "nX", "sX", "gX", "Xs", "Xc", "Xt", "Xl", "XX", "Xa", "X.X",
  };

  std::string expression = mathExp;  // Ваша строка

  for (const std::string &op : operators) {
    if (expression.find(op) != std::string::npos) {
      return 1;
    }
  }
  return 0;
}

int Model::IsNumber() {
  int countNumber = 0;
  std::string number(255, '\0');
  int flagDot = 1;
  int flagE = 0;

  if (!((48 <= mathExp[iterator] && mathExp[iterator] <= 57) ||
        mathExp[iterator] == '.')) {
    return 0;
  }
  if (mathExp[iterator] == '.') {
    flagDot = 0;
  }

  number[countNumber] = mathExp[iterator];
  countNumber++;

  while (48 <= mathExp[iterator + 1] && mathExp[iterator + 1] <= 57) {
    ++iterator;
    number[countNumber] = mathExp[iterator];
    ++countNumber;
  }

  if (mathExp[iterator + 1] == '.' && flagDot) {
    ++iterator;
    number[countNumber] = '.';
    ++countNumber;
  }

  while (48 <= mathExp[iterator + 1] && mathExp[iterator + 1] <= 57 &&
         flagDot) {
    ++iterator;
    number[countNumber] = mathExp[iterator];
    ++countNumber;
  }

  if (mathExp[iterator + 1] == 'E') {
    ++iterator;
    number[countNumber] = mathExp[iterator];
    ++countNumber;
    flagE = 1;
  }

  if ((mathExp[iterator + 1] == '+' || mathExp[iterator + 1] == '-') && flagE) {
    ++iterator;
    number[countNumber] = mathExp[iterator];
    ++countNumber;
  }

  while ((48 <= mathExp[iterator + 1] && mathExp[iterator + 1] <= 57) &&
         flagE) {
    ++iterator;
    number[countNumber] = mathExp[iterator];
    ++countNumber;
  }

  try {
    std::string numberStr = number;
    long double f = 0;

    std::stringstream ss(numberStr);
    ss >> std::setprecision(10) >> f;
    std::cout << std::setprecision(10) << f << std::endl;
    Node tmp = {f, 0, numV};
    myStack.push_back(tmp);
    return 1;
  } catch (const std::out_of_range &e) {
    std::cout << "Ошибка преобразование" << std::endl;
    return 2;
  }
  return 1;
}

void Model::push_back(Node tmp) { myStack.push_back(tmp); }

bool Model::IsOper() {
  if (mathExp[iterator] == 'a') {
    iterator++;
    if (mathExp[iterator] == 's') {  // asin
      iterator += 2;
      Node tmp = {0, 4, asinV};
      myStack.push_back(tmp);
      return true;
    } else if (mathExp[iterator] == 'c') {  // acos
      iterator += 2;
      Node tmp = {0, 4, acosV};
      myStack.push_back(tmp);
      return true;
    } else {  // atan
      iterator += 2;
      Node tmp = {0, 4, atanV};
      myStack.push_back(tmp);
      return true;
    }
  } else if (mathExp[iterator] == 's') {
    iterator++;
    if (mathExp[iterator] == 'i') {  // sin
      iterator++;
      Node tmp = {0, 4, sinV};
      myStack.push_back(tmp);
      return true;
    } else {  // sqrt
      iterator += 2;
      Node tmp = {0, 4, sqrtV};
      myStack.push_back(tmp);
      return true;
    }
  } else if (mathExp[iterator] == 'c') {  // cos
    iterator += 2;
    Node tmp = {0, 4, cosV};
    myStack.push_back(tmp);
    return true;
  } else if (mathExp[iterator] == 't') {
    iterator += 2;
    Node tmp = {0, 4, tanV};
    myStack.push_back(tmp);
    return true;
  } else if (mathExp[iterator] == 'l') {
    iterator++;
    if (mathExp[iterator] == 'n') {  // ln
      Node tmp = {0, 4, lnV};
      myStack.push_back(tmp);
      return true;
    } else {  // log
      iterator++;
      Node tmp = {0, 4, logV};
      myStack.push_back(tmp);
      return true;
    }
  }

  return false;
}

bool Model::IsSepor() {
  if (mathExp[iterator] == '(') {
    Node tmp = {0, 5, LBrV};
    myStack.push_back(tmp);
    return true;
  } else if (mathExp[iterator] == ')') {
    Node tmp = {0, 5, RBrV};
    myStack.push_back(tmp);
    return true;
  } else if (mathExp[iterator] == '+') {
    Node tmp = {0, 1, plusV};
    myStack.push_back(tmp);
    return true;
  } else if (mathExp[iterator] == '-') {
    Node tmp = {0, 1, minusV};
    myStack.push_back(tmp);
    return true;
  } else if (mathExp[iterator] == '*') {
    Node tmp = {0, 2, umnV};
    myStack.push_back(tmp);
    return true;
  } else if (mathExp[iterator] == '^') {
    Node tmp = {0, 3, stepV};
    myStack.push_back(tmp);
    return true;
  } else if (mathExp[iterator] == '/') {
    Node tmp = {0, 2, delV};
    myStack.push_back(tmp);
    return true;
  } else if (mathExp[iterator] == '%') {
    Node tmp = {0, 2, modV};
    myStack.push_back(tmp);
    return true;
  }

  return false;
}

bool Model::IsX() {
  if (mathExp[iterator] == 'X') {
    Node tmp = {x_, 0, numV};
    myStack.push_back(tmp);
    return true;
  } else {
    return false;
  }
}

bool Model::Parser() {
  Node tmp = {0, 0, numV};
  bool flag = true;
  for (iterator = 0; iterator < 255 && mathExp[iterator] != '\0'; ++iterator) {
    if (mathExp[0] == '-' && flag) {
      myStack.push_back(tmp);
      flag = false;
    }
    if (IsOper()) {
    } else if (IsSepor()) {
    } else if (IsX()) {
    } else if (IsNumber() == 1) {
    } else {
      return false;
    }
  };
  return true;
}

// void Model::printNode(Node node) {
//   std::cout << "Приоритет:" << node.priority << "   Значение:" << node.value
//             << "    Тип :" << node.typeL << std::endl;
// }

void Model::push_front(Node node, std::vector<Node> &Vector) {
  Vector.insert(Vector.begin(), node);
}

void Model::pop_front(std::vector<Node> &Vector) {
  Vector.erase(Vector.begin());
}

long double Model::RevPolishNota() {
  while (Ready.size() != 1) {
    iterator = 0;
    while (Ready[iterator].priority == 0) {
      ++iterator;
    }
    if (3 <= Ready[iterator].typeL && 8 >= Ready[iterator].typeL) {
      MatOperTwo(Ready[iterator].typeL);
    } else {
      MatOperOne(Ready[iterator].typeL);
    }
  }
  return Ready[0].value;
}

bool Model::MatOperOne(typeLeksem tmp) {
  if (tmp == cosV) {
    Ready[iterator - 1].value = cos(Ready[iterator - 1].value);
    Ready.erase(Ready.begin() + iterator);
    return true;
  }
  if (tmp == sinV) {
    Ready[iterator - 1].value = sin(Ready[iterator - 1].value);
    Ready.erase(Ready.begin() + iterator);
    return true;
  }
  if (tmp == tanV) {
    Ready[iterator - 1].value = tan(Ready[iterator - 1].value);
    Ready.erase(Ready.begin() + iterator);
    return true;
  }
  if (tmp == acosV) {
    Ready[iterator - 1].value = acos(Ready[iterator - 1].value);
    Ready.erase(Ready.begin() + iterator);
    return true;
  }
  if (tmp == asinV) {
    Ready[iterator - 1].value = asin(Ready[iterator - 1].value);
    Ready.erase(Ready.begin() + iterator);
    return true;
  }
  if (tmp == atanV) {
    Ready[iterator - 1].value = atan(Ready[iterator - 1].value);
    Ready.erase(Ready.begin() + iterator);
    return true;
  }
  if (tmp == sqrtV) {
    Ready[iterator - 1].value = sqrt(Ready[iterator - 1].value);
    Ready.erase(Ready.begin() + iterator);
    return true;
  }
  if (tmp == lnV) {
    Ready[iterator - 1].value = std::log(Ready[iterator - 1].value);
    Ready.erase(Ready.begin() + iterator);
    return true;
  }
  if (tmp == logV) {
    Ready[iterator - 1].value = std::log10(Ready[iterator - 1].value);
    Ready.erase(Ready.begin() + iterator);
    return true;
  }
  return false;
}

bool Model::MatOperTwo(typeLeksem tmp) {
  long double tmp_ansver = 0;
  if (tmp == plusV) {
    tmp_ansver = Ready[iterator - 2].value + Ready[iterator - 1].value;
    Ready[iterator - 1].value = tmp_ansver;
    Ready.erase(Ready.begin() + iterator);  // // удаляю мат операцию аргумент
    Ready.erase(Ready.begin() + iterator - 2);  // удаляю 1 аргумент
    return true;
  }
  if (tmp == minusV) {
    if (Ready.size() == 2) {
      Ready.erase(Ready.begin() + iterator);
      Ready[0].value = -Ready[0].value;
      return true;
    }
    tmp_ansver = Ready[iterator - 2].value - Ready[iterator - 1].value;
    Ready[iterator - 1].value = tmp_ansver;
    Ready.erase(Ready.begin() + iterator);  // // удаляю мат операцию аргумент
    Ready.erase(Ready.begin() + iterator - 2);  // удаляю 1 аргумент
    return true;
  }
  if (tmp == delV) {
    tmp_ansver = Ready[iterator - 2].value / (1.0 * Ready[iterator - 1].value);
    Ready[iterator - 1].value = tmp_ansver;
    Ready.erase(Ready.begin() + iterator);  // // удаляю мат операцию аргумент
    Ready.erase(Ready.begin() + iterator - 2);  // удаляю 1 аргумент
    return true;
  }
  if (tmp == umnV) {
    tmp_ansver = Ready[iterator - 2].value * Ready[iterator - 1].value;
    Ready[iterator - 1].value = tmp_ansver;
    Ready.erase(Ready.begin() + iterator);  // // удаляю мат операцию аргумент
    Ready.erase(Ready.begin() + iterator - 2);  // удаляю 1 аргумент
    return true;
  }
  if (tmp == stepV) {
    tmp_ansver = pow(Ready[iterator - 2].value, Ready[iterator - 1].value);
    Ready[iterator - 1].value = tmp_ansver;
    Ready.erase(Ready.begin() + iterator);  // // удаляю мат операцию аргумент
    Ready.erase(Ready.begin() + iterator - 2);  // удаляю 1 аргумент
    return true;
  }
  if (tmp == modV) {
    tmp_ansver = fmod(Ready[iterator - 2].value, Ready[iterator - 1].value);
    Ready[iterator - 1].value = tmp_ansver;
    Ready.erase(Ready.begin() + iterator);  // // удаляю мат операцию аргумент
    Ready.erase(Ready.begin() + iterator - 2);  // удаляю 1 аргумент
    return true;
  }
  return false;
}

bool Model::Preparation() {
  int count = 0;
  while (!myStack.empty()) {
    if (myStack.front().priority == 0) {
      push_front(myStack.front(), Ready);  // push_front insert(куда, что)
      pop_front(myStack);  // удалить (указатель что)
      count++;
    } else if (myStack.front().priority == 1) {
      if (count == 0 && myStack[1].typeL == numV) {
        if (myStack.front().typeL == minusV) myStack[1].value *= -1;
        count++;
        pop_front(myStack);
        continue;
      }
      if (Support.empty()) {
        Support.push_back(myStack.front());
        pop_front(myStack);
      } else if (Support.front().priority < myStack.front().priority ||
                 Support.back().typeL == LBrV) {
        Support.push_back(myStack.front());
        pop_front(myStack);
      } else {
        while (!(Support.empty()) &&
               Support.back().priority >= myStack.front().priority) {
          push_front(Support.back(), Ready);  // push_front insert(куда, что)
          Support.pop_back();
        }
      }
    } else if (myStack.front().priority == 2) {
      if (Support.empty() ||
          Support.back().priority < myStack.front().priority ||
          Support.back().priority == 5) {  // проверка пустой ли Support или уже
        Support.push_back(myStack.front());
        pop_front(myStack);
      } else {
        while (!(Support.empty()) &&
               Support.back().priority >= myStack.front().priority &&
               Support.back().priority != 5) {
          push_front(Support.back(), Ready);  // push_front insert(куда, что)
          Support.pop_back();
        }
      }
    } else if (myStack.front().priority == 3) {
      if (Support.empty() ||
          Support.front().priority <= myStack.front().priority ||
          Support.back().priority ==
              5) {  // проверка пустой ли Support или уже лежит элемент с таким
        Support.push_back(myStack.front());
        pop_front(myStack);
      } else {
        while ((!(Support.empty()) &&
                Support.front().priority > myStack.front().priority) &&
               Support.back().priority != 5) {
          push_front(Support.front(), Ready);
          pop_front(Support);
        }
      }
    } else if (myStack.front().priority == 4) {
      if (Support.empty() ||
          Support.front().priority <=
              myStack.front().priority) {  // проверка пустой ли Support или уже
        Support.push_back(myStack.front());
        pop_front(myStack);
      } else {
        while (!(Support.empty()) ||
               Support.front().priority > myStack.front().priority) {
          push_front(Support.front(), Ready);
          pop_front(Support);
        }
      }
    } else {
      if (myStack.front().typeL == LBrV) {
        if ((myStack[1].typeL == minusV || myStack[1].typeL == plusV) &&
            myStack[2].typeL == numV) {
          if (myStack[1].typeL == minusV) myStack[2].value *= -1;
          count++;
          Support.push_back(myStack.front());
          pop_front(myStack);
          pop_front(myStack);
        } else {
          Support.push_back(myStack.front());
          pop_front(myStack);
        }
      } else {
        while (!Support.empty() && Support.back().typeL != LBrV) {
          push_front(Support.back(), Ready);
          Support.pop_back();
        }
        Support.pop_back();
        pop_front(myStack);
      }
    }
  }
  std::reverse(Support.begin(), Support.end());
  while (!Support.empty()) {
    push_front(Support.front(), Ready);
    pop_front(Support);
  }
  std::reverse(Ready.begin(), Ready.end());
  return true;
}

bool Model::CalcBasic(char *str, double x1, long double &ansverQt) {
  try {
    std::string tmp = str;
    Model mod = Model(tmp);
    mod.x_ = x1;
    if (mod.CheckingForCorrectness()) {
      if (mod.CheckingForCorrectnessExtra()) {
        return true;
      }
      if (mod.Parser()) {
        mod.Preparation();
        ansverQt = mod.RevPolishNota();
      } else {
        return true;
      }
    } else {
      return true;
    }
  } catch (const std::exception &e) {
    std::cerr << "Произошло исключение" << e.what() << std::endl;
    return false;
  }
  return false;
}
}  // namespace s21
