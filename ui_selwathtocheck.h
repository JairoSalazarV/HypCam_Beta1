/********************************************************************************
** Form generated from reading UI file 'selwathtocheck.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELWATHTOCHECK_H
#define UI_SELWATHTOCHECK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_selWathToCheck
{
public:
    QLabel *labelImg;
    QCheckBox *checkBoxCentroids;
    QCheckBox *checkBoxHorizLR;
    QCheckBox *checkBoxVertLR;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *pbLoadImage;
    QPushButton *pbCentroids;
    QCheckBox *checkBoxLimits;
    QCheckBox *checkBoxLimitsCalculated;
    QDoubleSpinBox *douubleSpinWave;
    QCheckBox *checkBoxWavelength;
    QCheckBox *checkBoxCentroidsCalc;

    void setupUi(QDialog *selWathToCheck)
    {
        if (selWathToCheck->objectName().isEmpty())
            selWathToCheck->setObjectName(QStringLiteral("selWathToCheck"));
        selWathToCheck->resize(291, 385);
        labelImg = new QLabel(selWathToCheck);
        labelImg->setObjectName(QStringLiteral("labelImg"));
        labelImg->setGeometry(QRect(0, 0, 291, 181));
        labelImg->setFrameShape(QFrame::Box);
        labelImg->setLineWidth(1);
        checkBoxCentroids = new QCheckBox(selWathToCheck);
        checkBoxCentroids->setObjectName(QStringLiteral("checkBoxCentroids"));
        checkBoxCentroids->setGeometry(QRect(15, 190, 95, 26));
        checkBoxHorizLR = new QCheckBox(selWathToCheck);
        checkBoxHorizLR->setObjectName(QStringLiteral("checkBoxHorizLR"));
        checkBoxHorizLR->setGeometry(QRect(15, 220, 121, 26));
        checkBoxVertLR = new QCheckBox(selWathToCheck);
        checkBoxVertLR->setObjectName(QStringLiteral("checkBoxVertLR"));
        checkBoxVertLR->setGeometry(QRect(157, 220, 121, 26));
        layoutWidget = new QWidget(selWathToCheck);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(23, 320, 241, 36));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pbLoadImage = new QPushButton(layoutWidget);
        pbLoadImage->setObjectName(QStringLiteral("pbLoadImage"));
        pbLoadImage->setEnabled(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/icons/imagenInte/newProject.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        pbLoadImage->setIcon(icon);

        gridLayout_2->addWidget(pbLoadImage, 0, 0, 1, 1);

        pbCentroids = new QPushButton(layoutWidget);
        pbCentroids->setObjectName(QStringLiteral("pbCentroids"));
        pbCentroids->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/icons/imagenInte/add-542.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbCentroids->setIcon(icon1);

        gridLayout_2->addWidget(pbCentroids, 0, 1, 1, 1);

        checkBoxLimits = new QCheckBox(selWathToCheck);
        checkBoxLimits->setObjectName(QStringLiteral("checkBoxLimits"));
        checkBoxLimits->setGeometry(QRect(15, 250, 121, 26));
        checkBoxLimitsCalculated = new QCheckBox(selWathToCheck);
        checkBoxLimitsCalculated->setObjectName(QStringLiteral("checkBoxLimitsCalculated"));
        checkBoxLimitsCalculated->setGeometry(QRect(157, 251, 141, 26));
        douubleSpinWave = new QDoubleSpinBox(selWathToCheck);
        douubleSpinWave->setObjectName(QStringLiteral("douubleSpinWave"));
        douubleSpinWave->setGeometry(QRect(15, 280, 74, 31));
        checkBoxWavelength = new QCheckBox(selWathToCheck);
        checkBoxWavelength->setObjectName(QStringLiteral("checkBoxWavelength"));
        checkBoxWavelength->setGeometry(QRect(157, 283, 111, 26));
        checkBoxCentroidsCalc = new QCheckBox(selWathToCheck);
        checkBoxCentroidsCalc->setObjectName(QStringLiteral("checkBoxCentroidsCalc"));
        checkBoxCentroidsCalc->setGeometry(QRect(157, 190, 131, 26));

        retranslateUi(selWathToCheck);

        QMetaObject::connectSlotsByName(selWathToCheck);
    } // setupUi

    void retranslateUi(QDialog *selWathToCheck)
    {
        selWathToCheck->setWindowTitle(QApplication::translate("selWathToCheck", "Dialog", nullptr));
        labelImg->setText(QString());
        checkBoxCentroids->setText(QApplication::translate("selWathToCheck", "Centroids", nullptr));
        checkBoxHorizLR->setText(QApplication::translate("selWathToCheck", "Horizontal LR", nullptr));
        checkBoxVertLR->setText(QApplication::translate("selWathToCheck", "Vertical LR", nullptr));
#ifndef QT_NO_TOOLTIP
        pbLoadImage->setToolTip(QApplication::translate("selWathToCheck", "<html><head/><body><p>Select image</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pbLoadImage->setText(QApplication::translate("selWathToCheck", "  Select image", nullptr));
#ifndef QT_NO_TOOLTIP
        pbCentroids->setToolTip(QApplication::translate("selWathToCheck", "<html><head/><body><p>Evaluate centroids</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pbCentroids->setText(QApplication::translate("selWathToCheck", "  Draw", nullptr));
        checkBoxLimits->setText(QApplication::translate("selWathToCheck", "Limits defined", nullptr));
        checkBoxLimitsCalculated->setText(QApplication::translate("selWathToCheck", "Limits calculated", nullptr));
        checkBoxWavelength->setText(QApplication::translate("selWathToCheck", "Wavelength", nullptr));
        checkBoxCentroidsCalc->setText(QApplication::translate("selWathToCheck", "Centroids Calc", nullptr));
    } // retranslateUi

};

namespace Ui {
    class selWathToCheck: public Ui_selWathToCheck {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELWATHTOCHECK_H
