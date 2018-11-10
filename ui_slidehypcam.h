/********************************************************************************
** Form generated from reading UI file 'slidehypcam.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLIDEHYPCAM_H
#define UI_SLIDEHYPCAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_slideHypCam
{
public:
    QAction *actionpbGetSlideCube;
    QAction *actionSlide_settings;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *slideHypCam)
    {
        if (slideHypCam->objectName().isEmpty())
            slideHypCam->setObjectName(QStringLiteral("slideHypCam"));
        slideHypCam->resize(800, 600);
        actionpbGetSlideCube = new QAction(slideHypCam);
        actionpbGetSlideCube->setObjectName(QStringLiteral("actionpbGetSlideCube"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/icons/imagenInte/slide.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionpbGetSlideCube->setIcon(icon);
        actionSlide_settings = new QAction(slideHypCam);
        actionSlide_settings->setObjectName(QStringLiteral("actionSlide_settings"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/icons/imagenInte/document-properties.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSlide_settings->setIcon(icon1);
        centralwidget = new QWidget(slideHypCam);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        slideHypCam->setCentralWidget(centralwidget);
        menubar = new QMenuBar(slideHypCam);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        slideHypCam->setMenuBar(menubar);
        statusbar = new QStatusBar(slideHypCam);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        slideHypCam->setStatusBar(statusbar);
        toolBar = new QToolBar(slideHypCam);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        slideHypCam->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionpbGetSlideCube);
        toolBar->addAction(actionSlide_settings);

        retranslateUi(slideHypCam);

        QMetaObject::connectSlotsByName(slideHypCam);
    } // setupUi

    void retranslateUi(QMainWindow *slideHypCam)
    {
        slideHypCam->setWindowTitle(QApplication::translate("slideHypCam", "MainWindow", nullptr));
        actionpbGetSlideCube->setText(QApplication::translate("slideHypCam", "pbGetSlideCube", nullptr));
#ifndef QT_NO_TOOLTIP
        actionpbGetSlideCube->setToolTip(QApplication::translate("slideHypCam", "Get Slide-Cube", nullptr));
#endif // QT_NO_TOOLTIP
        actionSlide_settings->setText(QApplication::translate("slideHypCam", "Slide settings", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSlide_settings->setToolTip(QApplication::translate("slideHypCam", "Slide settings", nullptr));
#endif // QT_NO_TOOLTIP
        toolBar->setWindowTitle(QApplication::translate("slideHypCam", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class slideHypCam: public Ui_slideHypCam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLIDEHYPCAM_H
