/********************************************************************************
** Form generated from reading UI file 'xyspace.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XYSPACE_H
#define UI_XYSPACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_xySpace
{
public:
    QGraphicsView *graphicsView;

    void setupUi(QDialog *xySpace)
    {
        if (xySpace->objectName().isEmpty())
            xySpace->setObjectName(QStringLiteral("xySpace"));
        xySpace->resize(586, 443);
        graphicsView = new QGraphicsView(xySpace);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(7, 5, 571, 431));

        retranslateUi(xySpace);

        QMetaObject::connectSlotsByName(xySpace);
    } // setupUi

    void retranslateUi(QDialog *xySpace)
    {
        xySpace->setWindowTitle(QApplication::translate("xySpace", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class xySpace: public Ui_xySpace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XYSPACE_H
