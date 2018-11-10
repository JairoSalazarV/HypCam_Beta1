/********************************************************************************
** Form generated from reading UI file 'formtimertxt.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMTIMERTXT_H
#define UI_FORMTIMERTXT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_formTimerTxt
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;

    void setupUi(QDialog *formTimerTxt)
    {
        if (formTimerTxt->objectName().isEmpty())
            formTimerTxt->setObjectName(QStringLiteral("formTimerTxt"));
        formTimerTxt->resize(242, 127);
        label = new QLabel(formTimerTxt);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 241, 81));
        QFont font;
        font.setPointSize(32);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral(""));
        label->setTextFormat(Qt::PlainText);
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(formTimerTxt);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(93, 86, 61, 28));
        label_2 = new QLabel(formTimerTxt);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 60, 71, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setStyleSheet(QStringLiteral(""));
        label_2->setTextFormat(Qt::PlainText);
        label_2->setAlignment(Qt::AlignCenter);

        retranslateUi(formTimerTxt);

        QMetaObject::connectSlotsByName(formTimerTxt);
    } // setupUi

    void retranslateUi(QDialog *formTimerTxt)
    {
        formTimerTxt->setWindowTitle(QApplication::translate("formTimerTxt", "Remainder Time to Start", nullptr));
        label->setText(QApplication::translate("formTimerTxt", "00:00:0a", nullptr));
        pushButton->setText(QApplication::translate("formTimerTxt", "Close", nullptr));
        label_2->setText(QApplication::translate("formTimerTxt", "aprox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formTimerTxt: public Ui_formTimerTxt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMTIMERTXT_H
