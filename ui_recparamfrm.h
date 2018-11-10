/********************************************************************************
** Form generated from reading UI file 'recparamfrm.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECPARAMFRM_H
#define UI_RECPARAMFRM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_recParamFrm
{
public:
    QLineEdit *txtParam;
    QPushButton *pbSendParam;

    void setupUi(QDialog *recParamFrm)
    {
        if (recParamFrm->objectName().isEmpty())
            recParamFrm->setObjectName(QStringLiteral("recParamFrm"));
        recParamFrm->resize(252, 51);
        txtParam = new QLineEdit(recParamFrm);
        txtParam->setObjectName(QStringLiteral("txtParam"));
        txtParam->setGeometry(QRect(10, 10, 191, 33));
        pbSendParam = new QPushButton(recParamFrm);
        pbSendParam->setObjectName(QStringLiteral("pbSendParam"));
        pbSendParam->setEnabled(true);
        pbSendParam->setGeometry(QRect(210, 10, 31, 31));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/icons/imagenInte/dialog-apply.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbSendParam->setIcon(icon);

        retranslateUi(recParamFrm);

        QMetaObject::connectSlotsByName(recParamFrm);
    } // setupUi

    void retranslateUi(QDialog *recParamFrm)
    {
        recParamFrm->setWindowTitle(QApplication::translate("recParamFrm", "Dialog", nullptr));
#ifndef QT_NO_TOOLTIP
        pbSendParam->setToolTip(QApplication::translate("recParamFrm", "<html><head/><body><p>Play</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pbSendParam->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class recParamFrm: public Ui_recParamFrm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECPARAMFRM_H
