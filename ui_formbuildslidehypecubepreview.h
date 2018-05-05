/********************************************************************************
** Form generated from reading UI file 'formbuildslidehypecubepreview.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMBUILDSLIDEHYPECUBEPREVIEW_H
#define UI_FORMBUILDSLIDEHYPECUBEPREVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_formBuildSlideHypeCubePreview
{
public:
    QGraphicsView *gvSlideHypCubePreview;
    QPushButton *pbApply;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QDoubleSpinBox *spinBoxWavelen;
    QLineEdit *txtFolder;
    QLabel *label_4;
    QPushButton *pbFolder;
    QPushButton *pbUploadImages;
    QLabel *labelProgBar;
    QProgressBar *progBar;
    QPushButton *pbSettings;
    QPushButton *pbSave;
    QPushButton *pbExportCube;
    QPushButton *pbExportImages;

    void setupUi(QDialog *formBuildSlideHypeCubePreview)
    {
        if (formBuildSlideHypeCubePreview->objectName().isEmpty())
            formBuildSlideHypeCubePreview->setObjectName(QStringLiteral("formBuildSlideHypeCubePreview"));
        formBuildSlideHypeCubePreview->resize(1161, 435);
        gvSlideHypCubePreview = new QGraphicsView(formBuildSlideHypeCubePreview);
        gvSlideHypCubePreview->setObjectName(QStringLiteral("gvSlideHypCubePreview"));
        gvSlideHypCubePreview->setGeometry(QRect(15, 80, 911, 281));
        pbApply = new QPushButton(formBuildSlideHypeCubePreview);
        pbApply->setObjectName(QStringLiteral("pbApply"));
        pbApply->setGeometry(QRect(630, 40, 31, 28));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/icons/imagenInte/FiltroActualizar.gif"), QSize(), QIcon::Normal, QIcon::Off);
        pbApply->setIcon(icon);
        layoutWidget = new QWidget(formBuildSlideHypeCubePreview);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 111, 57));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        spinBoxWavelen = new QDoubleSpinBox(layoutWidget);
        spinBoxWavelen->setObjectName(QStringLiteral("spinBoxWavelen"));
        spinBoxWavelen->setMinimum(100);
        spinBoxWavelen->setMaximum(2400);
        spinBoxWavelen->setValue(475);

        gridLayout_2->addWidget(spinBoxWavelen, 1, 0, 1, 1);

        txtFolder = new QLineEdit(formBuildSlideHypeCubePreview);
        txtFolder->setObjectName(QStringLiteral("txtFolder"));
        txtFolder->setGeometry(QRect(135, 40, 201, 28));
        label_4 = new QLabel(formBuildSlideHypeCubePreview);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(175, 10, 75, 20));
        pbFolder = new QPushButton(formBuildSlideHypeCubePreview);
        pbFolder->setObjectName(QStringLiteral("pbFolder"));
        pbFolder->setGeometry(QRect(335, 40, 31, 28));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/icons/imagenInte/folder-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbFolder->setIcon(icon1);
        pbUploadImages = new QPushButton(formBuildSlideHypeCubePreview);
        pbUploadImages->setObjectName(QStringLiteral("pbUploadImages"));
        pbUploadImages->setGeometry(QRect(500, 40, 111, 28));
        labelProgBar = new QLabel(formBuildSlideHypeCubePreview);
        labelProgBar->setObjectName(QStringLiteral("labelProgBar"));
        labelProgBar->setGeometry(QRect(760, 55, 371, 20));
        labelProgBar->setStyleSheet(QStringLiteral(""));
        progBar = new QProgressBar(formBuildSlideHypeCubePreview);
        progBar->setObjectName(QStringLiteral("progBar"));
        progBar->setGeometry(QRect(760, 40, 371, 16));
        progBar->setValue(0);
        pbSettings = new QPushButton(formBuildSlideHypeCubePreview);
        pbSettings->setObjectName(QStringLiteral("pbSettings"));
        pbSettings->setGeometry(QRect(430, 40, 61, 28));
        pbSave = new QPushButton(formBuildSlideHypeCubePreview);
        pbSave->setObjectName(QStringLiteral("pbSave"));
        pbSave->setGeometry(QRect(390, 40, 31, 28));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/icons/imagenInte/document-save.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbSave->setIcon(icon2);
        pbExportCube = new QPushButton(formBuildSlideHypeCubePreview);
        pbExportCube->setObjectName(QStringLiteral("pbExportCube"));
        pbExportCube->setGeometry(QRect(710, 40, 31, 28));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/icons/imagenInte/hypCube.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbExportCube->setIcon(icon3);
        pbExportImages = new QPushButton(formBuildSlideHypeCubePreview);
        pbExportImages->setObjectName(QStringLiteral("pbExportImages"));
        pbExportImages->setGeometry(QRect(670, 40, 31, 28));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/icons/imagenInte/newProject.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbExportImages->setIcon(icon4);

        retranslateUi(formBuildSlideHypeCubePreview);

        QMetaObject::connectSlotsByName(formBuildSlideHypeCubePreview);
    } // setupUi

    void retranslateUi(QDialog *formBuildSlideHypeCubePreview)
    {
        formBuildSlideHypeCubePreview->setWindowTitle(QApplication::translate("formBuildSlideHypeCubePreview", "Build Slide Hypercube Preview", nullptr));
        pbApply->setText(QString());
        label_3->setText(QApplication::translate("formBuildSlideHypeCubePreview", "Wavelength nm", nullptr));
        label_4->setText(QApplication::translate("formBuildSlideHypeCubePreview", "Folder", nullptr));
        pbFolder->setText(QString());
        pbUploadImages->setText(QApplication::translate("formBuildSlideHypeCubePreview", "Upload Images", nullptr));
        labelProgBar->setText(QString());
        pbSettings->setText(QApplication::translate("formBuildSlideHypeCubePreview", "Settings", nullptr));
#ifndef QT_NO_TOOLTIP
        pbSave->setToolTip(QApplication::translate("formBuildSlideHypeCubePreview", "<html><head/><body><p>Save Last Layer Exported</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pbSave->setText(QString());
#ifndef QT_NO_TOOLTIP
        pbExportCube->setToolTip(QApplication::translate("formBuildSlideHypeCubePreview", "<html><head/><body><p>Export Slide HypCube</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pbExportCube->setText(QString());
#ifndef QT_NO_TOOLTIP
        pbExportImages->setToolTip(QApplication::translate("formBuildSlideHypeCubePreview", "<html><head/><body><p>Export to Images</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pbExportImages->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class formBuildSlideHypeCubePreview: public Ui_formBuildSlideHypeCubePreview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMBUILDSLIDEHYPECUBEPREVIEW_H
