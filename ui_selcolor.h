/********************************************************************************
** Form generated from reading UI file 'selcolor.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELCOLOR_H
#define UI_SELCOLOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_selColor
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *selColor)
    {
        if (selColor->objectName().isEmpty())
            selColor->setObjectName(QStringLiteral("selColor"));
        selColor->resize(199, 93);
        layoutWidget = new QWidget(selColor);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 178, 72));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 0, 1, 1);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);


        retranslateUi(selColor);

        QMetaObject::connectSlotsByName(selColor);
    } // setupUi

    void retranslateUi(QDialog *selColor)
    {
        selColor->setWindowTitle(QApplication::translate("selColor", "Introduce color", nullptr));
        lineEdit->setText(QApplication::translate("selColor", "#FFF", nullptr));
        pushButton->setText(QApplication::translate("selColor", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class selColor: public Ui_selColor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELCOLOR_H
