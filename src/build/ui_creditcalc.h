/********************************************************************************
** Form generated from reading UI file 'creditcalc.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITCALC_H
#define UI_CREDITCALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreditCalc
{
public:
    QLineEdit *sum;
    QPushButton *pushButton_ANN;
    QPushButton *pushButton_DIFF;
    QLabel *label;
    QLineEdit *procent;
    QLineEdit *deadline;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *payment;
    QLabel *over;
    QLabel *total;

    void setupUi(QWidget *CreditCalc)
    {
        if (CreditCalc->objectName().isEmpty())
            CreditCalc->setObjectName(QString::fromUtf8("CreditCalc"));
        CreditCalc->resize(632, 380);
        CreditCalc->setStyleSheet(QString::fromUtf8("QWidget{\n"
"  background-color:rgb(135, 131, 124);\n"
"}\n"
"\n"
"background-color : white;"));
        sum = new QLineEdit(CreditCalc);
        sum->setObjectName(QString::fromUtf8("sum"));
        sum->setGeometry(QRect(320, 20, 301, 40));
        sum->setStyleSheet(QString::fromUtf8("\n"
"QLineEdit {\n"
"  background-color: rgb(255, 253, 255);\n"
"  color:  rgb(103, 102, 104); \n"
" border: 1px solid black;\n"
"}\n"
"\n"
"background-color : white;"));
        pushButton_ANN = new QPushButton(CreditCalc);
        pushButton_ANN->setObjectName(QString::fromUtf8("pushButton_ANN"));
        pushButton_ANN->setGeometry(QRect(320, 170, 300, 51));
        pushButton_ANN->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(16, 116, 16);\n"
"  color: black; \n"
"  border: 1px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #ffffff);\n"
"}"));
        pushButton_DIFF = new QPushButton(CreditCalc);
        pushButton_DIFF->setObjectName(QString::fromUtf8("pushButton_DIFF"));
        pushButton_DIFF->setGeometry(QRect(10, 170, 300, 51));
        pushButton_DIFF->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(16, 116, 16);\n"
"  color: black; \n"
"  border: 1px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #ffffff);\n"
"}"));
        label = new QLabel(CreditCalc);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 251, 40));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("\n"
"QLabel {\n"
"  background-color:rgb(103, 102, 104);\n"
" border: 1px rgb(198, 197, 234);\n"
"\n"
"}\n"
"\n"
"background-color : white;"));
        procent = new QLineEdit(CreditCalc);
        procent->setObjectName(QString::fromUtf8("procent"));
        procent->setGeometry(QRect(320, 120, 301, 40));
        procent->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  background-color: rgb(255, 253, 255);\n"
"  color: rgb(103, 102, 104); \n"
" border: 1px solid black;\n"
"}\n"
"\n"
"background-color : white;"));
        deadline = new QLineEdit(CreditCalc);
        deadline->setObjectName(QString::fromUtf8("deadline"));
        deadline->setGeometry(QRect(320, 70, 301, 40));
        deadline->setStyleSheet(QString::fromUtf8("\n"
"QLineEdit {\n"
"  background-color: rgb(255, 253, 255);\n"
"  color: rgb(103, 102, 104); \n"
" border: 1px solid black;\n"
"}\n"
"\n"
"background-color : white;"));
        label_2 = new QLabel(CreditCalc);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 120, 251, 40));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("\n"
"QLabel {\n"
"  background-color: rgb(103, 102, 104);\n"
" border: 1px rgb(198, 197, 234);\n"
"\n"
"}\n"
"\n"
"background-color : white;"));
        label_3 = new QLabel(CreditCalc);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 69, 251, 41));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("\n"
"QLabel {\n"
"  background-color: rgb(103, 102, 104);\n"
" border: 1px rgb(198, 197, 234);\n"
"\n"
"}\n"
"\n"
"background-color : white;"));
        label_4 = new QLabel(CreditCalc);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 230, 300, 40));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("\n"
"QLabel {\n"
"  background-color:rgb(103, 102, 104);\n"
" border: 1px rgb(198, 197, 234);\n"
"\n"
"}\n"
"\n"
"background-color : white;"));
        label_5 = new QLabel(CreditCalc);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 330, 300, 40));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("\n"
"QLabel {\n"
"  background-color:rgb(103, 102, 104);\n"
" border: 1px rgb(198, 197, 234);\n"
"\n"
"}\n"
"\n"
"background-color : white;"));
        label_6 = new QLabel(CreditCalc);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 280, 300, 40));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("\n"
"QLabel {\n"
"  background-color: rgb(103, 102, 104);\n"
" border: 1px rgb(198, 197, 234);\n"
"\n"
"}\n"
"\n"
"background-color : white;"));
        payment = new QLabel(CreditCalc);
        payment->setObjectName(QString::fromUtf8("payment"));
        payment->setGeometry(QRect(320, 230, 301, 40));
        payment->setFont(font);
        payment->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  background-color: rgb(255, 253, 255);\n"
"  color: rgb(103, 102, 104); \n"
" border: 1px solid black;\n"
"}\n"
"\n"
"background-color : white;"));
        over = new QLabel(CreditCalc);
        over->setObjectName(QString::fromUtf8("over"));
        over->setGeometry(QRect(320, 280, 301, 40));
        over->setFont(font);
        over->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  background-color: rgb(255, 253, 255);\n"
"  color: rgb(103, 102, 104); \n"
" border: 1px solid black;\n"
"}\n"
"\n"
"background-color : white;"));
        total = new QLabel(CreditCalc);
        total->setObjectName(QString::fromUtf8("total"));
        total->setGeometry(QRect(320, 330, 301, 40));
        total->setFont(font);
        total->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  background-color: rgb(255, 253, 255);\n"
"  color: rgb(103, 102, 104); \n"
" border: 1px solid black;\n"
"}\n"
"\n"
"background-color : white;"));

        retranslateUi(CreditCalc);

        QMetaObject::connectSlotsByName(CreditCalc);
    } // setupUi

    void retranslateUi(QWidget *CreditCalc)
    {
        CreditCalc->setWindowTitle(QCoreApplication::translate("CreditCalc", "Form", nullptr));
        sum->setText(QString());
        pushButton_ANN->setText(QCoreApplication::translate("CreditCalc", "\320\220\320\235\320\235\320\243\320\230\320\242\320\225\320\242\320\235\320\253\320\231", nullptr));
        pushButton_DIFF->setText(QCoreApplication::translate("CreditCalc", "\320\224\320\230\320\244\320\244\320\225\320\240\320\225\320\235\320\246\320\230\320\240\320\236\320\222\320\220\320\235\320\235\320\253\320\231", nullptr));
        label->setText(QCoreApplication::translate("CreditCalc", "\320\241\321\203\320\274\320\274\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260 :", nullptr));
        procent->setText(QString());
        deadline->setText(QString());
        label_2->setText(QCoreApplication::translate("CreditCalc", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260 :", nullptr));
        label_3->setText(QCoreApplication::translate("CreditCalc", "C\321\200\320\276\320\272 \320\272\321\200\320\265\320\264\320\270\321\202\320\260 :", nullptr));
        label_4->setText(QCoreApplication::translate("CreditCalc", "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\320\271 \320\277\320\273\320\260\321\202\320\265\320\266 :", nullptr));
        label_5->setText(QCoreApplication::translate("CreditCalc", "\320\236\320\261\321\211\320\260\321\217 \320\262\321\213\320\277\320\273\320\260\321\202\320\260 :", nullptr));
        label_6->setText(QCoreApplication::translate("CreditCalc", "\320\237\320\265\321\200\320\265\320\277\320\273\320\260\321\202\320\260 \320\277\320\276 \320\272\321\200\320\265\320\264\320\270\321\202\321\203 :", nullptr));
        payment->setText(QString());
        over->setText(QString());
        total->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CreditCalc: public Ui_CreditCalc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITCALC_H
