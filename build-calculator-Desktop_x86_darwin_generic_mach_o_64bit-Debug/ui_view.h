/********************************************************************************
** Form generated from reading UI file 'view.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_H
#define UI_VIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_graph;
    QAction *action_credit;
    QAction *action_depoz;
    QWidget *centralwidget;
    QLabel *result_show;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_AC;
    QPushButton *pushButton_del;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton_ravno;
    QPushButton *pushButton_5;
    QPushButton *pushButton_ymno;
    QPushButton *pushButton_3;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_min;
    QPushButton *pushButton_0;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_mod;
    QPushButton *pushButton_step;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_ln;
    QPushButton *pushButton_tan;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_log;
    QPushButton *pushButton_asin;
    QPushButton *pushButton_acos;
    QPushButton *pushButton_atan;
    QPushButton *pushButton_br_r;
    QPushButton *pushButton_br_l;
    QLabel *result_ansver;
    QPushButton *pushButton_C;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_X;
    QCustomPlot *widget;
    QPushButton *pushButton_grah;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QDoubleSpinBox *lineEdit_x;
    QDoubleSpinBox *lineEdit_x_l;
    QDoubleSpinBox *lineEdit_x_r;
    QDoubleSpinBox *lineEdit_y_r;
    QDoubleSpinBox *lineEdit_y_l;
    QDoubleSpinBox *lineEdit_h;
    QPushButton *pushButton_e;
    QMenuBar *menubar;
    QMenu *menu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1099, 391);
        action_graph = new QAction(MainWindow);
        action_graph->setObjectName(QString::fromUtf8("action_graph"));
        action_credit = new QAction(MainWindow);
        action_credit->setObjectName(QString::fromUtf8("action_credit"));
        action_depoz = new QAction(MainWindow);
        action_depoz->setObjectName(QString::fromUtf8("action_depoz"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        result_show = new QLabel(centralwidget);
        result_show->setObjectName(QString::fromUtf8("result_show"));
        result_show->setGeometry(QRect(10, 10, 481, 61));
        QFont font;
        font.setPointSize(16);
        result_show->setFont(font);
        result_show->setStyleSheet(QString::fromUtf8("\n"
"                             border-style: solid;\n"
"                             border-width: 2px;\n"
"                             border-color: white; \n"
"                             "));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 90, 61, 61));
        pushButton_7->setFont(font);
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color:#CD7846;"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(80, 90, 61, 61));
        pushButton_8->setFont(font);
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color:#CD7846;"));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(150, 90, 61, 61));
        pushButton_9->setFont(font);
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color:#CD7846;"));
        pushButton_AC = new QPushButton(centralwidget);
        pushButton_AC->setObjectName(QString::fromUtf8("pushButton_AC"));
        pushButton_AC->setGeometry(QRect(500, 90, 91, 61));
        pushButton_AC->setFont(font);
        pushButton_AC->setStyleSheet(QString::fromUtf8("background-color: #CE3338;\n"
"\n"
""));
        pushButton_del = new QPushButton(centralwidget);
        pushButton_del->setObjectName(QString::fromUtf8("pushButton_del"));
        pushButton_del->setGeometry(QRect(290, 300, 61, 61));
        pushButton_del->setFont(font);
        pushButton_del->setStyleSheet(QString::fromUtf8("background:#45509C;"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(150, 160, 61, 61));
        pushButton_6->setFont(font);
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color:#CD7846;"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 160, 61, 61));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color:#CD7846;"));
        pushButton_ravno = new QPushButton(centralwidget);
        pushButton_ravno->setObjectName(QString::fromUtf8("pushButton_ravno"));
        pushButton_ravno->setGeometry(QRect(500, 10, 61, 61));
        QFont font1;
        font1.setPointSize(18);
        pushButton_ravno->setFont(font1);
        pushButton_ravno->setStyleSheet(QString::fromUtf8("background:#424156;"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(80, 160, 61, 61));
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color:#CD7846;\n"
"width: 20%;\n"
""));
        pushButton_ymno = new QPushButton(centralwidget);
        pushButton_ymno->setObjectName(QString::fromUtf8("pushButton_ymno"));
        pushButton_ymno->setGeometry(QRect(220, 230, 61, 61));
        pushButton_ymno->setFont(font);
        pushButton_ymno->setStyleSheet(QString::fromUtf8("background:#45509C;"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(150, 230, 61, 61));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color:#CD7846;"));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(10, 230, 61, 61));
        pushButton_1->setFont(font);
        pushButton_1->setStyleSheet(QString::fromUtf8("background-color:#CD7846;"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 230, 61, 61));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color:#CD7846;"));
        pushButton_min = new QPushButton(centralwidget);
        pushButton_min->setObjectName(QString::fromUtf8("pushButton_min"));
        pushButton_min->setGeometry(QRect(220, 160, 61, 61));
        pushButton_min->setFont(font);
        pushButton_min->setStyleSheet(QString::fromUtf8("background:#45509C;"));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(80, 300, 61, 61));
        pushButton_0->setFont(font);
        pushButton_0->setStyleSheet(QString::fromUtf8("background-color:#CD7846;"));
        pushButton_plus = new QPushButton(centralwidget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        pushButton_plus->setGeometry(QRect(220, 90, 61, 61));
        pushButton_plus->setFont(font);
        pushButton_plus->setStyleSheet(QString::fromUtf8("background:#45509C;"));
        pushButton_sqrt = new QPushButton(centralwidget);
        pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));
        pushButton_sqrt->setGeometry(QRect(290, 160, 61, 61));
        pushButton_sqrt->setFont(font);
        pushButton_sqrt->setStyleSheet(QString::fromUtf8("background:#45509C;"));
        pushButton_mod = new QPushButton(centralwidget);
        pushButton_mod->setObjectName(QString::fromUtf8("pushButton_mod"));
        pushButton_mod->setGeometry(QRect(290, 90, 61, 61));
        pushButton_mod->setFont(font);
        pushButton_mod->setStyleSheet(QString::fromUtf8("background:#45509C;"));
        pushButton_step = new QPushButton(centralwidget);
        pushButton_step->setObjectName(QString::fromUtf8("pushButton_step"));
        pushButton_step->setGeometry(QRect(290, 230, 61, 61));
        pushButton_step->setFont(font);
        pushButton_step->setStyleSheet(QString::fromUtf8("background:#45509C;"));
        pushButton_cos = new QPushButton(centralwidget);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
        pushButton_cos->setGeometry(QRect(360, 90, 61, 61));
        pushButton_cos->setFont(font);
        pushButton_cos->setStyleSheet(QString::fromUtf8("background:#23752E"));
        pushButton_ln = new QPushButton(centralwidget);
        pushButton_ln->setObjectName(QString::fromUtf8("pushButton_ln"));
        pushButton_ln->setGeometry(QRect(360, 300, 61, 61));
        pushButton_ln->setFont(font);
        pushButton_ln->setStyleSheet(QString::fromUtf8("background:#45509C;"));
        pushButton_tan = new QPushButton(centralwidget);
        pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));
        pushButton_tan->setGeometry(QRect(360, 230, 61, 61));
        pushButton_tan->setFont(font);
        pushButton_tan->setStyleSheet(QString::fromUtf8("background:#23752E"));
        pushButton_sin = new QPushButton(centralwidget);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        pushButton_sin->setGeometry(QRect(360, 160, 61, 61));
        pushButton_sin->setFont(font);
        pushButton_sin->setStyleSheet(QString::fromUtf8("background:#23752E"));
        pushButton_log = new QPushButton(centralwidget);
        pushButton_log->setObjectName(QString::fromUtf8("pushButton_log"));
        pushButton_log->setGeometry(QRect(430, 300, 61, 61));
        pushButton_log->setFont(font);
        pushButton_log->setStyleSheet(QString::fromUtf8("background:#45509C;"));
        pushButton_asin = new QPushButton(centralwidget);
        pushButton_asin->setObjectName(QString::fromUtf8("pushButton_asin"));
        pushButton_asin->setGeometry(QRect(430, 160, 61, 61));
        pushButton_asin->setFont(font);
        pushButton_asin->setStyleSheet(QString::fromUtf8("background:#23752E"));
        pushButton_acos = new QPushButton(centralwidget);
        pushButton_acos->setObjectName(QString::fromUtf8("pushButton_acos"));
        pushButton_acos->setGeometry(QRect(430, 90, 61, 61));
        pushButton_acos->setFont(font);
        pushButton_acos->setStyleSheet(QString::fromUtf8("background:#23752E"));
        pushButton_atan = new QPushButton(centralwidget);
        pushButton_atan->setObjectName(QString::fromUtf8("pushButton_atan"));
        pushButton_atan->setGeometry(QRect(430, 230, 61, 61));
        pushButton_atan->setFont(font);
        pushButton_atan->setStyleSheet(QString::fromUtf8("background:#23752E"));
        pushButton_br_r = new QPushButton(centralwidget);
        pushButton_br_r->setObjectName(QString::fromUtf8("pushButton_br_r"));
        pushButton_br_r->setGeometry(QRect(150, 300, 61, 61));
        pushButton_br_r->setFont(font);
        pushButton_br_r->setStyleSheet(QString::fromUtf8("background:#C79A15"));
        pushButton_br_l = new QPushButton(centralwidget);
        pushButton_br_l->setObjectName(QString::fromUtf8("pushButton_br_l"));
        pushButton_br_l->setGeometry(QRect(10, 300, 61, 61));
        pushButton_br_l->setFont(font);
        pushButton_br_l->setStyleSheet(QString::fromUtf8("background:#C79A15"));
        result_ansver = new QLabel(centralwidget);
        result_ansver->setObjectName(QString::fromUtf8("result_ansver"));
        result_ansver->setGeometry(QRect(570, 10, 131, 61));
        result_ansver->setFont(font);
        result_ansver->setStyleSheet(QString::fromUtf8("\n"
"                             border-style: solid;\n"
"                             border-width: 2px;\n"
"                             border-color: white; \n"
"                             "));
        pushButton_C = new QPushButton(centralwidget);
        pushButton_C->setObjectName(QString::fromUtf8("pushButton_C"));
        pushButton_C->setGeometry(QRect(600, 90, 101, 61));
        pushButton_C->setFont(font);
        pushButton_C->setStyleSheet(QString::fromUtf8("background-color: #FD3238"));
        pushButton_dot = new QPushButton(centralwidget);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        pushButton_dot->setGeometry(QRect(220, 300, 61, 61));
        pushButton_dot->setFont(font);
        pushButton_dot->setStyleSheet(QString::fromUtf8("background:#C79A15"));
        pushButton_X = new QPushButton(centralwidget);
        pushButton_X->setObjectName(QString::fromUtf8("pushButton_X"));
        pushButton_X->setGeometry(QRect(500, 160, 61, 61));
        pushButton_X->setFont(font);
        pushButton_X->setStyleSheet(QString::fromUtf8("background:#45509C;"));
        widget = new QCustomPlot(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(710, 10, 351, 281));
        pushButton_grah = new QPushButton(centralwidget);
        pushButton_grah->setObjectName(QString::fromUtf8("pushButton_grah"));
        pushButton_grah->setGeometry(QRect(570, 230, 121, 61));
        pushButton_grah->setFont(font);
        pushButton_grah->setStyleSheet(QString::fromUtf8("background:#45509C;"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(570, 310, 71, 31));
        label->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(790, 310, 71, 31));
        label_2->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(950, 310, 71, 31));
        label_3->setFont(font1);
        lineEdit_x = new QDoubleSpinBox(centralwidget);
        lineEdit_x->setObjectName(QString::fromUtf8("lineEdit_x"));
        lineEdit_x->setGeometry(QRect(570, 160, 121, 61));
        lineEdit_x->setFont(font);
        lineEdit_x->setDecimals(5);
        lineEdit_x->setMinimum(-999999999999.000000000000000);
        lineEdit_x->setMaximum(999999999999990016.000000000000000);
        lineEdit_x_l = new QDoubleSpinBox(centralwidget);
        lineEdit_x_l->setObjectName(QString::fromUtf8("lineEdit_x_l"));
        lineEdit_x_l->setGeometry(QRect(500, 310, 61, 41));
        lineEdit_x_l->setFont(font);
        lineEdit_x_l->setDecimals(0);
        lineEdit_x_l->setMinimum(-1000000.000000000000000);
        lineEdit_x_l->setMaximum(1000000.000000000000000);
        lineEdit_x_l->setValue(-10.000000000000000);
        lineEdit_x_r = new QDoubleSpinBox(centralwidget);
        lineEdit_x_r->setObjectName(QString::fromUtf8("lineEdit_x_r"));
        lineEdit_x_r->setGeometry(QRect(650, 310, 61, 41));
        lineEdit_x_r->setFont(font);
        lineEdit_x_r->setDecimals(0);
        lineEdit_x_r->setMinimum(-1000000.000000000000000);
        lineEdit_x_r->setMaximum(1000000.000000000000000);
        lineEdit_x_r->setValue(10.000000000000000);
        lineEdit_y_r = new QDoubleSpinBox(centralwidget);
        lineEdit_y_r->setObjectName(QString::fromUtf8("lineEdit_y_r"));
        lineEdit_y_r->setGeometry(QRect(870, 310, 61, 41));
        lineEdit_y_r->setFont(font);
        lineEdit_y_r->setDecimals(0);
        lineEdit_y_r->setMinimum(-1000000.000000000000000);
        lineEdit_y_r->setMaximum(1000000.000000000000000);
        lineEdit_y_r->setValue(10.000000000000000);
        lineEdit_y_l = new QDoubleSpinBox(centralwidget);
        lineEdit_y_l->setObjectName(QString::fromUtf8("lineEdit_y_l"));
        lineEdit_y_l->setGeometry(QRect(720, 310, 61, 41));
        lineEdit_y_l->setFont(font);
        lineEdit_y_l->setDecimals(0);
        lineEdit_y_l->setMinimum(-1000000.000000000000000);
        lineEdit_y_l->setMaximum(1000000.000000000000000);
        lineEdit_y_l->setValue(-10.000000000000000);
        lineEdit_h = new QDoubleSpinBox(centralwidget);
        lineEdit_h->setObjectName(QString::fromUtf8("lineEdit_h"));
        lineEdit_h->setGeometry(QRect(1010, 310, 81, 41));
        lineEdit_h->setFont(font);
        lineEdit_h->setDecimals(4);
        lineEdit_h->setMinimum(-1000000.000000000000000);
        lineEdit_h->setMaximum(1000000.000000000000000);
        lineEdit_h->setSingleStep(0.010000000000000);
        lineEdit_h->setValue(0.010000000000000);
        pushButton_e = new QPushButton(centralwidget);
        pushButton_e->setObjectName(QString::fromUtf8("pushButton_e"));
        pushButton_e->setGeometry(QRect(500, 230, 61, 61));
        pushButton_e->setFont(font);
        pushButton_e->setStyleSheet(QString::fromUtf8("background:#23752E"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1099, 24));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menu->addSeparator();
        menu->addAction(action_graph);
        menu->addAction(action_credit);
        menu->addAction(action_depoz);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Smart calculator", nullptr));
        action_graph->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\321\207\320\265\321\201\320\272\320\270\320\271", nullptr));
        action_credit->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\265\320\264\320\270\321\202\320\275\321\213\320\271", nullptr));
        action_depoz->setText(QCoreApplication::translate("MainWindow", "\320\224\320\265\320\277\320\276\320\267\320\270\321\202\320\275\321\213\320\271", nullptr));
        result_show->setText(QCoreApplication::translate("MainWindow", "tan(X)", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_AC->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButton_del->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_ravno->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_ymno->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_min->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        pushButton_mod->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_step->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        pushButton_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        pushButton_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        pushButton_tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        pushButton_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        pushButton_log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        pushButton_asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        pushButton_acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        pushButton_atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        pushButton_br_r->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pushButton_br_l->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        result_ansver->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_C->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_X->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        pushButton_grah->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214 \320\263\321\200\320\260\321\204\320\270\320\272", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", " <= X <=", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", " <= Y <=", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\250\320\220\320\223 =", nullptr));
        pushButton_e->setText(QCoreApplication::translate("MainWindow", "E", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_H
