/********************************************************************************
** Form generated from reading UI file 'rotationfrm.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROTATIONFRM_H
#define UI_ROTATIONFRM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rotationFrm
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QDoubleSpinBox *spinAngle;
    QPushButton *pbSaveRotation;
    QPushButton *pbLoadLastRotation;

    void setupUi(QDialog *rotationFrm)
    {
        if (rotationFrm->objectName().isEmpty())
            rotationFrm->setObjectName(QStringLiteral("rotationFrm"));
        rotationFrm->resize(211, 49);
        widget = new QWidget(rotationFrm);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 190, 36));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        spinAngle = new QDoubleSpinBox(widget);
        spinAngle->setObjectName(QStringLiteral("spinAngle"));
        spinAngle->setDecimals(2);
        spinAngle->setMinimum(-15);
        spinAngle->setMaximum(15);
        spinAngle->setSingleStep(0.01);

        gridLayout->addWidget(spinAngle, 0, 0, 1, 1);

        pbSaveRotation = new QPushButton(widget);
        pbSaveRotation->setObjectName(QStringLiteral("pbSaveRotation"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/icons/imagenInte/download-icon.gif"), QSize(), QIcon::Normal, QIcon::Off);
        pbSaveRotation->setIcon(icon);

        gridLayout->addWidget(pbSaveRotation, 0, 1, 1, 1);

        pbLoadLastRotation = new QPushButton(widget);
        pbLoadLastRotation->setObjectName(QStringLiteral("pbLoadLastRotation"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/icons/imagenInte/go-top.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbLoadLastRotation->setIcon(icon1);

        gridLayout->addWidget(pbLoadLastRotation, 0, 2, 1, 1);


        retranslateUi(rotationFrm);

        QMetaObject::connectSlotsByName(rotationFrm);
    } // setupUi

    void retranslateUi(QDialog *rotationFrm)
    {
        rotationFrm->setWindowTitle(QApplication::translate("rotationFrm", "Rotate image", nullptr));
#ifndef QT_NO_TOOLTIP
        pbSaveRotation->setToolTip(QApplication::translate("rotationFrm", "<html><head/><body><p>Save current rotation</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pbSaveRotation->setText(QString());
#ifndef QT_NO_TOOLTIP
        pbLoadLastRotation->setToolTip(QApplication::translate("rotationFrm", "<html><head/><body><p>Load last rotation</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pbLoadLastRotation->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class rotationFrm: public Ui_rotationFrm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROTATIONFRM_H
