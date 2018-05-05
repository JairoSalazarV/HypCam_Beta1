/********************************************************************************
** Form generated from reading UI file 'formobtainfolder.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMOBTAINFOLDER_H
#define UI_FORMOBTAINFOLDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_formObtainFolder
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *txtSource;
    QLineEdit *txtDestination;
    QLabel *label_2;
    QPushButton *pbFolderDestination;

    void setupUi(QDialog *formObtainFolder)
    {
        if (formObtainFolder->objectName().isEmpty())
            formObtainFolder->setObjectName(QStringLiteral("formObtainFolder"));
        formObtainFolder->resize(400, 300);
        buttonBox = new QDialogButtonBox(formObtainFolder);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(formObtainFolder);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 70, 63, 20));
        txtSource = new QLineEdit(formObtainFolder);
        txtSource->setObjectName(QStringLiteral("txtSource"));
        txtSource->setGeometry(QRect(105, 67, 241, 28));
        txtDestination = new QLineEdit(formObtainFolder);
        txtDestination->setObjectName(QStringLiteral("txtDestination"));
        txtDestination->setGeometry(QRect(105, 110, 241, 28));
        label_2 = new QLabel(formObtainFolder);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 113, 81, 20));
        pbFolderDestination = new QPushButton(formObtainFolder);
        pbFolderDestination->setObjectName(QStringLiteral("pbFolderDestination"));
        pbFolderDestination->setGeometry(QRect(356, 110, 31, 28));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/icons/imagenInte/folder-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbFolderDestination->setIcon(icon);

        retranslateUi(formObtainFolder);
        QObject::connect(buttonBox, SIGNAL(accepted()), formObtainFolder, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), formObtainFolder, SLOT(reject()));

        QMetaObject::connectSlotsByName(formObtainFolder);
    } // setupUi

    void retranslateUi(QDialog *formObtainFolder)
    {
        formObtainFolder->setWindowTitle(QApplication::translate("formObtainFolder", "Obtain Folder", nullptr));
        label->setText(QApplication::translate("formObtainFolder", "Source", nullptr));
        label_2->setText(QApplication::translate("formObtainFolder", "Destination", nullptr));
#ifndef QT_NO_TOOLTIP
        pbFolderDestination->setToolTip(QApplication::translate("formObtainFolder", "<html><head/><body><p>Origin</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pbFolderDestination->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class formObtainFolder: public Ui_formObtainFolder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMOBTAINFOLDER_H
