/********************************************************************************
** Form generated from reading UI file 'creditWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITWINDOW_H
#define UI_CREDITWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_creditWindow
{
public:
    QPushButton *result_calc;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QRadioButton *anny;
    QRadioButton *differ;
    QDoubleSpinBox *sum_credit;
    QDoubleSpinBox *prosent_stavka;
    QDoubleSpinBox *srok_credit;
    QComboBox *comboBox;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_3;
    QFormLayout *formLayout;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QFormLayout *formLayout_2;
    QLabel *separate_payment;
    QLabel *overpayment;
    QLabel *total_payout;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QWidget *creditWindow)
    {
        if (creditWindow->objectName().isEmpty())
            creditWindow->setObjectName(QString::fromUtf8("creditWindow"));
        creditWindow->resize(661, 275);
        result_calc = new QPushButton(creditWindow);
        result_calc->setObjectName(QString::fromUtf8("result_calc"));
        result_calc->setGeometry(QRect(410, 190, 131, 61));
        layoutWidget = new QWidget(creditWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(260, 20, 371, 151));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        anny = new QRadioButton(layoutWidget);
        anny->setObjectName(QString::fromUtf8("anny"));
        QFont font;
        font.setPointSize(16);
        anny->setFont(font);

        gridLayout_2->addWidget(anny, 5, 0, 1, 1);

        differ = new QRadioButton(layoutWidget);
        differ->setObjectName(QString::fromUtf8("differ"));
        differ->setFont(font);

        gridLayout_2->addWidget(differ, 5, 1, 1, 2);

        sum_credit = new QDoubleSpinBox(layoutWidget);
        sum_credit->setObjectName(QString::fromUtf8("sum_credit"));
        sum_credit->setDecimals(0);
        sum_credit->setMinimum(0.000000000000000);
        sum_credit->setMaximum(99999999999999991611392.000000000000000);
        sum_credit->setSingleStep(1.000000000000000);
        sum_credit->setValue(0.000000000000000);

        gridLayout_2->addWidget(sum_credit, 1, 0, 1, 1);

        prosent_stavka = new QDoubleSpinBox(layoutWidget);
        prosent_stavka->setObjectName(QString::fromUtf8("prosent_stavka"));
        prosent_stavka->setDecimals(2);
        prosent_stavka->setMinimum(0.010000000000000);
        prosent_stavka->setMaximum(300.000000000000000);
        prosent_stavka->setSingleStep(1.000000000000000);
        prosent_stavka->setValue(0.010000000000000);

        gridLayout_2->addWidget(prosent_stavka, 3, 0, 1, 1);

        srok_credit = new QDoubleSpinBox(layoutWidget);
        srok_credit->setObjectName(QString::fromUtf8("srok_credit"));
        srok_credit->setDecimals(0);
        srok_credit->setMinimum(1.000000000000000);
        srok_credit->setMaximum(300.000000000000000);
        srok_credit->setSingleStep(1.000000000000000);
        srok_credit->setValue(1.000000000000000);

        gridLayout_2->addWidget(srok_credit, 2, 0, 1, 1);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout_2->addWidget(comboBox, 2, 1, 1, 1);

        layoutWidget1 = new QWidget(creditWindow);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 170, 311, 87));
        gridLayout_3 = new QGridLayout(layoutWidget1);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        formLayout->setWidget(1, QFormLayout::SpanningRole, label_6);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        formLayout->setWidget(2, QFormLayout::SpanningRole, label_7);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_8);


        gridLayout_3->addLayout(formLayout, 0, 0, 1, 1);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        separate_payment = new QLabel(layoutWidget1);
        separate_payment->setObjectName(QString::fromUtf8("separate_payment"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, separate_payment);

        overpayment = new QLabel(layoutWidget1);
        overpayment->setObjectName(QString::fromUtf8("overpayment"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, overpayment);

        total_payout = new QLabel(layoutWidget1);
        total_payout->setObjectName(QString::fromUtf8("total_payout"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, total_payout);


        gridLayout_3->addLayout(formLayout_2, 0, 1, 1, 1);

        label_4 = new QLabel(creditWindow);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 140, 207, 19));
        label_4->setFont(font);
        label_3 = new QLabel(creditWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 100, 207, 28));
        label_3->setFont(font);
        label_2 = new QLabel(creditWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 50, 207, 46));
        label_2->setFont(font);
        label = new QLabel(creditWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 207, 31));
        label->setFont(font);

        retranslateUi(creditWindow);

        QMetaObject::connectSlotsByName(creditWindow);
    } // setupUi

    void retranslateUi(QWidget *creditWindow)
    {
        creditWindow->setWindowTitle(QCoreApplication::translate("creditWindow", "Credit calculator", nullptr));
        result_calc->setText(QCoreApplication::translate("creditWindow", "\320\240\320\220\320\241\320\241\320\247\320\230\320\242\320\220\320\242\320\254", nullptr));
        anny->setText(QCoreApplication::translate("creditWindow", "\320\220\320\275\320\275\321\203\320\270\321\202\320\265\321\202\320\275\321\213\320\265", nullptr));
        differ->setText(QCoreApplication::translate("creditWindow", "\320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\265", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("creditWindow", "\320\273\320\265\321\202", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("creditWindow", "\320\274\320\265\321\201\321\217\321\206\320\265\320\262", nullptr));

        label_6->setText(QCoreApplication::translate("creditWindow", "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\320\271 \320\277\320\273\320\260\321\202\320\265\320\266", nullptr));
        label_7->setText(QCoreApplication::translate("creditWindow", " \320\237\320\265\321\200\320\265\320\277\320\273\320\260\321\202\320\260 \320\277\320\276 \320\272\321\200\320\265\320\264\320\270\321\202\321\203", nullptr));
        label_8->setText(QCoreApplication::translate("creditWindow", "\320\236\320\261\321\211\320\260\321\217 \320\262\321\213\320\277\320\273\320\260\321\202\320\260", nullptr));
        separate_payment->setText(QCoreApplication::translate("creditWindow", "0", nullptr));
        overpayment->setText(QCoreApplication::translate("creditWindow", "0", nullptr));
        total_payout->setText(QCoreApplication::translate("creditWindow", "0", nullptr));
        label_4->setText(QCoreApplication::translate("creditWindow", "\320\242\320\270\320\277 \320\265\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\321\205 \320\277\320\273\320\260\321\202\320\265\320\266\320\265\320\271", nullptr));
        label_3->setText(QCoreApplication::translate("creditWindow", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("creditWindow", "\320\241\321\200\320\276\320\272 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        label->setText(QCoreApplication::translate("creditWindow", "\320\241\321\203\320\274\320\274\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class creditWindow: public Ui_creditWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITWINDOW_H
