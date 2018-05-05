/********************************************************************************
** Form generated from reading UI file 'formhypcubebuildsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMHYPCUBEBUILDSETTINGS_H
#define UI_FORMHYPCUBEBUILDSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_formHypcubeBuildSettings
{
public:
    QPushButton *pbSave;
    QCheckBox *cbFlip;
    QDoubleSpinBox *spinboxSpectralResolution;
    QLabel *label_3;
    QLabel *label_7;
    QDoubleSpinBox *spinboxSpatialOverlap;
    QLabel *label_8;
    QSpinBox *spinboxSpatialResolution;
    QDoubleSpinBox *spinboxExpMinWave;
    QLabel *label_10;
    QDoubleSpinBox *spinboxExpMaxWave;
    QLabel *label_11;

    void setupUi(QDialog *formHypcubeBuildSettings)
    {
        if (formHypcubeBuildSettings->objectName().isEmpty())
            formHypcubeBuildSettings->setObjectName(QStringLiteral("formHypcubeBuildSettings"));
        formHypcubeBuildSettings->resize(369, 357);
        pbSave = new QPushButton(formHypcubeBuildSettings);
        pbSave->setObjectName(QStringLiteral("pbSave"));
        pbSave->setGeometry(QRect(20, 296, 331, 28));
        cbFlip = new QCheckBox(formHypcubeBuildSettings);
        cbFlip->setObjectName(QStringLiteral("cbFlip"));
        cbFlip->setGeometry(QRect(210, 140, 151, 26));
        spinboxSpectralResolution = new QDoubleSpinBox(formHypcubeBuildSettings);
        spinboxSpectralResolution->setObjectName(QStringLiteral("spinboxSpectralResolution"));
        spinboxSpectralResolution->setGeometry(QRect(208, 17, 141, 29));
        spinboxSpectralResolution->setMaximum(999.99);
        spinboxSpectralResolution->setValue(1);
        label_3 = new QLabel(formHypcubeBuildSettings);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 21, 191, 20));
        label_7 = new QLabel(formHypcubeBuildSettings);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 61, 191, 20));
        spinboxSpatialOverlap = new QDoubleSpinBox(formHypcubeBuildSettings);
        spinboxSpatialOverlap->setObjectName(QStringLiteral("spinboxSpatialOverlap"));
        spinboxSpatialOverlap->setGeometry(QRect(208, 96, 141, 29));
        spinboxSpatialOverlap->setValue(30);
        label_8 = new QLabel(formHypcubeBuildSettings);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 100, 191, 20));
        spinboxSpatialResolution = new QSpinBox(formHypcubeBuildSettings);
        spinboxSpatialResolution->setObjectName(QStringLiteral("spinboxSpatialResolution"));
        spinboxSpatialResolution->setGeometry(QRect(208, 56, 141, 29));
        spinboxSpatialResolution->setMinimum(1);
        spinboxSpatialResolution->setValue(3);
        spinboxExpMinWave = new QDoubleSpinBox(formHypcubeBuildSettings);
        spinboxExpMinWave->setObjectName(QStringLiteral("spinboxExpMinWave"));
        spinboxExpMinWave->setGeometry(QRect(208, 176, 141, 29));
        spinboxExpMinWave->setMinimum(50);
        spinboxExpMinWave->setMaximum(20000);
        spinboxExpMinWave->setValue(400);
        label_10 = new QLabel(formHypcubeBuildSettings);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 180, 191, 20));
        spinboxExpMaxWave = new QDoubleSpinBox(formHypcubeBuildSettings);
        spinboxExpMaxWave->setObjectName(QStringLiteral("spinboxExpMaxWave"));
        spinboxExpMaxWave->setGeometry(QRect(208, 216, 141, 29));
        spinboxExpMaxWave->setMinimum(50);
        spinboxExpMaxWave->setMaximum(20000);
        spinboxExpMaxWave->setValue(920);
        label_11 = new QLabel(formHypcubeBuildSettings);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 220, 191, 20));

        retranslateUi(formHypcubeBuildSettings);

        QMetaObject::connectSlotsByName(formHypcubeBuildSettings);
    } // setupUi

    void retranslateUi(QDialog *formHypcubeBuildSettings)
    {
        formHypcubeBuildSettings->setWindowTitle(QApplication::translate("formHypcubeBuildSettings", "Hypcube Exportation Settings", nullptr));
        pbSave->setText(QApplication::translate("formHypcubeBuildSettings", "Update", nullptr));
        cbFlip->setText(QApplication::translate("formHypcubeBuildSettings", "Horizontal Flip", nullptr));
        label_3->setText(QApplication::translate("formHypcubeBuildSettings", "Spectral Resolution (nm)", nullptr));
        label_7->setText(QApplication::translate("formHypcubeBuildSettings", "Spatial Resolution (pix)", nullptr));
        label_8->setText(QApplication::translate("formHypcubeBuildSettings", "Spatial Overlap (%)", nullptr));
        label_10->setText(QApplication::translate("formHypcubeBuildSettings", "Minimum Wavelength", nullptr));
        label_11->setText(QApplication::translate("formHypcubeBuildSettings", "Maximum Wavelength", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formHypcubeBuildSettings: public Ui_formHypcubeBuildSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMHYPCUBEBUILDSETTINGS_H
