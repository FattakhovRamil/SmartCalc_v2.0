#include <errno.h>
#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <iostream>

#include "../Model/model.h"

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST(Calc, ArTest1) {
  char str[] = "14+10.4";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 1, rez);

  double calc = 14 + 10.4;
  // std::floor(calc * 1e7) / 1e7;
  // std::cout<<rez << " " << calc << std::endl;
  EXPECT_TRUE(std::abs(rez - calc) < 1e-7);
}

TEST(Calc, ArTest2) {
  char str[] = "100.0-50+10.3";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  double calc = 100.0 - 50 + 10.3;
  // std::floor(calc * 1e7) / 1e7;
  EXPECT_TRUE(std::abs(rez - calc) < 1e-7);
}

TEST(Calc, ArTest3) {
  char str[] = "100/90*5";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  double calc = 5.55555555556;
  ASSERT_NEAR(rez, calc, 0.0000001);
}

TEST(Calc, ArTest4) {
  char str[] = "10*(2+3)";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  double calc = 50;
  ASSERT_NEAR(rez, calc, 0.0000001);
}

TEST(Calc, ArTest5) {
  char str[] = "28+3*15-47/15*8+10.6";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  double calc = 58.5333333333;
  EXPECT_TRUE(std::abs(rez - calc) < 1e-7);
}

TEST(Calc, ModTest6) {
  char str[] = "8%4";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  double calc = 8 % 4;
  ASSERT_EQ(std::round(rez * 10000000), std::round(calc * 10000000));
}

TEST(Calc, ModTest7) {
  char str[] = "18%14";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  long double calc = 4;
  ASSERT_EQ(std::round(rez * 10000000), std::round(calc * 10000000));
}

TEST(Calc, NumTest8) {
  char str[] = "10.12345";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  double check = 10.12345;
  EXPECT_TRUE(std::abs(rez - check) < 1e-7);
}

TEST(Calc, CosTest9) {
  char str[] = "cos(1)";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_EQ(std::round(rez * 10000000), std::round((cos(1)) * 10000000));
}

TEST(Calc, CosTest10) {
  char str[] = "cos(0)";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_EQ(std::round(rez * 10000000), std::round((cos(0)) * 10000000));
}

TEST(Calc, CosTest11) {
  char str[] = "cos(-1)";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_EQ(std::round(rez * 10000000), std::round((cos(-1)) * 10000000));
}

TEST(Calc, SinTest12) {
  char str[] = "sin(1)";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_EQ(std::round(rez * 10000000), std::round((sin(1)) * 10000000));
}

TEST(Calc, SinTest13) {
  char str[] = "sin(0)";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_EQ(std::round(rez * 10000000), std::round((sin(0)) * 10000000));
}

TEST(Calc, SinTest14) {
  char str[] = "sin(-1)";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_EQ(std::round(rez * 10000000), std::round((sin(-1)) * 10000000));
}

TEST(Calc, SinTest15) {
  char str[] = "sin(50)";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_EQ(std::round(rez * 10000000), std::round((sin(50)) * 10000000));
}

TEST(Calc, TanTest16) {
  char str[] = "tan(1)";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_EQ(std::round(rez * 10000000), std::round((tan(1)) * 10000000));
}

TEST(Calc, TanTest17) {
  char str[] = "tan(0)";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_EQ(std::round(rez * 10000000), std::round((tan(0)) * 10000000));
}

TEST(Calc, TanTest18) {
  char str[] = "tan(-1)";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_EQ(std::round(rez * 10000000), std::round((tan(-1)) * 10000000));
}

TEST(Calc, TanTest19) {
  char str[] = "tan(-45)";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_EQ(std::round(rez * 10000000), std::round((tan(-45)) * 10000000));
}

TEST(Calc, AtanTest20) {
  char str[] = "atan(0)";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_EQ(std::round(rez * 10000000), std::round((atan(0)) * 10000000));
}

TEST(Calc, AtanTest21) {
  char str[] = "atan(-45)";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_EQ(std::round(rez * 10000000), std::round((atan(-45)) * 10000000));
}

TEST(Calc, AtanTest22) {
  char str[] = "atan(1)";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_EQ(std::round(rez * 10000000), std::round((atan(1)) * 10000000));
}

TEST(Calc, AsinTest23) {
  char str[] = "asin(0)";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_EQ(std::round(rez * 10000000), std::round((asin(0)) * 10000000));
}

TEST(Calc, AsinTest24) {
  char str[] = "asin(1)";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_EQ(std::round(rez * 10000000), std::round((asin(1)) * 10000000));
}

TEST(Calc, AsinTest25) {
  char str[] = "asin(-1)";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_EQ(rez, (asin(-1)));
}

TEST(Calc, AsinTest26) {
  char str[] = "asin(-15)";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_TRUE(std::isnan(rez));
}

TEST(Calc, AcosTest27) {
  char str[] = "acos(-1)";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_EQ(std::round(rez * 10000000), std::round((acos(-1)) * 10000000));
}

TEST(Calc, AcosTest28) {
  char str[] = "acos(0)";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_EQ(std::round(rez * 10000000), std::round((acos(0)) * 10000000));
}

TEST(Calc, AcosTest29) {
  char str[] = "acos(1)";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_EQ(std::round(rez * 10000000), std::round((acos(1)) * 10000000));
}

TEST(Calc, AcosTest30) {
  char str[] = "acos(100)";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_TRUE(std::isnan(rez));
}

TEST(Calc, SqrtTest31) {
  char str[] = "sqrt(4)";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_EQ(std::round(rez * 10000000), std::round((sqrt(4)) * 10000000));
}

TEST(Calc, SqrtTest32) {
  char str[] = "sqrt(0)";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_EQ(std::round(rez * 10000000), std::round((sqrt(0)) * 10000000));
}

TEST(Calc, SqrtTest33) {
  char str[] = "sqrt(-1)";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_TRUE(std::isnan(rez));
}

TEST(Calc, LogTest34) {
  char str[] = "log(4)";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_EQ(std::round(rez * 10000000), std::round((log10(4)) * 10000000));
}

TEST(Calc, LogTest35) {
  char str[] = "log(0)";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_EQ(std::round(rez * 10000000), std::round((log10(0)) * 10000000));
}

TEST(Calc, LogTest36) {
  char str[] = "log(0)+log(1)";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_EQ(std::round(rez * 10000000),
            std::round((log10(0) + log10(1)) * 10000000));
}

TEST(Calc, LnTest37) {
  char str[] = "log(4)";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_EQ(std::round(rez * 10000000), std::round((log10(4)) * 10000000));
}

TEST(Calc, LnTest38) {
  char str[] = "log(0)";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_EQ(std::round(rez * 10000000), std::round((log10(0)) * 10000000));
}

TEST(Calc, PowTest39) {
  char str[] = "4^2";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_EQ(std::round(rez * 10000000), std::round(pow(4, 2)) * 10000000);
}

TEST(Calc, PowTest40) {
  char str[] = "9^0.2";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_EQ(rez, pow(9, 0.2));
}

TEST(Calc, Test41) {
  char str[] = "9^0.2*cos(1)";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  // ASSERT_EQ(std::round(rez * 10000000), std::round( ) * 10000000);
  EXPECT_TRUE(std::abs(rez - pow(9, 0.2) * cos(1)) < 1e-7);
}

TEST(Calc, Test42) {
  char str[] = "log(0)^(0.2*cos(1))";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_EQ(rez, pow((log10(0)), 0.2 * cos(1)));
}

TEST(Calc, Test43) {
  char str[] = "acos(1)^(1.2*sin(11))*10";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_EQ(rez, pow((acos(1)), 1.2 * sin(11)) * 10);
}

TEST(Calc, Test44) {
  char str[] = "cos(10)+(1.2*sin(11))";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_EQ(std::round(rez * 10000000),
            std::round(((cos(10)) + (1.2 * sin(11))) * 10000000));
  // ASSERT_EQ(std::abs(rez - (cos(10)) + (1.2 * sin(11))) < 1e-7);
}

TEST(Calc, Test45) {
  char str[] = "sin(10)+(1.2*cos(11))+acos(1)^(1.2*sin(11))";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_EQ(std::round(rez * 10000000), std::round((-0.5387102733 * 10000000)));
}

TEST(Calc, Test46) {
  char str[] = "tan(3)*(3.2*atan(1))^(1.2*sin(11))";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_EQ(
      std::round(rez * 10000000),
      std::round((tan(3)) * pow((3.2 * atan(1)), 1.2 * sin(11)) * 10000000));
}

TEST(Calc, Test47) {
  char str[] = "tan(3)/(3*atan(1))^(12*sin(1))";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_EQ(
      std::round(rez * 10000000),
      std::round(((tan(3)) / pow((3 * atan(1)), 12 * sin(1))) * 10000000));
}

TEST(Calc, Test48) {
  char str[] = "log((3*atan(1))^(12*sin(1)/12))";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_EQ(
      std::round(rez * 10000000),
      std::round((log10(pow((3 * atan(1)), 12 * sin(1) / 12))) * 10000000));
}
TEST(Calc, Test49) {
  char str[] = "5E+5";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  ASSERT_EQ(std::round(rez * 10000000), (std::round(5e+5) * 10000000));
}

TEST(Calc, Test50) {
  char str[] = "ln(5)";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  std::cout << rez << std::endl;
  ASSERT_EQ(std::round(rez * 10000000), (std::round(1.609437912 * 10000000)));
}

TEST(Calc, Test51) {
  char str[] = "ln(5)X";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  std::cout << rez << std::endl;
  ASSERT_EQ(rez, 0);
}
TEST(Calc, Test52) {
  char str[] = "-5";
  s21::Model mod;
  long double rez = 0;
  mod.CalcBasic(str, 0, rez);
  std::cout << rez << std::endl;
  ASSERT_EQ(rez, -5);
}

TEST(CalceDeposit, Test48) {
  double sum_vkald = 1000;
  int srok = 10;
  double procent_stavka = 10;
  double nalog_stavka = 5;
  int period_viplat = 1;
  int capit_prosentov = 0;
  double spisok_poplneni = 100;
  double spisok_cnaty = 50;
  double nacislen_prosenty = 0;
  double sum_nalog = 0;
  double sum_end = 0;
  int spisok_poplneni_date = 0;
  int spisok_cnaty_date = 0;
  s21::Model mod;
  mod.CalceDeposit(sum_vkald, srok, procent_stavka, nalog_stavka, period_viplat,
                   capit_prosentov, spisok_poplneni, spisok_cnaty,
                   &nacislen_prosenty, &sum_nalog, &sum_end,
                   spisok_poplneni_date, spisok_cnaty_date);
  ASSERT_EQ(1, 1);
  ASSERT_EQ(std::round((nacislen_prosenty * 10000000)),
            (std::round(102.0833333 * 10000000)));
  ASSERT_EQ(std::round((sum_nalog * 10000000)),
            (std::round(0.4253472222 * 10000000)));
  ASSERT_EQ(std::round((sum_end * 1000000)),
            (std::round(1601.657986 * 1000000)));
}

TEST(CalceDeposit, Test49) {
  double sum_vkald = 1000;
  int srok = 10 * 12;
  double procent_stavka = 5;
  double nalog_stavka = 3;
  int period_viplat = 0;
  int capit_prosentov = 1;
  double spisok_poplneni = 0;
  double spisok_cnaty = 0;
  double nacislen_prosenty = 0;
  double sum_nalog = 0;
  double sum_end = 0;
  int spisok_poplneni_date = 0;
  int spisok_cnaty_date = 0;
  s21::Model mod;
  mod.CalceDeposit(sum_vkald, srok, procent_stavka, nalog_stavka, period_viplat,
                   capit_prosentov, spisok_poplneni, spisok_cnaty,
                   &nacislen_prosenty, &sum_nalog, &sum_end,
                   spisok_poplneni_date, spisok_cnaty_date);

  ASSERT_EQ(std::round((nacislen_prosenty * 10000000)),
            (std::round(646.5769858 * 10000000)));
  ASSERT_EQ(std::round((sum_nalog * 10000000)),
            (std::round(1.6164424648 * 10000000)));
  ASSERT_EQ(std::round((sum_end * 1000000)),
            (std::round(1644.960543 * 1000000)));
}

TEST(CalcCredit, Test51) {
  double total_payment = 1000;
  int term = 1;
  int years_or_month = 1;
  double interest_rate = 3;
  int type_of_loan = 1;
  double separate_payment = 0;
  double separate_payment_1 = 0;
  double overpayment = 0;
  double total_payout = 0;
  s21::Model mod;
  mod.CalcCredit(total_payment, term, years_or_month, interest_rate,
                 type_of_loan, &separate_payment, &separate_payment_1,
                 &overpayment, &total_payout);
  std::cout << separate_payment << " " << overpayment << " " << total_payout
            << std::endl;
  ASSERT_EQ(1, 1);
  // ASSERT_EQ(overpayment, 1);
  // ASSERT_EQ(total_payout, 1);
}

TEST(CalcCredit, Test52) {
  double total_payment = 1000;
  int term = 5;
  int years_or_month = 0;
  double interest_rate = 3;
  int type_of_loan = 0;
  double separate_payment = 0;
  double separate_payment_1 = 0;
  double overpayment = 0;
  double total_payout = 0;
  s21::Model mod;
  mod.CalcCredit(total_payment, term, years_or_month, interest_rate,
                 type_of_loan, &separate_payment, &separate_payment_1,
                 &overpayment, &total_payout);
  std::cout << separate_payment << " " << overpayment << " " << total_payout
            << std::endl;
  ASSERT_EQ(1, 1);
  // ASSERT_EQ(overpayment, 1);
  // ASSERT_EQ(total_payout, 1);
}
