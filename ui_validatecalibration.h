/********************************************************************************
** Form generated from reading UI file 'validatecalibration.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VALIDATECALIBRATION_H
#define UI_VALIDATECALIBRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_validateCalibration
{
public:

    void setupUi(QDialog *validateCalibration)
    {
        if (validateCalibration->objectName().isEmpty())
            validateCalibration->setObjectName(QStringLiteral("validateCalibration"));
        validateCalibration->resize(519, 335);

        retranslateUi(validateCalibration);

        QMetaObject::connectSlotsByName(validateCalibration);
    } // setupUi

    void retranslateUi(QDialog *validateCalibration)
    {
        validateCalibration->setWindowTitle(QApplication::translate("validateCalibration", "Validate calibration", 0));
    } // retranslateUi

};

namespace Ui {
    class validateCalibration: public Ui_validateCalibration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VALIDATECALIBRATION_H
