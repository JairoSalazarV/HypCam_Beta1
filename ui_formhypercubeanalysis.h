/********************************************************************************
** Form generated from reading UI file 'formhypercubeanalysis.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMHYPERCUBEANALYSIS_H
#define UI_FORMHYPERCUBEANALYSIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_formHypercubeAnalysis
{
public:
    QProgressBar *progressBar;
    QPushButton *pbCubeToImg;
    QPushButton *pbLoadCube;
    QLabel *labelImgNumber;
    QSlider *slideTmpImg;
    QLabel *labelProgressBar;
    QPushButton *pbReset;

    void setupUi(QDialog *formHypercubeAnalysis)
    {
        if (formHypercubeAnalysis->objectName().isEmpty())
            formHypercubeAnalysis->setObjectName(QStringLiteral("formHypercubeAnalysis"));
        formHypercubeAnalysis->resize(829, 614);
        formHypercubeAnalysis->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        progressBar = new QProgressBar(formHypercubeAnalysis);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(570, 12, 251, 23));
        progressBar->setValue(24);
        pbCubeToImg = new QPushButton(formHypercubeAnalysis);
        pbCubeToImg->setObjectName(QStringLiteral("pbCubeToImg"));
        pbCubeToImg->setGeometry(QRect(10, 12, 81, 28));
        pbLoadCube = new QPushButton(formHypercubeAnalysis);
        pbLoadCube->setObjectName(QStringLiteral("pbLoadCube"));
        pbLoadCube->setGeometry(QRect(210, 13, 84, 28));
        labelImgNumber = new QLabel(formHypercubeAnalysis);
        labelImgNumber->setObjectName(QStringLiteral("labelImgNumber"));
        labelImgNumber->setGeometry(QRect(10, 82, 471, 20));
        slideTmpImg = new QSlider(formHypercubeAnalysis);
        slideTmpImg->setObjectName(QStringLiteral("slideTmpImg"));
        slideTmpImg->setGeometry(QRect(10, 50, 811, 31));
        slideTmpImg->setOrientation(Qt::Horizontal);
        labelProgressBar = new QLabel(formHypercubeAnalysis);
        labelProgressBar->setObjectName(QStringLiteral("labelProgressBar"));
        labelProgressBar->setGeometry(QRect(570, 40, 251, 20));
        pbReset = new QPushButton(formHypercubeAnalysis);
        pbReset->setObjectName(QStringLiteral("pbReset"));
        pbReset->setGeometry(QRect(110, 12, 84, 28));

        retranslateUi(formHypercubeAnalysis);

        QMetaObject::connectSlotsByName(formHypercubeAnalysis);
    } // setupUi

    void retranslateUi(QDialog *formHypercubeAnalysis)
    {
        formHypercubeAnalysis->setWindowTitle(QApplication::translate("formHypercubeAnalysis", "Hypercube Analysis", nullptr));
        pbCubeToImg->setText(QApplication::translate("formHypercubeAnalysis", "Settings", nullptr));
        pbLoadCube->setText(QApplication::translate("formHypercubeAnalysis", "Load Cube", nullptr));
        labelImgNumber->setText(QString());
        labelProgressBar->setText(QString());
        pbReset->setText(QApplication::translate("formHypercubeAnalysis", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formHypercubeAnalysis: public Ui_formHypercubeAnalysis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMHYPERCUBEANALYSIS_H
