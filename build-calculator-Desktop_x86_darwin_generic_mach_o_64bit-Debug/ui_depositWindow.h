/********************************************************************************
** Form generated from reading UI file 'depositWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPOSITWINDOW_H
#define UI_DEPOSITWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_depositWindow
{
public:
    QPushButton *result_calc;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QDoubleSpinBox *prosent_stavka;
    QDoubleSpinBox *srok_deposit;
    QDoubleSpinBox *sum_deposit;
    QComboBox *comboBox;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_3;
    QFormLayout *formLayout;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QFormLayout *formLayout_2;
    QLabel *nacislen_prosenty;
    QLabel *sum_nalog;
    QLabel *sum_end;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QDoubleSpinBox *nalog_stavka;
    QComboBox *comboBox_spisok_popol;
    QCheckBox *checkBox;
    QComboBox *comboBox_period_viplat;
    QDoubleSpinBox *spisok_poplneni;
    QDoubleSpinBox *spisok_cnaty;
    QComboBox *comboBox_spisok_snatiy;

    void setupUi(QWidget *depositWindow)
    {
        if (depositWindow->objectName().isEmpty())
            depositWindow->setObjectName(QString::fromUtf8("depositWindow"));
        depositWindow->resize(661, 523);
        result_calc = new QPushButton(depositWindow);
        result_calc->setObjectName(QString::fromUtf8("result_calc"));
        result_calc->setGeometry(QRect(440, 400, 131, 61));
        layoutWidget = new QWidget(depositWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(260, 20, 371, 111));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        prosent_stavka = new QDoubleSpinBox(layoutWidget);
        prosent_stavka->setObjectName(QString::fromUtf8("prosent_stavka"));
        prosent_stavka->setDecimals(2);
        prosent_stavka->setMinimum(0.000000000000000);
        prosent_stavka->setMaximum(10000000000000.000000000000000);
        prosent_stavka->setSingleStep(10.000000000000000);

        gridLayout_2->addWidget(prosent_stavka, 3, 0, 1, 1);

        srok_deposit = new QDoubleSpinBox(layoutWidget);
        srok_deposit->setObjectName(QString::fromUtf8("srok_deposit"));
        srok_deposit->setDecimals(0);
        srok_deposit->setMinimum(0.000000000000000);
        srok_deposit->setMaximum(30000000.000000000000000);
        srok_deposit->setSingleStep(1.000000000000000);

        gridLayout_2->addWidget(srok_deposit, 2, 0, 1, 1);

        sum_deposit = new QDoubleSpinBox(layoutWidget);
        sum_deposit->setObjectName(QString::fromUtf8("sum_deposit"));
        sum_deposit->setDecimals(5);
        sum_deposit->setMinimum(-99999999999999991611392.000000000000000);
        sum_deposit->setMaximum(99999999999999991611392.000000000000000);
        sum_deposit->setSingleStep(1000000.000000000000000);

        gridLayout_2->addWidget(sum_deposit, 1, 0, 1, 1);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout_2->addWidget(comboBox, 2, 1, 1, 1);

        layoutWidget1 = new QWidget(depositWindow);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 390, 311, 87));
        gridLayout_3 = new QGridLayout(layoutWidget1);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font;
        font.setPointSize(16);
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
        nacislen_prosenty = new QLabel(layoutWidget1);
        nacislen_prosenty->setObjectName(QString::fromUtf8("nacislen_prosenty"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, nacislen_prosenty);

        sum_nalog = new QLabel(layoutWidget1);
        sum_nalog->setObjectName(QString::fromUtf8("sum_nalog"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, sum_nalog);

        sum_end = new QLabel(layoutWidget1);
        sum_end->setObjectName(QString::fromUtf8("sum_end"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, sum_end);


        gridLayout_3->addLayout(formLayout_2, 0, 1, 1, 1);

        label_4 = new QLabel(depositWindow);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 230, 207, 19));
        label_4->setFont(font);
        label_3 = new QLabel(depositWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 100, 207, 28));
        label_3->setFont(font);
        label_2 = new QLabel(depositWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 50, 207, 46));
        label_2->setFont(font);
        label = new QLabel(depositWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 207, 31));
        label->setFont(font);
        label_5 = new QLabel(depositWindow);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 150, 207, 19));
        label_5->setFont(font);
        label_9 = new QLabel(depositWindow);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(30, 190, 207, 19));
        label_9->setFont(font);
        label_10 = new QLabel(depositWindow);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(30, 270, 207, 19));
        label_10->setFont(font);
        label_11 = new QLabel(depositWindow);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(30, 310, 207, 19));
        label_11->setFont(font);
        nalog_stavka = new QDoubleSpinBox(depositWindow);
        nalog_stavka->setObjectName(QString::fromUtf8("nalog_stavka"));
        nalog_stavka->setGeometry(QRect(260, 150, 179, 21));
        nalog_stavka->setDecimals(2);
        nalog_stavka->setMinimum(0.000000000000000);
        nalog_stavka->setMaximum(99999999999999991611392.000000000000000);
        nalog_stavka->setSingleStep(1.000000000000000);
        comboBox_spisok_popol = new QComboBox(depositWindow);
        comboBox_spisok_popol->addItem(QString());
        comboBox_spisok_popol->addItem(QString());
        comboBox_spisok_popol->addItem(QString());
        comboBox_spisok_popol->addItem(QString());
        comboBox_spisok_popol->setObjectName(QString::fromUtf8("comboBox_spisok_popol"));
        comboBox_spisok_popol->setGeometry(QRect(260, 270, 184, 32));
        checkBox = new QCheckBox(depositWindow);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(260, 190, 85, 20));
        comboBox_period_viplat = new QComboBox(depositWindow);
        comboBox_period_viplat->addItem(QString());
        comboBox_period_viplat->addItem(QString());
        comboBox_period_viplat->addItem(QString());
        comboBox_period_viplat->setObjectName(QString::fromUtf8("comboBox_period_viplat"));
        comboBox_period_viplat->setGeometry(QRect(260, 230, 184, 32));
        spisok_poplneni = new QDoubleSpinBox(depositWindow);
        spisok_poplneni->setObjectName(QString::fromUtf8("spisok_poplneni"));
        spisok_poplneni->setGeometry(QRect(450, 270, 179, 21));
        spisok_poplneni->setDecimals(0);
        spisok_poplneni->setMinimum(0.000000000000000);
        spisok_poplneni->setMaximum(1000000000000.000000000000000);
        spisok_poplneni->setSingleStep(1000.000000000000000);
        spisok_cnaty = new QDoubleSpinBox(depositWindow);
        spisok_cnaty->setObjectName(QString::fromUtf8("spisok_cnaty"));
        spisok_cnaty->setGeometry(QRect(450, 310, 179, 21));
        spisok_cnaty->setDecimals(0);
        spisok_cnaty->setMinimum(0.000000000000000);
        spisok_cnaty->setMaximum(100000000000000.000000000000000);
        spisok_cnaty->setSingleStep(1000.000000000000000);
        comboBox_spisok_snatiy = new QComboBox(depositWindow);
        comboBox_spisok_snatiy->addItem(QString());
        comboBox_spisok_snatiy->addItem(QString());
        comboBox_spisok_snatiy->addItem(QString());
        comboBox_spisok_snatiy->addItem(QString());
        comboBox_spisok_snatiy->setObjectName(QString::fromUtf8("comboBox_spisok_snatiy"));
        comboBox_spisok_snatiy->setGeometry(QRect(260, 310, 184, 32));

        retranslateUi(depositWindow);

        QMetaObject::connectSlotsByName(depositWindow);
    } // setupUi

    void retranslateUi(QWidget *depositWindow)
    {
        depositWindow->setWindowTitle(QCoreApplication::translate("depositWindow", "Deposit calculator", nullptr));
        result_calc->setText(QCoreApplication::translate("depositWindow", "\320\240\320\220\320\241\320\241\320\247\320\230\320\242\320\220\320\242\320\254", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("depositWindow", "\320\273\320\265\321\202", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("depositWindow", "\320\274\320\265\321\201\321\217\321\206\320\265\320\262", nullptr));

        label_6->setText(QCoreApplication::translate("depositWindow", "\320\235\320\260\321\207\320\270\321\201\320\273\320\265\320\275\320\275\321\213\320\265 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\321\213", nullptr));
        label_7->setText(QCoreApplication::translate("depositWindow", "\320\241\321\203\320\274\320\274\320\260 \320\275\320\260\320\273\320\276\320\263\320\260", nullptr));
        label_8->setText(QCoreApplication::translate("depositWindow", "\320\241\321\203\320\274\320\274\320\260 \320\275\320\260 \320\262\320\272\320\273\320\260\320\264\320\265 \320\272 \320\272\320\276\320\275\321\206\321\203 \321\201\321\200\320\276\320\272\320\260", nullptr));
        nacislen_prosenty->setText(QCoreApplication::translate("depositWindow", "0", nullptr));
        sum_nalog->setText(QCoreApplication::translate("depositWindow", "0", nullptr));
        sum_end->setText(QCoreApplication::translate("depositWindow", "0", nullptr));
        label_4->setText(QCoreApplication::translate("depositWindow", "\320\237\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\275\320\276\321\201\321\202\321\214 \320\262\321\213\320\277\320\273\320\260\321\202", nullptr));
        label_3->setText(QCoreApplication::translate("depositWindow", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("depositWindow", "\320\241\321\200\320\276\320\272 \321\200\320\260\320\267\320\274\320\265\321\211\320\265\320\275\320\270\321\217", nullptr));
        label->setText(QCoreApplication::translate("depositWindow", "\320\241\321\203\320\274\320\274\320\260 \320\262\320\272\320\273\320\260\320\264\320\260", nullptr));
        label_5->setText(QCoreApplication::translate("depositWindow", "\320\235\320\260\320\273\320\276\320\263\320\276\320\262\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        label_9->setText(QCoreApplication::translate("depositWindow", "\320\232\320\260\320\277\320\270\321\202\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\320\276\320\262", nullptr));
        label_10->setText(QCoreApplication::translate("depositWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\277\320\276\320\277\320\276\320\273\320\275\320\265\320\275\320\270\320\271", nullptr));
        label_11->setText(QCoreApplication::translate("depositWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \321\207\320\260\321\201\321\202\320\270\321\207\320\275\321\213\321\205 \321\201\320\275\321\217\321\202\320\270\320\271", nullptr));
        comboBox_spisok_popol->setItemText(0, QCoreApplication::translate("depositWindow", "1 \320\274\320\265\321\201\321\217\321\206", nullptr));
        comboBox_spisok_popol->setItemText(1, QCoreApplication::translate("depositWindow", "3 \320\274\320\265\321\201\321\217\321\206\320\260", nullptr));
        comboBox_spisok_popol->setItemText(2, QCoreApplication::translate("depositWindow", "6 \320\274\320\265\321\201\321\217\321\206\320\265\320\262", nullptr));
        comboBox_spisok_popol->setItemText(3, QCoreApplication::translate("depositWindow", "12 \320\274\320\265\321\201\321\217\321\206\320\265\320\262", nullptr));

        checkBox->setText(QString());
        comboBox_period_viplat->setItemText(0, QCoreApplication::translate("depositWindow", "1 \320\274\320\265\321\201\321\217\321\206", nullptr));
        comboBox_period_viplat->setItemText(1, QCoreApplication::translate("depositWindow", "3 \320\274\320\265\321\201\321\217\321\206\320\260", nullptr));
        comboBox_period_viplat->setItemText(2, QCoreApplication::translate("depositWindow", "\320\222 \320\272\320\276\320\275\321\206\320\265 \321\201\321\200\320\276\320\272\320\260", nullptr));

        comboBox_spisok_snatiy->setItemText(0, QCoreApplication::translate("depositWindow", "1 \320\274\320\265\321\201\321\217\321\206", nullptr));
        comboBox_spisok_snatiy->setItemText(1, QCoreApplication::translate("depositWindow", "3 \320\274\320\265\321\201\321\217\321\206\320\260", nullptr));
        comboBox_spisok_snatiy->setItemText(2, QCoreApplication::translate("depositWindow", "6 \320\274\320\265\321\201\321\217\321\206\320\265\320\262", nullptr));
        comboBox_spisok_snatiy->setItemText(3, QCoreApplication::translate("depositWindow", "12 \320\274\320\265\321\201\321\217\321\206\320\265\320\262", nullptr));

    } // retranslateUi

};

namespace Ui {
    class depositWindow: public Ui_depositWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPOSITWINDOW_H
