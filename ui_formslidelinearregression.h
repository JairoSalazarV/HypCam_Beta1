/********************************************************************************
** Form generated from reading UI file 'formslidelinearregression.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMSLIDELINEARREGRESSION_H
#define UI_FORMSLIDELINEARREGRESSION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_formSlideLinearRegression
{
public:
    QPushButton *pbGenRegression;
    QLabel *label_2;
    QPushButton *pbRemoveItem;
    QPushButton *pbSelectFile;
    QTableWidget *tableLstPoints;
    QPushButton *pbGenHorRegression;
    QPushButton *pbGenAffinTrans;

    void setupUi(QDialog *formSlideLinearRegression)
    {
        if (formSlideLinearRegression->objectName().isEmpty())
            formSlideLinearRegression->setObjectName(QStringLiteral("formSlideLinearRegression"));
        formSlideLinearRegression->resize(537, 464);
        pbGenRegression = new QPushButton(formSlideLinearRegression);
        pbGenRegression->setObjectName(QStringLiteral("pbGenRegression"));
        pbGenRegression->setGeometry(QRect(260, 380, 221, 28));
        label_2 = new QLabel(formSlideLinearRegression);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 30, 111, 20));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        pbRemoveItem = new QPushButton(formSlideLinearRegression);
        pbRemoveItem->setObjectName(QStringLiteral("pbRemoveItem"));
        pbRemoveItem->setGeometry(QRect(490, 380, 31, 28));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/icons/imagenInte/stop.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbRemoveItem->setIcon(icon);
        pbSelectFile = new QPushButton(formSlideLinearRegression);
        pbSelectFile->setObjectName(QStringLiteral("pbSelectFile"));
        pbSelectFile->setGeometry(QRect(115, 26, 31, 28));
        tableLstPoints = new QTableWidget(formSlideLinearRegression);
        if (tableLstPoints->columnCount() < 4)
            tableLstPoints->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem->setFont(font);
        tableLstPoints->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem1->setFont(font);
        tableLstPoints->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem2->setFont(font);
        tableLstPoints->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem3->setFont(font);
        tableLstPoints->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableLstPoints->setObjectName(QStringLiteral("tableLstPoints"));
        tableLstPoints->setGeometry(QRect(10, 68, 511, 301));
        pbGenHorRegression = new QPushButton(formSlideLinearRegression);
        pbGenHorRegression->setObjectName(QStringLiteral("pbGenHorRegression"));
        pbGenHorRegression->setGeometry(QRect(30, 380, 221, 28));
        pbGenAffinTrans = new QPushButton(formSlideLinearRegression);
        pbGenAffinTrans->setObjectName(QStringLiteral("pbGenAffinTrans"));
        pbGenAffinTrans->setGeometry(QRect(30, 420, 221, 28));

        retranslateUi(formSlideLinearRegression);

        QMetaObject::connectSlotsByName(formSlideLinearRegression);
    } // setupUi

    void retranslateUi(QDialog *formSlideLinearRegression)
    {
        formSlideLinearRegression->setWindowTitle(QApplication::translate("formSlideLinearRegression", "Slide Linear Regression", nullptr));
        pbGenRegression->setText(QApplication::translate("formSlideLinearRegression", "Generate Vertical Calibration", nullptr));
        label_2->setText(QApplication::translate("formSlideLinearRegression", "Select Line", nullptr));
#ifndef QT_NO_TOOLTIP
        pbRemoveItem->setToolTip(QApplication::translate("formSlideLinearRegression", "<html><head/><body><p>Remove Item</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pbRemoveItem->setText(QString());
        pbSelectFile->setText(QApplication::translate("formSlideLinearRegression", "...", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableLstPoints->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("formSlideLinearRegression", "Wavelength", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableLstPoints->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("formSlideLinearRegression", "P1", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableLstPoints->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("formSlideLinearRegression", "P2", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableLstPoints->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("formSlideLinearRegression", "Image Size", nullptr));
        pbGenHorRegression->setText(QApplication::translate("formSlideLinearRegression", "Generate Horizontal Calibration", nullptr));
        pbGenAffinTrans->setText(QApplication::translate("formSlideLinearRegression", "Generate Affine Transformation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formSlideLinearRegression: public Ui_formSlideLinearRegression {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMSLIDELINEARREGRESSION_H
