/********************************************************************************
** Form generated from reading UI file 'slidesettings.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLIDESETTINGS_H
#define UI_SLIDESETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_frmSlide
{
public:
    QSpinBox *spinBoxIni;
    QSpinBox *spinBoxEnd;
    QSpinBox *spinBoxJump;
    QSpinBox *spinBoxSpeed;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *frmSlide)
    {
        if (frmSlide->objectName().isEmpty())
            frmSlide->setObjectName(QStringLiteral("frmSlide"));
        frmSlide->resize(225, 255);
        spinBoxIni = new QSpinBox(frmSlide);
        spinBoxIni->setObjectName(QStringLiteral("spinBoxIni"));
        spinBoxIni->setGeometry(QRect(141, 20, 61, 29));
        spinBoxIni->setMaximum(360);
        spinBoxEnd = new QSpinBox(frmSlide);
        spinBoxEnd->setObjectName(QStringLiteral("spinBoxEnd"));
        spinBoxEnd->setGeometry(QRect(141, 60, 61, 29));
        spinBoxEnd->setMinimum(5);
        spinBoxEnd->setMaximum(360);
        spinBoxJump = new QSpinBox(frmSlide);
        spinBoxJump->setObjectName(QStringLiteral("spinBoxJump"));
        spinBoxJump->setGeometry(QRect(141, 100, 61, 29));
        spinBoxJump->setMinimum(1);
        spinBoxJump->setMaximum(360);
        spinBoxSpeed = new QSpinBox(frmSlide);
        spinBoxSpeed->setObjectName(QStringLiteral("spinBoxSpeed"));
        spinBoxSpeed->setGeometry(QRect(141, 140, 61, 29));
        spinBoxSpeed->setMinimum(800);
        spinBoxSpeed->setMaximum(10000);
        label = new QLabel(frmSlide);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(18, 24, 131, 20));
        label_2 = new QLabel(frmSlide);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(18, 64, 131, 20));
        label_3 = new QLabel(frmSlide);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(18, 104, 131, 20));
        label_4 = new QLabel(frmSlide);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(18, 144, 131, 20));
        pushButton = new QPushButton(frmSlide);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 200, 71, 28));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/icons/imagenInte/document-save.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton_2 = new QPushButton(frmSlide);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(19, 200, 91, 28));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/icons/imagenInte/gtk-cancel.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);

        retranslateUi(frmSlide);

        QMetaObject::connectSlotsByName(frmSlide);
    } // setupUi

    void retranslateUi(QDialog *frmSlide)
    {
        frmSlide->setWindowTitle(QApplication::translate("frmSlide", "Slide settings", Q_NULLPTR));
        label->setText(QApplication::translate("frmSlide", "Initial degree", Q_NULLPTR));
        label_2->setText(QApplication::translate("frmSlide", "Final degree", Q_NULLPTR));
        label_3->setText(QApplication::translate("frmSlide", "Jump degree", Q_NULLPTR));
        label_4->setText(QApplication::translate("frmSlide", "Speed", Q_NULLPTR));
        pushButton->setText(QApplication::translate("frmSlide", "Save", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("frmSlide", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class frmSlide: public Ui_frmSlide {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLIDESETTINGS_H
