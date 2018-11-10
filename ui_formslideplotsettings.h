/********************************************************************************
** Form generated from reading UI file 'formslideplotsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMSLIDEPLOTSETTINGS_H
#define UI_FORMSLIDEPLOTSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_formSlidePlotSettings
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QDoubleSpinBox *spinBoxMinWave;
    QDoubleSpinBox *spinBoxMaxWave;
    QLabel *label_2;
    QDoubleSpinBox *spinBoxXFrame;
    QLabel *label_3;
    QDoubleSpinBox *spinBoxYFrame;
    QLabel *label_4;
    QLabel *label_5;
    QDoubleSpinBox *spinBoxXStep;
    QLabel *label_6;
    QDoubleSpinBox *spinBoxYStep;

    void setupUi(QDialog *formSlidePlotSettings)
    {
        if (formSlidePlotSettings->objectName().isEmpty())
            formSlidePlotSettings->setObjectName(QStringLiteral("formSlidePlotSettings"));
        formSlidePlotSettings->resize(392, 410);
        buttonBox = new QDialogButtonBox(formSlidePlotSettings);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 350, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(formSlidePlotSettings);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 181, 20));
        spinBoxMinWave = new QDoubleSpinBox(formSlidePlotSettings);
        spinBoxMinWave->setObjectName(QStringLiteral("spinBoxMinWave"));
        spinBoxMinWave->setGeometry(QRect(210, 26, 141, 29));
        spinBoxMinWave->setMinimum(0);
        spinBoxMinWave->setMaximum(15000);
        spinBoxMinWave->setValue(0);
        spinBoxMaxWave = new QDoubleSpinBox(formSlidePlotSettings);
        spinBoxMaxWave->setObjectName(QStringLiteral("spinBoxMaxWave"));
        spinBoxMaxWave->setGeometry(QRect(210, 66, 141, 29));
        spinBoxMaxWave->setMinimum(0);
        spinBoxMaxWave->setMaximum(15000);
        spinBoxMaxWave->setValue(1100);
        label_2 = new QLabel(formSlidePlotSettings);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 70, 181, 20));
        spinBoxXFrame = new QDoubleSpinBox(formSlidePlotSettings);
        spinBoxXFrame->setObjectName(QStringLiteral("spinBoxXFrame"));
        spinBoxXFrame->setGeometry(QRect(210, 106, 141, 29));
        spinBoxXFrame->setMinimum(0);
        spinBoxXFrame->setMaximum(15000);
        spinBoxXFrame->setValue(50);
        label_3 = new QLabel(formSlidePlotSettings);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 110, 181, 20));
        spinBoxYFrame = new QDoubleSpinBox(formSlidePlotSettings);
        spinBoxYFrame->setObjectName(QStringLiteral("spinBoxYFrame"));
        spinBoxYFrame->setGeometry(QRect(210, 146, 141, 29));
        spinBoxYFrame->setMinimum(0);
        spinBoxYFrame->setMaximum(15000);
        spinBoxYFrame->setValue(50);
        label_4 = new QLabel(formSlidePlotSettings);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 150, 181, 20));
        label_5 = new QLabel(formSlidePlotSettings);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 194, 181, 20));
        spinBoxXStep = new QDoubleSpinBox(formSlidePlotSettings);
        spinBoxXStep->setObjectName(QStringLiteral("spinBoxXStep"));
        spinBoxXStep->setGeometry(QRect(210, 190, 141, 29));
        spinBoxXStep->setMinimum(0);
        spinBoxXStep->setMaximum(15000);
        spinBoxXStep->setValue(10);
        label_6 = new QLabel(formSlidePlotSettings);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 240, 181, 20));
        spinBoxYStep = new QDoubleSpinBox(formSlidePlotSettings);
        spinBoxYStep->setObjectName(QStringLiteral("spinBoxYStep"));
        spinBoxYStep->setGeometry(QRect(210, 236, 141, 29));
        spinBoxYStep->setMinimum(0);
        spinBoxYStep->setMaximum(15000);
        spinBoxYStep->setValue(50);

        retranslateUi(formSlidePlotSettings);
        QObject::connect(buttonBox, SIGNAL(accepted()), formSlidePlotSettings, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), formSlidePlotSettings, SLOT(reject()));

        QMetaObject::connectSlotsByName(formSlidePlotSettings);
    } // setupUi

    void retranslateUi(QDialog *formSlidePlotSettings)
    {
        formSlidePlotSettings->setWindowTitle(QApplication::translate("formSlidePlotSettings", "Plot Settings", nullptr));
        label->setText(QApplication::translate("formSlidePlotSettings", "Minimum Wavelength", nullptr));
        label_2->setText(QApplication::translate("formSlidePlotSettings", "Maximum Wavelength", nullptr));
        label_3->setText(QApplication::translate("formSlidePlotSettings", "X-Frame", nullptr));
        label_4->setText(QApplication::translate("formSlidePlotSettings", "Y-Frame", nullptr));
        label_5->setText(QApplication::translate("formSlidePlotSettings", "X-Step", nullptr));
        label_6->setText(QApplication::translate("formSlidePlotSettings", "Y-Step", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formSlidePlotSettings: public Ui_formSlidePlotSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMSLIDEPLOTSETTINGS_H
