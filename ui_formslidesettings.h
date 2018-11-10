/********************************************************************************
** Form generated from reading UI file 'formslidesettings.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMSLIDESETTINGS_H
#define UI_FORMSLIDESETTINGS_H

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

class Ui_formSlideSettings
{
public:
    QSpinBox *spinBoxIni;
    QLabel *label_3;
    QLabel *label;
    QSpinBox *spinBoxSpeed;
    QPushButton *pbSave;
    QPushButton *pbClose;
    QSpinBox *spinBoxEnd;
    QSpinBox *spinBoxJump;
    QLabel *label_4;
    QLabel *label_2;

    void setupUi(QDialog *formSlideSettings)
    {
        if (formSlideSettings->objectName().isEmpty())
            formSlideSettings->setObjectName(QStringLiteral("formSlideSettings"));
        formSlideSettings->resize(231, 245);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/icons/imagenInte/document-properties.svg"), QSize(), QIcon::Normal, QIcon::Off);
        formSlideSettings->setWindowIcon(icon);
        spinBoxIni = new QSpinBox(formSlideSettings);
        spinBoxIni->setObjectName(QStringLiteral("spinBoxIni"));
        spinBoxIni->setGeometry(QRect(143, 16, 61, 29));
        spinBoxIni->setMaximum(360);
        label_3 = new QLabel(formSlideSettings);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 100, 131, 20));
        label = new QLabel(formSlideSettings);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 131, 20));
        spinBoxSpeed = new QSpinBox(formSlideSettings);
        spinBoxSpeed->setObjectName(QStringLiteral("spinBoxSpeed"));
        spinBoxSpeed->setGeometry(QRect(143, 136, 61, 29));
        spinBoxSpeed->setMinimum(800);
        spinBoxSpeed->setMaximum(10000);
        pbSave = new QPushButton(formSlideSettings);
        pbSave->setObjectName(QStringLiteral("pbSave"));
        pbSave->setGeometry(QRect(132, 196, 71, 28));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/icons/imagenInte/document-save.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbSave->setIcon(icon1);
        pbClose = new QPushButton(formSlideSettings);
        pbClose->setObjectName(QStringLiteral("pbClose"));
        pbClose->setGeometry(QRect(21, 196, 91, 28));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/icons/imagenInte/gtk-cancel.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon2);
        spinBoxEnd = new QSpinBox(formSlideSettings);
        spinBoxEnd->setObjectName(QStringLiteral("spinBoxEnd"));
        spinBoxEnd->setGeometry(QRect(143, 56, 61, 29));
        spinBoxEnd->setMinimum(5);
        spinBoxEnd->setMaximum(360);
        spinBoxJump = new QSpinBox(formSlideSettings);
        spinBoxJump->setObjectName(QStringLiteral("spinBoxJump"));
        spinBoxJump->setGeometry(QRect(143, 96, 61, 29));
        spinBoxJump->setMinimum(1);
        spinBoxJump->setMaximum(360);
        label_4 = new QLabel(formSlideSettings);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 140, 131, 20));
        label_2 = new QLabel(formSlideSettings);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 131, 20));

        retranslateUi(formSlideSettings);

        QMetaObject::connectSlotsByName(formSlideSettings);
    } // setupUi

    void retranslateUi(QDialog *formSlideSettings)
    {
        formSlideSettings->setWindowTitle(QApplication::translate("formSlideSettings", "Slide settings", nullptr));
        label_3->setText(QApplication::translate("formSlideSettings", "Jump degree", nullptr));
        label->setText(QApplication::translate("formSlideSettings", "Initial degree", nullptr));
        pbSave->setText(QApplication::translate("formSlideSettings", "Save", nullptr));
        pbClose->setText(QApplication::translate("formSlideSettings", "Close", nullptr));
        label_4->setText(QApplication::translate("formSlideSettings", "Speed", nullptr));
        label_2->setText(QApplication::translate("formSlideSettings", "Final degree", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formSlideSettings: public Ui_formSlideSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMSLIDESETTINGS_H
