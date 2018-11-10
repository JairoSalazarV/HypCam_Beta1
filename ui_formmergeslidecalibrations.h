/********************************************************************************
** Form generated from reading UI file 'formmergeslidecalibrations.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMMERGESLIDECALIBRATIONS_H
#define UI_FORMMERGESLIDECALIBRATIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_formMergeSlideCalibrations
{
public:
    QPushButton *pbHorizontal;
    QLabel *labelHor;
    QLineEdit *txtHorPath;
    QLabel *labelHor_2;
    QLineEdit *txtVertPath;
    QPushButton *pbVertical;
    QPushButton *pbMergeCalibration;
    QLineEdit *txtCameraID;
    QLabel *labelHor_3;
    QLabel *labelHor_4;
    QSpinBox *spinBoxOriginH;
    QLabel *labelHor_5;
    QPushButton *pbAffineTrans;
    QLineEdit *txtAffineTrans;
    QPushButton *pbSensitivities;
    QLabel *labelHor_6;
    QLineEdit *txtSensitivities;

    void setupUi(QDialog *formMergeSlideCalibrations)
    {
        if (formMergeSlideCalibrations->objectName().isEmpty())
            formMergeSlideCalibrations->setObjectName(QStringLiteral("formMergeSlideCalibrations"));
        formMergeSlideCalibrations->resize(841, 316);
        pbHorizontal = new QPushButton(formMergeSlideCalibrations);
        pbHorizontal->setObjectName(QStringLiteral("pbHorizontal"));
        pbHorizontal->setGeometry(QRect(770, 20, 41, 28));
        labelHor = new QLabel(formMergeSlideCalibrations);
        labelHor->setObjectName(QStringLiteral("labelHor"));
        labelHor->setGeometry(QRect(14, 25, 121, 20));
        txtHorPath = new QLineEdit(formMergeSlideCalibrations);
        txtHorPath->setObjectName(QStringLiteral("txtHorPath"));
        txtHorPath->setEnabled(false);
        txtHorPath->setGeometry(QRect(140, 20, 631, 28));
        labelHor_2 = new QLabel(formMergeSlideCalibrations);
        labelHor_2->setObjectName(QStringLiteral("labelHor_2"));
        labelHor_2->setGeometry(QRect(14, 65, 121, 20));
        txtVertPath = new QLineEdit(formMergeSlideCalibrations);
        txtVertPath->setObjectName(QStringLiteral("txtVertPath"));
        txtVertPath->setEnabled(false);
        txtVertPath->setGeometry(QRect(140, 60, 631, 28));
        pbVertical = new QPushButton(formMergeSlideCalibrations);
        pbVertical->setObjectName(QStringLiteral("pbVertical"));
        pbVertical->setGeometry(QRect(770, 60, 41, 28));
        pbMergeCalibration = new QPushButton(formMergeSlideCalibrations);
        pbMergeCalibration->setObjectName(QStringLiteral("pbMergeCalibration"));
        pbMergeCalibration->setGeometry(QRect(140, 273, 161, 28));
        txtCameraID = new QLineEdit(formMergeSlideCalibrations);
        txtCameraID->setObjectName(QStringLiteral("txtCameraID"));
        txtCameraID->setGeometry(QRect(140, 225, 161, 28));
        labelHor_3 = new QLabel(formMergeSlideCalibrations);
        labelHor_3->setObjectName(QStringLiteral("labelHor_3"));
        labelHor_3->setGeometry(QRect(14, 230, 121, 20));
        labelHor_4 = new QLabel(formMergeSlideCalibrations);
        labelHor_4->setObjectName(QStringLiteral("labelHor_4"));
        labelHor_4->setGeometry(QRect(14, 185, 121, 20));
        spinBoxOriginH = new QSpinBox(formMergeSlideCalibrations);
        spinBoxOriginH->setObjectName(QStringLiteral("spinBoxOriginH"));
        spinBoxOriginH->setGeometry(QRect(140, 180, 161, 29));
        spinBoxOriginH->setMinimum(20);
        spinBoxOriginH->setMaximum(3000);
        labelHor_5 = new QLabel(formMergeSlideCalibrations);
        labelHor_5->setObjectName(QStringLiteral("labelHor_5"));
        labelHor_5->setGeometry(QRect(14, 105, 121, 20));
        pbAffineTrans = new QPushButton(formMergeSlideCalibrations);
        pbAffineTrans->setObjectName(QStringLiteral("pbAffineTrans"));
        pbAffineTrans->setGeometry(QRect(770, 100, 41, 28));
        txtAffineTrans = new QLineEdit(formMergeSlideCalibrations);
        txtAffineTrans->setObjectName(QStringLiteral("txtAffineTrans"));
        txtAffineTrans->setEnabled(false);
        txtAffineTrans->setGeometry(QRect(140, 100, 631, 28));
        pbSensitivities = new QPushButton(formMergeSlideCalibrations);
        pbSensitivities->setObjectName(QStringLiteral("pbSensitivities"));
        pbSensitivities->setGeometry(QRect(770, 140, 41, 28));
        labelHor_6 = new QLabel(formMergeSlideCalibrations);
        labelHor_6->setObjectName(QStringLiteral("labelHor_6"));
        labelHor_6->setGeometry(QRect(14, 145, 121, 20));
        txtSensitivities = new QLineEdit(formMergeSlideCalibrations);
        txtSensitivities->setObjectName(QStringLiteral("txtSensitivities"));
        txtSensitivities->setEnabled(false);
        txtSensitivities->setGeometry(QRect(140, 140, 631, 28));
        pbMergeCalibration->raise();
        pbHorizontal->raise();
        labelHor->raise();
        txtHorPath->raise();
        labelHor_2->raise();
        txtVertPath->raise();
        pbVertical->raise();
        txtCameraID->raise();
        labelHor_3->raise();
        labelHor_4->raise();
        spinBoxOriginH->raise();
        labelHor_5->raise();
        pbAffineTrans->raise();
        txtAffineTrans->raise();
        pbSensitivities->raise();
        labelHor_6->raise();
        txtSensitivities->raise();

        retranslateUi(formMergeSlideCalibrations);

        QMetaObject::connectSlotsByName(formMergeSlideCalibrations);
    } // setupUi

    void retranslateUi(QDialog *formMergeSlideCalibrations)
    {
        formMergeSlideCalibrations->setWindowTitle(QApplication::translate("formMergeSlideCalibrations", "Merge Calibration", nullptr));
        pbHorizontal->setText(QApplication::translate("formMergeSlideCalibrations", "...", nullptr));
        labelHor->setText(QApplication::translate("formMergeSlideCalibrations", "Horizontal (*)", nullptr));
        labelHor_2->setText(QApplication::translate("formMergeSlideCalibrations", "Vertical (*)", nullptr));
        pbVertical->setText(QApplication::translate("formMergeSlideCalibrations", "...", nullptr));
        pbMergeCalibration->setText(QApplication::translate("formMergeSlideCalibrations", "Merge Calibration", nullptr));
        labelHor_3->setText(QApplication::translate("formMergeSlideCalibrations", "Camera ID (*)", nullptr));
        labelHor_4->setText(QApplication::translate("formMergeSlideCalibrations", "Origin H (*)", nullptr));
        labelHor_5->setText(QApplication::translate("formMergeSlideCalibrations", "Transformation (*)", nullptr));
        pbAffineTrans->setText(QApplication::translate("formMergeSlideCalibrations", "...", nullptr));
        pbSensitivities->setText(QApplication::translate("formMergeSlideCalibrations", "...", nullptr));
        labelHor_6->setText(QApplication::translate("formMergeSlideCalibrations", "Sensitivities", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formMergeSlideCalibrations: public Ui_formMergeSlideCalibrations {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMMERGESLIDECALIBRATIONS_H
