/********************************************************************************
** Form generated from reading UI file 'generatehypercube.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERATEHYPERCUBE_H
#define UI_GENERATEHYPERCUBE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_generateHypercube
{
public:

    void setupUi(QDialog *generateHypercube)
    {
        if (generateHypercube->objectName().isEmpty())
            generateHypercube->setObjectName(QStringLiteral("generateHypercube"));
        generateHypercube->resize(784, 653);

        retranslateUi(generateHypercube);

        QMetaObject::connectSlotsByName(generateHypercube);
    } // setupUi

    void retranslateUi(QDialog *generateHypercube)
    {
        generateHypercube->setWindowTitle(QApplication::translate("generateHypercube", "Hypercube", nullptr));
    } // retranslateUi

};

namespace Ui {
    class generateHypercube: public Ui_generateHypercube {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERATEHYPERCUBE_H
