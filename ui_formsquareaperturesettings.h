/********************************************************************************
** Form generated from reading UI file 'formsquareaperturesettings.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMSQUAREAPERTURESETTINGS_H
#define UI_FORMSQUAREAPERTURESETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_formSquareApertureSettings
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBoxBlue;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBoxGreen;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBoxRed;
    QLabel *label_4;
    QSpinBox *spinBoxEMIterations;

    void setupUi(QDialog *formSquareApertureSettings)
    {
        if (formSquareApertureSettings->objectName().isEmpty())
            formSquareApertureSettings->setObjectName(QStringLiteral("formSquareApertureSettings"));
        formSquareApertureSettings->resize(400, 300);
        buttonBox = new QDialogButtonBox(formSquareApertureSettings);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(formSquareApertureSettings);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 121, 20));
        doubleSpinBoxBlue = new QDoubleSpinBox(formSquareApertureSettings);
        doubleSpinBoxBlue->setObjectName(QStringLiteral("doubleSpinBoxBlue"));
        doubleSpinBoxBlue->setGeometry(QRect(140, 16, 70, 29));
        doubleSpinBoxBlue->setMinimum(300);
        doubleSpinBoxBlue->setMaximum(510);
        doubleSpinBoxBlue->setValue(438);
        label_2 = new QLabel(formSquareApertureSettings);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 55, 121, 20));
        doubleSpinBoxGreen = new QDoubleSpinBox(formSquareApertureSettings);
        doubleSpinBoxGreen->setObjectName(QStringLiteral("doubleSpinBoxGreen"));
        doubleSpinBoxGreen->setGeometry(QRect(140, 51, 70, 29));
        doubleSpinBoxGreen->setMinimum(450);
        doubleSpinBoxGreen->setMaximum(570);
        doubleSpinBoxGreen->setValue(542);
        label_3 = new QLabel(formSquareApertureSettings);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 90, 121, 20));
        doubleSpinBoxRed = new QDoubleSpinBox(formSquareApertureSettings);
        doubleSpinBoxRed->setObjectName(QStringLiteral("doubleSpinBoxRed"));
        doubleSpinBoxRed->setGeometry(QRect(140, 86, 70, 29));
        doubleSpinBoxRed->setMinimum(500);
        doubleSpinBoxRed->setMaximum(750);
        doubleSpinBoxRed->setValue(618);
        label_4 = new QLabel(formSquareApertureSettings);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 124, 121, 20));
        spinBoxEMIterations = new QSpinBox(formSquareApertureSettings);
        spinBoxEMIterations->setObjectName(QStringLiteral("spinBoxEMIterations"));
        spinBoxEMIterations->setGeometry(QRect(140, 121, 71, 29));
        spinBoxEMIterations->setMinimum(1);
        spinBoxEMIterations->setMaximum(1000);
        spinBoxEMIterations->setValue(1);

        retranslateUi(formSquareApertureSettings);
        QObject::connect(buttonBox, SIGNAL(accepted()), formSquareApertureSettings, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), formSquareApertureSettings, SLOT(reject()));

        QMetaObject::connectSlotsByName(formSquareApertureSettings);
    } // setupUi

    void retranslateUi(QDialog *formSquareApertureSettings)
    {
        formSquareApertureSettings->setWindowTitle(QApplication::translate("formSquareApertureSettings", "Fluorescent Wavelengths", nullptr));
        label->setText(QApplication::translate("formSquareApertureSettings", "Wavelen Blue", nullptr));
        label_2->setText(QApplication::translate("formSquareApertureSettings", "Wavelen Green", nullptr));
        label_3->setText(QApplication::translate("formSquareApertureSettings", "Wavelen Red", nullptr));
        label_4->setText(QApplication::translate("formSquareApertureSettings", "EM Iterations", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formSquareApertureSettings: public Ui_formSquareApertureSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMSQUAREAPERTURESETTINGS_H
