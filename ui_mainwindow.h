/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionRect;
    QAction *actionCircle;
    QAction *actionHorizontalLine;
    QAction *actionVerticalLine;
    QAction *actionClear;
    QAction *actionSelection;
    QAction *actionDrawToolbar;
    QAction *actionDoubAxisDiff;
    QAction *actionRotateImg;
    QAction *actionLoadCanvas;
    QAction *actionApplyThreshold;
    QAction *actionLoadSquareRectangle;
    QAction *actionLoadRegOfInteres;
    QAction *actionToolPenArea;
    QAction *actionSaveCanvas;
    QAction *actionSend_to_XYZ;
    QAction *actionExportPixelsSelected;
    QAction *actionGenHypercube;
    QAction *actionValidCal;
    QAction *actionValCal;
    QAction *actionSquareUsable;
    QAction *actionChoseWavelength;
    QAction *actionFittFunction;
    QAction *actionShow_hypercube;
    QAction *actionBilinear_interpolation;
    QAction *actionslideHypCam;
    QAction *pbDrawSlide;
    QAction *actionSlide_settings;
    QAction *actionsquareSettings;
    QAction *actionvideoToFrames;
    QAction *actionframesToCube;
    QAction *actionNDVI;
    QAction *actionRGB_to_XY;
    QAction *actionNDVI_Algorithm;
    QAction *actionFull_Screen;
    QAction *actionDisplay_Original;
    QAction *actionFull_photo;
    QAction *actionDiffraction;
    QAction *actionAperture;
    QAction *actionSlideDiffraction;
    QAction *actionVideo;
    QAction *actionTimelapse;
    QAction *actionSave;
    QAction *actionComposed;
    QAction *actionObtain_Folder;
    QAction *actionObtain_File;
    QAction *actionSlide_Build_Hypercube;
    QAction *actionVideo_2;
    QAction *actionTimelapse_2;
    QAction *actionSnapshot;
    QAction *actionSnapvideos;
    QAction *actionSynchronize;
    QAction *actionAbout_this;
    QAction *actionTechnical_Support;
    QAction *actionSync_Folder;
    QAction *actionFull_Video;
    QAction *actionMultiImageAverage;
    QAction *actionMultiImageMinimum;
    QAction *actionMultiImageMaximum;
    QAction *actionSlide_Settings;
    QAction *actionSquare_Location;
    QAction *actionLinear_Regression;
    QAction *actionDiffraction_Origin;
    QAction *openLine;
    QAction *actionSlide_Linear_Regression;
    QAction *actionarcLine;
    QAction *actionPlot_Calculated_Line;
    QAction *actionPlot_Upper_Line_Rotation;
    QAction *actionOrigin;
    QAction *actionBuld_HypImg;
    QAction *actionMerge_Calibration;
    QAction *actionPlot_over_Real;
    QAction *actionPlot_Line_at_Wavelength;
    QAction *actionSlide_Calibration_File;
    QAction *actionMerge_into_RGB;
    QAction *actionTesting;
    QAction *actionApply_Rotation;
    QAction *actionApply_Transformation;
    QAction *actionRestore_Original;
    QAction *actionExtract_frames_2;
    QAction *actionBuild_HypCube;
    QAction *actionSlide_Max_Wavelength;
    QAction *actionBuild_HypCube_2;
    QAction *actionSlide_HypCube_Building;
    QAction *actionCamera_Sensitivities;
    QAction *actionCalc_Sensitivities;
    QAction *actionSlide_Min_Wavelength;
    QAction *actionHypCube_From_H264;
    QAction *actionCube_Analysis;
    QAction *actionApply_Affine_Transformation;
    QAction *actionApply_Optical_Correction;
    QAction *actionExtract_ROI;
    QWidget *centralWidget;
    QTabWidget *pbExpPixs;
    QWidget *tab;
    QTableWidget *tableLstCams;
    QFrame *frame;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QLabel *labelIP;
    QLineEdit *txtIp;
    QPushButton *pbAddIp;
    QPushButton *pbSearchAll;
    QFrame *frame_2;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_2;
    QPushButton *pbSendComm;
    QCheckBox *checkBlind;
    QLabel *labelCommand;
    QLineEdit *txtCommand;
    QPushButton *pbShutdown;
    QTextEdit *txtCommRes;
    QPushButton *pbConnect;
    QPushButton *pbLANConnect;
    QPushButton *pbLANTestConn;
    QWidget *tab_2;
    QLabel *labelVideo;
    QFrame *frame_3;
    QLabel *labelSquareShuterSpeed_4;
    QSpinBox *spinBoxTimelapse;
    QLabel *labelSquareShuterSpeed_3;
    QSpinBox *spinBoxTimelapseDuration;
    QLabel *labelSquareShuterSpeed_6;
    QLabel *labelSquareShuterSpeed_7;
    QFrame *frame_4;
    QSpinBox *spinBoxVideoDuration;
    QComboBox *cbAWB;
    QLabel *labelSquareShuterSpeed;
    QLabel *label_3;
    QSpinBox *spinBoxShuterSpeed;
    QLabel *label_2;
    QLabel *labelSquareShuterSpeed_2;
    QSpinBox *spinBoxSquareShuterSpeed;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout;
    QCheckBox *cbColorBalance;
    QCheckBox *cbDenoise;
    QCheckBox *cbFlipped;
    QComboBox *cbExposure;
    QGroupBox *groupResolution;
    QRadioButton *radioRes5Mp;
    QRadioButton *radioRes8Mp;
    QLabel *labelSquareShuterSpeed_5;
    QLabel *labelISO;
    QSlider *slideISO;
    QLabel *labelSquareShuterSpeed_8;
    QLabel *labelSquareShuterSpeed_9;
    QLabel *labelSquareShuterSpeed_10;
    QFrame *frame_5;
    QPushButton *pbSaveImage;
    QPushButton *pbSnapshot;
    QPushButton *pbSnapVid;
    QPushButton *pbTimeLapse;
    QPushButton *pbOneShotSnapshot;
    QPushButton *pbSnapshotSquare;
    QFrame *frame_6;
    QLineEdit *txtCamParamXMLName;
    QPushButton *pbSaveRaspParam;
    QPushButton *pbCopyShutter;
    QPushButton *pbObtPar;
    QFrame *frame_7;
    QSlider *slideTriggerTime;
    QLabel *labelTriggerTime;
    QWidget *tab_6;
    QWidget *tabShowPixels;
    QPushButton *pbSelectFolder;
    QGraphicsView *graphViewPlot;
    QSlider *slideChangeImage;
    QLabel *labelCubeImageName;
    QWidget *tab_5;
    QWidget *layoutWidget4;
    QGridLayout *gridColors;
    QSlider *slideRedLen;
    QSlider *slideBlueLen;
    QSlider *slideGreenLen;
    QWidget *layoutWidget5;
    QGridLayout *gridLayout_5;
    QCheckBox *chbGreen;
    QPushButton *pbSpecSnapshot;
    QCheckBox *chbRed;
    QSpinBox *sbSpecUsb;
    QCheckBox *chbBlue;
    QLabel *label_4;
    QPushButton *pbViewBack;
    QPushButton *pbSnapCal;
    QPushButton *pbSpecCut;
    QPushButton *pbSpecLoadSnap;
    QProgressBar *progBar;
    QLabel *labelProgBar;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuImage;
    QMenu *menuFilter;
    QMenu *menuMultiselected;
    QMenu *menuMerge;
    QMenu *menuAnalysis;
    QMenu *menuSettings;
    QMenu *menuSet;
    QMenu *menuCamera;
    QMenu *menuDouble_Axis;
    QMenu *menuSlide;
    QMenu *menuCompute;
    QMenu *menuObtain;
    QMenu *menuSend;
    QMenu *menuStart;
    QMenu *menuHelp;
    QMenu *menuMake;
    QMenu *menuPlot;
    QMenu *menuCalib_Edition;
    QMenu *menuLocal;
    QMenu *menuSlide_2;
    QMenu *menuStep_by_Step;
    QToolBar *toolBarDraw;
    QToolBar *mainToolbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1084, 698);
        MainWindow->setMouseTracking(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/icons/imagenInte/hypCube.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionRect = new QAction(MainWindow);
        actionRect->setObjectName(QStringLiteral("actionRect"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/imagenInte/rectOn.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRect->setIcon(icon1);
        actionCircle = new QAction(MainWindow);
        actionCircle->setObjectName(QStringLiteral("actionCircle"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/imagenInte/circleOff.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCircle->setIcon(icon2);
        actionHorizontalLine = new QAction(MainWindow);
        actionHorizontalLine->setObjectName(QStringLiteral("actionHorizontalLine"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/imagenInte/HorizLineOn.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHorizontalLine->setIcon(icon3);
        actionVerticalLine = new QAction(MainWindow);
        actionVerticalLine->setObjectName(QStringLiteral("actionVerticalLine"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/imagenInte/VerticalLineOn.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionVerticalLine->setIcon(icon4);
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName(QStringLiteral("actionClear"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/icons/imagenInte/edit-clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear->setIcon(icon5);
        actionSelection = new QAction(MainWindow);
        actionSelection->setObjectName(QStringLiteral("actionSelection"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/imagenInte/MouseSelOn.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelection->setIcon(icon6);
        actionDrawToolbar = new QAction(MainWindow);
        actionDrawToolbar->setObjectName(QStringLiteral("actionDrawToolbar"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/new/icons/imagenInte/categorias1.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDrawToolbar->setIcon(icon7);
        actionDoubAxisDiff = new QAction(MainWindow);
        actionDoubAxisDiff->setObjectName(QStringLiteral("actionDoubAxisDiff"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/new/icons/imagenInte/DoubleAxisDiff.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDoubAxisDiff->setIcon(icon8);
        actionRotateImg = new QAction(MainWindow);
        actionRotateImg->setObjectName(QStringLiteral("actionRotateImg"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/new/icons/imagenInte/actualizar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRotateImg->setIcon(icon9);
        actionLoadCanvas = new QAction(MainWindow);
        actionLoadCanvas->setObjectName(QStringLiteral("actionLoadCanvas"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/new/icons/imagenInte/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoadCanvas->setIcon(icon10);
        actionApplyThreshold = new QAction(MainWindow);
        actionApplyThreshold->setObjectName(QStringLiteral("actionApplyThreshold"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/new/icons/imagenInte/FiltroActualizar.gif"), QSize(), QIcon::Normal, QIcon::Off);
        actionApplyThreshold->setIcon(icon11);
        actionLoadSquareRectangle = new QAction(MainWindow);
        actionLoadSquareRectangle->setObjectName(QStringLiteral("actionLoadSquareRectangle"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/new/icons/imagenInte/squareSmall.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoadSquareRectangle->setIcon(icon12);
        actionLoadRegOfInteres = new QAction(MainWindow);
        actionLoadRegOfInteres->setObjectName(QStringLiteral("actionLoadRegOfInteres"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/new/icons/imagenInte/squareBig.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoadRegOfInteres->setIcon(icon13);
        actionToolPenArea = new QAction(MainWindow);
        actionToolPenArea->setObjectName(QStringLiteral("actionToolPenArea"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/imagenInte/toolSelect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionToolPenArea->setIcon(icon14);
        actionSaveCanvas = new QAction(MainWindow);
        actionSaveCanvas->setObjectName(QStringLiteral("actionSaveCanvas"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/new/icons/imagenInte/snapshot"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveCanvas->setIcon(icon15);
        actionSend_to_XYZ = new QAction(MainWindow);
        actionSend_to_XYZ->setObjectName(QStringLiteral("actionSend_to_XYZ"));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/new/icons/imagenInte/calRight.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSend_to_XYZ->setIcon(icon16);
        actionExportPixelsSelected = new QAction(MainWindow);
        actionExportPixelsSelected->setObjectName(QStringLiteral("actionExportPixelsSelected"));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/new/icons/imagenInte/add-221.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExportPixelsSelected->setIcon(icon17);
        actionGenHypercube = new QAction(MainWindow);
        actionGenHypercube->setObjectName(QStringLiteral("actionGenHypercube"));
        actionGenHypercube->setIcon(icon);
        actionValidCal = new QAction(MainWindow);
        actionValidCal->setObjectName(QStringLiteral("actionValidCal"));
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/new/icons/imagenInte/validCal.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionValidCal->setIcon(icon18);
        actionValCal = new QAction(MainWindow);
        actionValCal->setObjectName(QStringLiteral("actionValCal"));
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/new/icons/imagenInte/ojo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionValCal->setIcon(icon19);
        actionSquareUsable = new QAction(MainWindow);
        actionSquareUsable->setObjectName(QStringLiteral("actionSquareUsable"));
        QIcon icon20;
        icon20.addFile(QStringLiteral(":/new/icons/imagenInte/squareUsable.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSquareUsable->setIcon(icon20);
        actionChoseWavelength = new QAction(MainWindow);
        actionChoseWavelength->setObjectName(QStringLiteral("actionChoseWavelength"));
        QIcon icon21;
        icon21.addFile(QStringLiteral(":/new/icons/imagenInte/hypChose.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionChoseWavelength->setIcon(icon21);
        actionFittFunction = new QAction(MainWindow);
        actionFittFunction->setObjectName(QStringLiteral("actionFittFunction"));
        QIcon icon22;
        icon22.addFile(QStringLiteral(":/new/icons/imagenInte/fitt.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFittFunction->setIcon(icon22);
        actionShow_hypercube = new QAction(MainWindow);
        actionShow_hypercube->setObjectName(QStringLiteral("actionShow_hypercube"));
        QIcon icon23;
        icon23.addFile(QStringLiteral(":/new/icons/imagenInte/newProject.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShow_hypercube->setIcon(icon23);
        actionBilinear_interpolation = new QAction(MainWindow);
        actionBilinear_interpolation->setObjectName(QStringLiteral("actionBilinear_interpolation"));
        actionslideHypCam = new QAction(MainWindow);
        actionslideHypCam->setObjectName(QStringLiteral("actionslideHypCam"));
        QIcon icon24;
        icon24.addFile(QStringLiteral(":/new/icons/imagenInte/slideForm.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionslideHypCam->setIcon(icon24);
        pbDrawSlide = new QAction(MainWindow);
        pbDrawSlide->setObjectName(QStringLiteral("pbDrawSlide"));
        QIcon icon25;
        icon25.addFile(QStringLiteral(":/new/icons/imagenInte/slideArea.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbDrawSlide->setIcon(icon25);
        actionSlide_settings = new QAction(MainWindow);
        actionSlide_settings->setObjectName(QStringLiteral("actionSlide_settings"));
        QIcon icon26;
        icon26.addFile(QStringLiteral(":/new/icons/imagenInte/slideConfig.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSlide_settings->setIcon(icon26);
        actionsquareSettings = new QAction(MainWindow);
        actionsquareSettings->setObjectName(QStringLiteral("actionsquareSettings"));
        QIcon icon27;
        icon27.addFile(QStringLiteral(":/new/icons/imagenInte/document-properties.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionsquareSettings->setIcon(icon27);
        actionvideoToFrames = new QAction(MainWindow);
        actionvideoToFrames->setObjectName(QStringLiteral("actionvideoToFrames"));
        QIcon icon28;
        icon28.addFile(QStringLiteral(":/new/icons/imagenInte/videoToFrames.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionvideoToFrames->setIcon(icon28);
        actionframesToCube = new QAction(MainWindow);
        actionframesToCube->setObjectName(QStringLiteral("actionframesToCube"));
        QIcon icon29;
        icon29.addFile(QStringLiteral(":/new/icons/imagenInte/framesToCube.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionframesToCube->setIcon(icon29);
        actionNDVI = new QAction(MainWindow);
        actionNDVI->setObjectName(QStringLiteral("actionNDVI"));
        actionRGB_to_XY = new QAction(MainWindow);
        actionRGB_to_XY->setObjectName(QStringLiteral("actionRGB_to_XY"));
        actionNDVI_Algorithm = new QAction(MainWindow);
        actionNDVI_Algorithm->setObjectName(QStringLiteral("actionNDVI_Algorithm"));
        actionFull_Screen = new QAction(MainWindow);
        actionFull_Screen->setObjectName(QStringLiteral("actionFull_Screen"));
        actionDisplay_Original = new QAction(MainWindow);
        actionDisplay_Original->setObjectName(QStringLiteral("actionDisplay_Original"));
        actionFull_photo = new QAction(MainWindow);
        actionFull_photo->setObjectName(QStringLiteral("actionFull_photo"));
        QIcon icon30;
        icon30.addFile(QStringLiteral(":/new/icons/imagenInte/snapshot.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFull_photo->setIcon(icon30);
        actionDiffraction = new QAction(MainWindow);
        actionDiffraction->setObjectName(QStringLiteral("actionDiffraction"));
        QIcon icon31;
        icon31.addFile(QStringLiteral(":/new/icons/imagenInte/oneShotSnap.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDiffraction->setIcon(icon31);
        actionAperture = new QAction(MainWindow);
        actionAperture->setObjectName(QStringLiteral("actionAperture"));
        actionSlideDiffraction = new QAction(MainWindow);
        actionSlideDiffraction->setObjectName(QStringLiteral("actionSlideDiffraction"));
        QIcon icon32;
        icon32.addFile(QStringLiteral(":/new/icons/imagenInte/slideDiff.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSlideDiffraction->setIcon(icon32);
        actionVideo = new QAction(MainWindow);
        actionVideo->setObjectName(QStringLiteral("actionVideo"));
        QIcon icon33;
        icon33.addFile(QStringLiteral(":/new/icons/imagenInte/dragonplayer.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionVideo->setIcon(icon33);
        actionTimelapse = new QAction(MainWindow);
        actionTimelapse->setObjectName(QStringLiteral("actionTimelapse"));
        QIcon icon34;
        icon34.addFile(QStringLiteral(":/new/icons/imagenInte/slide.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTimelapse->setIcon(icon34);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon35;
        icon35.addFile(QStringLiteral(":/new/icons/imagenInte/download-icon.gif"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon35);
        actionComposed = new QAction(MainWindow);
        actionComposed->setObjectName(QStringLiteral("actionComposed"));
        QIcon icon36;
        icon36.addFile(QStringLiteral(":/new/icons/imagenInte/takeSquare.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionComposed->setIcon(icon36);
        actionObtain_Folder = new QAction(MainWindow);
        actionObtain_Folder->setObjectName(QStringLiteral("actionObtain_Folder"));
        actionObtain_File = new QAction(MainWindow);
        actionObtain_File->setObjectName(QStringLiteral("actionObtain_File"));
        actionSlide_Build_Hypercube = new QAction(MainWindow);
        actionSlide_Build_Hypercube->setObjectName(QStringLiteral("actionSlide_Build_Hypercube"));
        actionSlide_Build_Hypercube->setIcon(icon22);
        actionVideo_2 = new QAction(MainWindow);
        actionVideo_2->setObjectName(QStringLiteral("actionVideo_2"));
        QIcon icon37;
        icon37.addFile(QStringLiteral(":/new/icons/imagenInte/startVideo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionVideo_2->setIcon(icon37);
        actionTimelapse_2 = new QAction(MainWindow);
        actionTimelapse_2->setObjectName(QStringLiteral("actionTimelapse_2"));
        QIcon icon38;
        icon38.addFile(QStringLiteral(":/new/icons/imagenInte/timelapse.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTimelapse_2->setIcon(icon38);
        actionSnapshot = new QAction(MainWindow);
        actionSnapshot->setObjectName(QStringLiteral("actionSnapshot"));
        QIcon icon39;
        icon39.addFile(QStringLiteral(":/new/icons/imagenInte/digikam.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSnapshot->setIcon(icon39);
        actionSnapvideos = new QAction(MainWindow);
        actionSnapvideos->setObjectName(QStringLiteral("actionSnapvideos"));
        actionSnapvideos->setIcon(icon34);
        actionSynchronize = new QAction(MainWindow);
        actionSynchronize->setObjectName(QStringLiteral("actionSynchronize"));
        actionSynchronize->setIcon(icon9);
        actionAbout_this = new QAction(MainWindow);
        actionAbout_this->setObjectName(QStringLiteral("actionAbout_this"));
        actionTechnical_Support = new QAction(MainWindow);
        actionTechnical_Support->setObjectName(QStringLiteral("actionTechnical_Support"));
        actionSync_Folder = new QAction(MainWindow);
        actionSync_Folder->setObjectName(QStringLiteral("actionSync_Folder"));
        QIcon icon40;
        icon40.addFile(QStringLiteral(":/new/icons/imagenInte/folder-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSync_Folder->setIcon(icon40);
        actionFull_Video = new QAction(MainWindow);
        actionFull_Video->setObjectName(QStringLiteral("actionFull_Video"));
        actionFull_Video->setIcon(icon33);
        actionMultiImageAverage = new QAction(MainWindow);
        actionMultiImageAverage->setObjectName(QStringLiteral("actionMultiImageAverage"));
        actionMultiImageMinimum = new QAction(MainWindow);
        actionMultiImageMinimum->setObjectName(QStringLiteral("actionMultiImageMinimum"));
        actionMultiImageMaximum = new QAction(MainWindow);
        actionMultiImageMaximum->setObjectName(QStringLiteral("actionMultiImageMaximum"));
        actionSlide_Settings = new QAction(MainWindow);
        actionSlide_Settings->setObjectName(QStringLiteral("actionSlide_Settings"));
        actionSquare_Location = new QAction(MainWindow);
        actionSquare_Location->setObjectName(QStringLiteral("actionSquare_Location"));
        actionLinear_Regression = new QAction(MainWindow);
        actionLinear_Regression->setObjectName(QStringLiteral("actionLinear_Regression"));
        actionDiffraction_Origin = new QAction(MainWindow);
        actionDiffraction_Origin->setObjectName(QStringLiteral("actionDiffraction_Origin"));
        openLine = new QAction(MainWindow);
        openLine->setObjectName(QStringLiteral("openLine"));
        QIcon icon41;
        icon41.addFile(QStringLiteral(":/new/icons/imagenInte/lineOpen.png"), QSize(), QIcon::Normal, QIcon::Off);
        openLine->setIcon(icon41);
        actionSlide_Linear_Regression = new QAction(MainWindow);
        actionSlide_Linear_Regression->setObjectName(QStringLiteral("actionSlide_Linear_Regression"));
        actionarcLine = new QAction(MainWindow);
        actionarcLine->setObjectName(QStringLiteral("actionarcLine"));
        QIcon icon42;
        icon42.addFile(QStringLiteral(":/new/icons/imagenInte/bezierLine.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionarcLine->setIcon(icon42);
        actionPlot_Calculated_Line = new QAction(MainWindow);
        actionPlot_Calculated_Line->setObjectName(QStringLiteral("actionPlot_Calculated_Line"));
        actionPlot_Upper_Line_Rotation = new QAction(MainWindow);
        actionPlot_Upper_Line_Rotation->setObjectName(QStringLiteral("actionPlot_Upper_Line_Rotation"));
        actionOrigin = new QAction(MainWindow);
        actionOrigin->setObjectName(QStringLiteral("actionOrigin"));
        actionBuld_HypImg = new QAction(MainWindow);
        actionBuld_HypImg->setObjectName(QStringLiteral("actionBuld_HypImg"));
        actionMerge_Calibration = new QAction(MainWindow);
        actionMerge_Calibration->setObjectName(QStringLiteral("actionMerge_Calibration"));
        actionPlot_over_Real = new QAction(MainWindow);
        actionPlot_over_Real->setObjectName(QStringLiteral("actionPlot_over_Real"));
        actionPlot_Line_at_Wavelength = new QAction(MainWindow);
        actionPlot_Line_at_Wavelength->setObjectName(QStringLiteral("actionPlot_Line_at_Wavelength"));
        actionSlide_Calibration_File = new QAction(MainWindow);
        actionSlide_Calibration_File->setObjectName(QStringLiteral("actionSlide_Calibration_File"));
        actionMerge_into_RGB = new QAction(MainWindow);
        actionMerge_into_RGB->setObjectName(QStringLiteral("actionMerge_into_RGB"));
        actionTesting = new QAction(MainWindow);
        actionTesting->setObjectName(QStringLiteral("actionTesting"));
        actionApply_Rotation = new QAction(MainWindow);
        actionApply_Rotation->setObjectName(QStringLiteral("actionApply_Rotation"));
        actionApply_Transformation = new QAction(MainWindow);
        actionApply_Transformation->setObjectName(QStringLiteral("actionApply_Transformation"));
        actionRestore_Original = new QAction(MainWindow);
        actionRestore_Original->setObjectName(QStringLiteral("actionRestore_Original"));
        QIcon icon43;
        icon43.addFile(QStringLiteral(":/new/icons/imagenInte/add-66.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRestore_Original->setIcon(icon43);
        actionExtract_frames_2 = new QAction(MainWindow);
        actionExtract_frames_2->setObjectName(QStringLiteral("actionExtract_frames_2"));
        actionBuild_HypCube = new QAction(MainWindow);
        actionBuild_HypCube->setObjectName(QStringLiteral("actionBuild_HypCube"));
        actionSlide_Max_Wavelength = new QAction(MainWindow);
        actionSlide_Max_Wavelength->setObjectName(QStringLiteral("actionSlide_Max_Wavelength"));
        actionBuild_HypCube_2 = new QAction(MainWindow);
        actionBuild_HypCube_2->setObjectName(QStringLiteral("actionBuild_HypCube_2"));
        actionSlide_HypCube_Building = new QAction(MainWindow);
        actionSlide_HypCube_Building->setObjectName(QStringLiteral("actionSlide_HypCube_Building"));
        actionCamera_Sensitivities = new QAction(MainWindow);
        actionCamera_Sensitivities->setObjectName(QStringLiteral("actionCamera_Sensitivities"));
        actionCalc_Sensitivities = new QAction(MainWindow);
        actionCalc_Sensitivities->setObjectName(QStringLiteral("actionCalc_Sensitivities"));
        actionSlide_Min_Wavelength = new QAction(MainWindow);
        actionSlide_Min_Wavelength->setObjectName(QStringLiteral("actionSlide_Min_Wavelength"));
        actionHypCube_From_H264 = new QAction(MainWindow);
        actionHypCube_From_H264->setObjectName(QStringLiteral("actionHypCube_From_H264"));
        actionCube_Analysis = new QAction(MainWindow);
        actionCube_Analysis->setObjectName(QStringLiteral("actionCube_Analysis"));
        QIcon icon44;
        icon44.addFile(QStringLiteral(":/new/icons/imagenInte/plotSignature.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionCube_Analysis->setIcon(icon44);
        actionApply_Affine_Transformation = new QAction(MainWindow);
        actionApply_Affine_Transformation->setObjectName(QStringLiteral("actionApply_Affine_Transformation"));
        actionApply_Optical_Correction = new QAction(MainWindow);
        actionApply_Optical_Correction->setObjectName(QStringLiteral("actionApply_Optical_Correction"));
        actionExtract_ROI = new QAction(MainWindow);
        actionExtract_ROI->setObjectName(QStringLiteral("actionExtract_ROI"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pbExpPixs = new QTabWidget(centralWidget);
        pbExpPixs->setObjectName(QStringLiteral("pbExpPixs"));
        pbExpPixs->setGeometry(QRect(-1, 15, 1041, 621));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tableLstCams = new QTableWidget(tab);
        if (tableLstCams->columnCount() < 2)
            tableLstCams->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableLstCams->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableLstCams->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableLstCams->setObjectName(QStringLiteral("tableLstCams"));
        tableLstCams->setGeometry(QRect(10, 100, 321, 231));
        frame = new QFrame(tab);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 20, 321, 61));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget1 = new QWidget(frame);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 14, 275, 36));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        labelIP = new QLabel(layoutWidget1);
        labelIP->setObjectName(QStringLiteral("labelIP"));

        gridLayout->addWidget(labelIP, 0, 0, 1, 1);

        txtIp = new QLineEdit(layoutWidget1);
        txtIp->setObjectName(QStringLiteral("txtIp"));

        gridLayout->addWidget(txtIp, 0, 1, 1, 1);

        pbAddIp = new QPushButton(layoutWidget1);
        pbAddIp->setObjectName(QStringLiteral("pbAddIp"));
        QIcon icon45;
        icon45.addFile(QStringLiteral(":/new/icons/imagenInte/list-add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbAddIp->setIcon(icon45);

        gridLayout->addWidget(pbAddIp, 0, 2, 1, 1);

        pbSearchAll = new QPushButton(layoutWidget1);
        pbSearchAll->setObjectName(QStringLiteral("pbSearchAll"));
        QIcon icon46;
        icon46.addFile(QStringLiteral(":/new/icons/imagenInte/zoom-in.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbSearchAll->setIcon(icon46);

        gridLayout->addWidget(pbSearchAll, 0, 3, 1, 1);

        pbAddIp->raise();
        labelIP->raise();
        txtIp->raise();
        pbSearchAll->raise();
        frame_2 = new QFrame(tab);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(380, 20, 531, 61));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        layoutWidget2 = new QWidget(frame_2);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(9, 14, 421, 35));
        gridLayout_2 = new QGridLayout(layoutWidget2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pbSendComm = new QPushButton(layoutWidget2);
        pbSendComm->setObjectName(QStringLiteral("pbSendComm"));
        QIcon icon47;
        icon47.addFile(QStringLiteral(":/new/icons/imagenInte/gtk-media-play-ltr.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbSendComm->setIcon(icon47);
        pbSendComm->setIconSize(QSize(15, 15));

        gridLayout_2->addWidget(pbSendComm, 0, 2, 1, 1);

        checkBlind = new QCheckBox(layoutWidget2);
        checkBlind->setObjectName(QStringLiteral("checkBlind"));

        gridLayout_2->addWidget(checkBlind, 0, 4, 1, 1);

        labelCommand = new QLabel(layoutWidget2);
        labelCommand->setObjectName(QStringLiteral("labelCommand"));

        gridLayout_2->addWidget(labelCommand, 0, 0, 1, 1);

        txtCommand = new QLineEdit(layoutWidget2);
        txtCommand->setObjectName(QStringLiteral("txtCommand"));

        gridLayout_2->addWidget(txtCommand, 0, 1, 1, 1);

        pbShutdown = new QPushButton(layoutWidget2);
        pbShutdown->setObjectName(QStringLiteral("pbShutdown"));
        pbShutdown->setEnabled(true);
        QIcon icon48;
        icon48.addFile(QStringLiteral(":/new/icons/imagenInte/salir.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbShutdown->setIcon(icon48);
        pbShutdown->setIconSize(QSize(15, 15));

        gridLayout_2->addWidget(pbShutdown, 0, 3, 1, 1);

        txtCommRes = new QTextEdit(tab);
        txtCommRes->setObjectName(QStringLiteral("txtCommRes"));
        txtCommRes->setGeometry(QRect(380, 100, 531, 231));
        pbConnect = new QPushButton(tab);
        pbConnect->setObjectName(QStringLiteral("pbConnect"));
        pbConnect->setGeometry(QRect(340, 100, 31, 31));
        QIcon icon49;
        icon49.addFile(QStringLiteral(":/new/icons/imagenInte/right.gif"), QSize(), QIcon::Normal, QIcon::Off);
        pbConnect->setIcon(icon49);
        pbLANConnect = new QPushButton(tab);
        pbLANConnect->setObjectName(QStringLiteral("pbLANConnect"));
        pbLANConnect->setGeometry(QRect(340, 140, 31, 31));
        QIcon icon50;
        icon50.addFile(QStringLiteral(":/new/icons/imagenInte/WiFi.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbLANConnect->setIcon(icon50);
        pbLANTestConn = new QPushButton(tab);
        pbLANTestConn->setObjectName(QStringLiteral("pbLANTestConn"));
        pbLANTestConn->setGeometry(QRect(340, 180, 31, 31));
        QIcon icon51;
        icon51.addFile(QStringLiteral(":/new/icons/imagenInte/question.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbLANTestConn->setIcon(icon51);
        pbExpPixs->addTab(tab, QString());
        tableLstCams->raise();
        frame->raise();
        frame_2->raise();
        txtCommRes->raise();
        pbLANConnect->raise();
        pbLANTestConn->raise();
        pbConnect->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        labelVideo = new QLabel(tab_2);
        labelVideo->setObjectName(QStringLiteral("labelVideo"));
        labelVideo->setGeometry(QRect(380, 20, 391, 311));
        labelVideo->setFrameShape(QFrame::Box);
        labelVideo->setLineWidth(1);
        labelVideo->setMidLineWidth(0);
        labelVideo->setMargin(0);
        frame_3 = new QFrame(tab_2);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(10, 399, 351, 71));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        labelSquareShuterSpeed_4 = new QLabel(frame_3);
        labelSquareShuterSpeed_4->setObjectName(QStringLiteral("labelSquareShuterSpeed_4"));
        labelSquareShuterSpeed_4->setGeometry(QRect(270, 45, 21, 19));
        spinBoxTimelapse = new QSpinBox(frame_3);
        spinBoxTimelapse->setObjectName(QStringLiteral("spinBoxTimelapse"));
        spinBoxTimelapse->setGeometry(QRect(160, 41, 101, 29));
        spinBoxTimelapse->setMinimum(100);
        spinBoxTimelapse->setMaximum(5000);
        labelSquareShuterSpeed_3 = new QLabel(frame_3);
        labelSquareShuterSpeed_3->setObjectName(QStringLiteral("labelSquareShuterSpeed_3"));
        labelSquareShuterSpeed_3->setGeometry(QRect(10, 45, 151, 19));
        spinBoxTimelapseDuration = new QSpinBox(frame_3);
        spinBoxTimelapseDuration->setObjectName(QStringLiteral("spinBoxTimelapseDuration"));
        spinBoxTimelapseDuration->setGeometry(QRect(160, 5, 101, 29));
        spinBoxTimelapseDuration->setMinimum(2);
        spinBoxTimelapseDuration->setMaximum(86400);
        labelSquareShuterSpeed_6 = new QLabel(frame_3);
        labelSquareShuterSpeed_6->setObjectName(QStringLiteral("labelSquareShuterSpeed_6"));
        labelSquareShuterSpeed_6->setGeometry(QRect(10, 9, 151, 19));
        labelSquareShuterSpeed_7 = new QLabel(frame_3);
        labelSquareShuterSpeed_7->setObjectName(QStringLiteral("labelSquareShuterSpeed_7"));
        labelSquareShuterSpeed_7->setGeometry(QRect(270, 9, 41, 19));
        frame_4 = new QFrame(tab_2);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(10, 73, 351, 321));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        spinBoxVideoDuration = new QSpinBox(frame_4);
        spinBoxVideoDuration->setObjectName(QStringLiteral("spinBoxVideoDuration"));
        spinBoxVideoDuration->setGeometry(QRect(158, 250, 101, 29));
        spinBoxVideoDuration->setMinimum(2);
        spinBoxVideoDuration->setMaximum(180);
        cbAWB = new QComboBox(frame_4);
        cbAWB->setObjectName(QStringLiteral("cbAWB"));
        cbAWB->setEnabled(true);
        cbAWB->setGeometry(QRect(158, 103, 159, 29));
        labelSquareShuterSpeed = new QLabel(frame_4);
        labelSquareShuterSpeed->setObjectName(QStringLiteral("labelSquareShuterSpeed"));
        labelSquareShuterSpeed->setGeometry(QRect(10, 180, 91, 19));
        label_3 = new QLabel(frame_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(11, 107, 121, 21));
        spinBoxShuterSpeed = new QSpinBox(frame_4);
        spinBoxShuterSpeed->setObjectName(QStringLiteral("spinBoxShuterSpeed"));
        spinBoxShuterSpeed->setGeometry(QRect(158, 176, 101, 29));
        spinBoxShuterSpeed->setMaximum(3000000);
        label_2 = new QLabel(frame_4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 141, 111, 21));
        labelSquareShuterSpeed_2 = new QLabel(frame_4);
        labelSquareShuterSpeed_2->setObjectName(QStringLiteral("labelSquareShuterSpeed_2"));
        labelSquareShuterSpeed_2->setGeometry(QRect(8, 216, 151, 19));
        spinBoxSquareShuterSpeed = new QSpinBox(frame_4);
        spinBoxSquareShuterSpeed->setObjectName(QStringLiteral("spinBoxSquareShuterSpeed"));
        spinBoxSquareShuterSpeed->setGeometry(QRect(158, 212, 101, 29));
        spinBoxSquareShuterSpeed->setMaximum(3000000);
        layoutWidget3 = new QWidget(frame_4);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(9, 6, 122, 92));
        verticalLayout = new QVBoxLayout(layoutWidget3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        cbColorBalance = new QCheckBox(layoutWidget3);
        cbColorBalance->setObjectName(QStringLiteral("cbColorBalance"));

        verticalLayout->addWidget(cbColorBalance);

        cbDenoise = new QCheckBox(layoutWidget3);
        cbDenoise->setObjectName(QStringLiteral("cbDenoise"));

        verticalLayout->addWidget(cbDenoise);

        cbFlipped = new QCheckBox(layoutWidget3);
        cbFlipped->setObjectName(QStringLiteral("cbFlipped"));

        verticalLayout->addWidget(cbFlipped);

        cbExposure = new QComboBox(frame_4);
        cbExposure->setObjectName(QStringLiteral("cbExposure"));
        cbExposure->setGeometry(QRect(158, 139, 159, 29));
        groupResolution = new QGroupBox(frame_4);
        groupResolution->setObjectName(QStringLiteral("groupResolution"));
        groupResolution->setGeometry(QRect(158, 6, 131, 61));
        radioRes5Mp = new QRadioButton(groupResolution);
        radioRes5Mp->setObjectName(QStringLiteral("radioRes5Mp"));
        radioRes5Mp->setGeometry(QRect(10, 29, 51, 26));
        radioRes8Mp = new QRadioButton(groupResolution);
        radioRes8Mp->setObjectName(QStringLiteral("radioRes8Mp"));
        radioRes8Mp->setGeometry(QRect(70, 29, 51, 26));
        labelSquareShuterSpeed_5 = new QLabel(frame_4);
        labelSquareShuterSpeed_5->setObjectName(QStringLiteral("labelSquareShuterSpeed_5"));
        labelSquareShuterSpeed_5->setGeometry(QRect(8, 254, 151, 19));
        labelISO = new QLabel(frame_4);
        labelISO->setObjectName(QStringLiteral("labelISO"));
        labelISO->setGeometry(QRect(8, 280, 219, 21));
        slideISO = new QSlider(frame_4);
        slideISO->setObjectName(QStringLiteral("slideISO"));
        slideISO->setGeometry(QRect(8, 300, 331, 20));
        slideISO->setMinimum(0);
        slideISO->setMaximum(3000);
        slideISO->setOrientation(Qt::Horizontal);
        labelSquareShuterSpeed_8 = new QLabel(frame_4);
        labelSquareShuterSpeed_8->setObjectName(QStringLiteral("labelSquareShuterSpeed_8"));
        labelSquareShuterSpeed_8->setGeometry(QRect(264, 254, 41, 19));
        labelSquareShuterSpeed_9 = new QLabel(frame_4);
        labelSquareShuterSpeed_9->setObjectName(QStringLiteral("labelSquareShuterSpeed_9"));
        labelSquareShuterSpeed_9->setGeometry(QRect(264, 217, 41, 19));
        labelSquareShuterSpeed_10 = new QLabel(frame_4);
        labelSquareShuterSpeed_10->setObjectName(QStringLiteral("labelSquareShuterSpeed_10"));
        labelSquareShuterSpeed_10->setGeometry(QRect(264, 181, 41, 19));
        frame_5 = new QFrame(tab_2);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(10, 21, 351, 41));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        pbSaveImage = new QPushButton(frame_5);
        pbSaveImage->setObjectName(QStringLiteral("pbSaveImage"));
        pbSaveImage->setEnabled(true);
        pbSaveImage->setGeometry(QRect(287, 5, 31, 31));
        pbSaveImage->setIcon(icon35);
        pbSnapshot = new QPushButton(frame_5);
        pbSnapshot->setObjectName(QStringLiteral("pbSnapshot"));
        pbSnapshot->setEnabled(false);
        pbSnapshot->setGeometry(QRect(7, 5, 31, 31));
        pbSnapshot->setIcon(icon15);
        pbSnapVid = new QPushButton(frame_5);
        pbSnapVid->setObjectName(QStringLiteral("pbSnapVid"));
        pbSnapVid->setEnabled(true);
        pbSnapVid->setGeometry(QRect(127, 5, 31, 31));
        pbSnapVid->setIcon(icon33);
        pbTimeLapse = new QPushButton(frame_5);
        pbTimeLapse->setObjectName(QStringLiteral("pbTimeLapse"));
        pbTimeLapse->setEnabled(true);
        pbTimeLapse->setGeometry(QRect(167, 5, 31, 31));
        pbTimeLapse->setIcon(icon34);
        pbOneShotSnapshot = new QPushButton(frame_5);
        pbOneShotSnapshot->setObjectName(QStringLiteral("pbOneShotSnapshot"));
        pbOneShotSnapshot->setEnabled(true);
        pbOneShotSnapshot->setGeometry(QRect(47, 5, 31, 31));
        pbOneShotSnapshot->setIcon(icon31);
        pbSnapshotSquare = new QPushButton(frame_5);
        pbSnapshotSquare->setObjectName(QStringLiteral("pbSnapshotSquare"));
        pbSnapshotSquare->setEnabled(true);
        pbSnapshotSquare->setGeometry(QRect(87, 5, 31, 31));
        pbSnapshotSquare->setIcon(icon36);
        frame_6 = new QFrame(tab_2);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setGeometry(QRect(10, 521, 351, 41));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        txtCamParamXMLName = new QLineEdit(frame_6);
        txtCamParamXMLName->setObjectName(QStringLiteral("txtCamParamXMLName"));
        txtCamParamXMLName->setGeometry(QRect(3, 4, 221, 33));
        pbSaveRaspParam = new QPushButton(frame_6);
        pbSaveRaspParam->setObjectName(QStringLiteral("pbSaveRaspParam"));
        pbSaveRaspParam->setEnabled(true);
        pbSaveRaspParam->setGeometry(QRect(233, 4, 31, 31));
        QIcon icon52;
        icon52.addFile(QStringLiteral(":/new/icons/imagenInte/add-484.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbSaveRaspParam->setIcon(icon52);
        pbCopyShutter = new QPushButton(frame_6);
        pbCopyShutter->setObjectName(QStringLiteral("pbCopyShutter"));
        pbCopyShutter->setEnabled(true);
        pbCopyShutter->setGeometry(QRect(316, 4, 31, 31));
        QIcon icon53;
        icon53.addFile(QStringLiteral(":/new/icons/imagenInte/anterior.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbCopyShutter->setIcon(icon53);
        pbObtPar = new QPushButton(frame_6);
        pbObtPar->setObjectName(QStringLiteral("pbObtPar"));
        pbObtPar->setEnabled(true);
        pbObtPar->setGeometry(QRect(274, 4, 31, 31));
        frame_7 = new QFrame(tab_2);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setGeometry(QRect(10, 475, 351, 41));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        slideTriggerTime = new QSlider(frame_7);
        slideTriggerTime->setObjectName(QStringLiteral("slideTriggerTime"));
        slideTriggerTime->setGeometry(QRect(10, 22, 331, 19));
        slideTriggerTime->setMinimum(0);
        slideTriggerTime->setMaximum(500);
        slideTriggerTime->setValue(3);
        slideTriggerTime->setOrientation(Qt::Horizontal);
        slideTriggerTime->setTickInterval(1);
        labelTriggerTime = new QLabel(frame_7);
        labelTriggerTime->setObjectName(QStringLiteral("labelTriggerTime"));
        labelTriggerTime->setGeometry(QRect(10, 2, 219, 21));
        pbExpPixs->addTab(tab_2, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        pbExpPixs->addTab(tab_6, QString());
        tabShowPixels = new QWidget();
        tabShowPixels->setObjectName(QStringLiteral("tabShowPixels"));
        pbSelectFolder = new QPushButton(tabShowPixels);
        pbSelectFolder->setObjectName(QStringLiteral("pbSelectFolder"));
        pbSelectFolder->setEnabled(true);
        pbSelectFolder->setGeometry(QRect(20, 10, 31, 31));
        pbSelectFolder->setIcon(icon40);
        graphViewPlot = new QGraphicsView(tabShowPixels);
        graphViewPlot->setObjectName(QStringLiteral("graphViewPlot"));
        graphViewPlot->setGeometry(QRect(20, 110, 1000, 270));
        slideChangeImage = new QSlider(tabShowPixels);
        slideChangeImage->setObjectName(QStringLiteral("slideChangeImage"));
        slideChangeImage->setEnabled(false);
        slideChangeImage->setGeometry(QRect(20, 80, 251, 16));
        slideChangeImage->setOrientation(Qt::Horizontal);
        labelCubeImageName = new QLabel(tabShowPixels);
        labelCubeImageName->setObjectName(QStringLiteral("labelCubeImageName"));
        labelCubeImageName->setGeometry(QRect(20, 50, 251, 20));
        pbExpPixs->addTab(tabShowPixels, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        layoutWidget4 = new QWidget(tab_5);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(2, 438, 851, 71));
        gridColors = new QGridLayout(layoutWidget4);
        gridColors->setSpacing(6);
        gridColors->setContentsMargins(11, 11, 11, 11);
        gridColors->setObjectName(QStringLiteral("gridColors"));
        gridColors->setContentsMargins(0, 0, 0, 0);
        slideRedLen = new QSlider(layoutWidget4);
        slideRedLen->setObjectName(QStringLiteral("slideRedLen"));
        slideRedLen->setEnabled(false);
        slideRedLen->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"    height: 1px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #F00, stop:1 #F00);\n"
"    margin: 2px 0;\n"
"}\n"
"\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #F00, stop:1 #F00);\n"
"    border: 2px solid #F00;\n"
"    width: 18px;\n"
"    margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"    border-radius: 3px;\n"
"}"));
        slideRedLen->setOrientation(Qt::Horizontal);

        gridColors->addWidget(slideRedLen, 0, 0, 1, 1);

        slideBlueLen = new QSlider(layoutWidget4);
        slideBlueLen->setObjectName(QStringLiteral("slideBlueLen"));
        slideBlueLen->setEnabled(false);
        slideBlueLen->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"    height: 1px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #00F, stop:1 #00F);\n"
"    margin: 2px 0;\n"
"}\n"
"\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #00F, stop:1 #00F);\n"
"    border: 2px solid #00F;\n"
"    width: 18px;\n"
"    margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"    border-radius: 3px;\n"
"}"));
        slideBlueLen->setOrientation(Qt::Horizontal);

        gridColors->addWidget(slideBlueLen, 2, 0, 1, 1);

        slideGreenLen = new QSlider(layoutWidget4);
        slideGreenLen->setObjectName(QStringLiteral("slideGreenLen"));
        slideGreenLen->setEnabled(false);
        slideGreenLen->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"    height: 1px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #0F0, stop:1 #0F0);\n"
"    margin: 2px 0;\n"
"}\n"
"\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #0F0, stop:1 #0F0);\n"
"    border: 2px solid #0F0;\n"
"    width: 18px;\n"
"    margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"    border-radius: 3px;\n"
"}"));
        slideGreenLen->setOrientation(Qt::Horizontal);

        gridColors->addWidget(slideGreenLen, 1, 0, 1, 1);

        layoutWidget5 = new QWidget(tab_5);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(100, 510, 587, 36));
        gridLayout_5 = new QGridLayout(layoutWidget5);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        chbGreen = new QCheckBox(layoutWidget5);
        chbGreen->setObjectName(QStringLiteral("chbGreen"));

        gridLayout_5->addWidget(chbGreen, 0, 6, 1, 1);

        pbSpecSnapshot = new QPushButton(layoutWidget5);
        pbSpecSnapshot->setObjectName(QStringLiteral("pbSpecSnapshot"));
        pbSpecSnapshot->setEnabled(true);
        pbSpecSnapshot->setIcon(icon15);

        gridLayout_5->addWidget(pbSpecSnapshot, 0, 2, 1, 1);

        chbRed = new QCheckBox(layoutWidget5);
        chbRed->setObjectName(QStringLiteral("chbRed"));

        gridLayout_5->addWidget(chbRed, 0, 5, 1, 1);

        sbSpecUsb = new QSpinBox(layoutWidget5);
        sbSpecUsb->setObjectName(QStringLiteral("sbSpecUsb"));
        sbSpecUsb->setMaximum(9);
        sbSpecUsb->setValue(1);

        gridLayout_5->addWidget(sbSpecUsb, 0, 1, 1, 1);

        chbBlue = new QCheckBox(layoutWidget5);
        chbBlue->setObjectName(QStringLiteral("chbBlue"));

        gridLayout_5->addWidget(chbBlue, 0, 7, 1, 1);

        label_4 = new QLabel(layoutWidget5);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_5->addWidget(label_4, 0, 0, 1, 1);

        pbViewBack = new QPushButton(layoutWidget5);
        pbViewBack->setObjectName(QStringLiteral("pbViewBack"));
        pbViewBack->setEnabled(false);
        pbViewBack->setIcon(icon19);

        gridLayout_5->addWidget(pbViewBack, 0, 9, 1, 1);

        pbSnapCal = new QPushButton(layoutWidget5);
        pbSnapCal->setObjectName(QStringLiteral("pbSnapCal"));
        pbSnapCal->setEnabled(false);
        pbSnapCal->setIcon(icon39);

        gridLayout_5->addWidget(pbSnapCal, 0, 8, 1, 1);

        pbSpecCut = new QPushButton(layoutWidget5);
        pbSpecCut->setObjectName(QStringLiteral("pbSpecCut"));
        pbSpecCut->setEnabled(false);
        QIcon icon54;
        icon54.addFile(QStringLiteral(":/new/icons/imagenInte/tijeras.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbSpecCut->setIcon(icon54);

        gridLayout_5->addWidget(pbSpecCut, 0, 4, 1, 1);

        pbSpecLoadSnap = new QPushButton(layoutWidget5);
        pbSpecLoadSnap->setObjectName(QStringLiteral("pbSpecLoadSnap"));

        gridLayout_5->addWidget(pbSpecLoadSnap, 0, 3, 1, 1);

        pbExpPixs->addTab(tab_5, QString());
        progBar = new QProgressBar(centralWidget);
        progBar->setObjectName(QStringLiteral("progBar"));
        progBar->setGeometry(QRect(600, 5, 371, 16));
        progBar->setValue(0);
        labelProgBar = new QLabel(centralWidget);
        labelProgBar->setObjectName(QStringLiteral("labelProgBar"));
        labelProgBar->setGeometry(QRect(600, 20, 371, 20));
        labelProgBar->setStyleSheet(QStringLiteral(""));
        MainWindow->setCentralWidget(centralWidget);
        progBar->raise();
        pbExpPixs->raise();
        labelProgBar->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1084, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuImage = new QMenu(menuBar);
        menuImage->setObjectName(QStringLiteral("menuImage"));
        menuFilter = new QMenu(menuImage);
        menuFilter->setObjectName(QStringLiteral("menuFilter"));
        menuMultiselected = new QMenu(menuImage);
        menuMultiselected->setObjectName(QStringLiteral("menuMultiselected"));
        menuMerge = new QMenu(menuMultiselected);
        menuMerge->setObjectName(QStringLiteral("menuMerge"));
        menuAnalysis = new QMenu(menuBar);
        menuAnalysis->setObjectName(QStringLiteral("menuAnalysis"));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QStringLiteral("menuSettings"));
        menuSet = new QMenu(menuSettings);
        menuSet->setObjectName(QStringLiteral("menuSet"));
        menuCamera = new QMenu(menuBar);
        menuCamera->setObjectName(QStringLiteral("menuCamera"));
        menuDouble_Axis = new QMenu(menuCamera);
        menuDouble_Axis->setObjectName(QStringLiteral("menuDouble_Axis"));
        menuSlide = new QMenu(menuCamera);
        menuSlide->setObjectName(QStringLiteral("menuSlide"));
        menuCompute = new QMenu(menuSlide);
        menuCompute->setObjectName(QStringLiteral("menuCompute"));
        menuObtain = new QMenu(menuCamera);
        menuObtain->setObjectName(QStringLiteral("menuObtain"));
        menuSend = new QMenu(menuCamera);
        menuSend->setObjectName(QStringLiteral("menuSend"));
        menuStart = new QMenu(menuBar);
        menuStart->setObjectName(QStringLiteral("menuStart"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuMake = new QMenu(menuBar);
        menuMake->setObjectName(QStringLiteral("menuMake"));
        menuPlot = new QMenu(menuMake);
        menuPlot->setObjectName(QStringLiteral("menuPlot"));
        menuCalib_Edition = new QMenu(menuMake);
        menuCalib_Edition->setObjectName(QStringLiteral("menuCalib_Edition"));
        menuLocal = new QMenu(menuBar);
        menuLocal->setObjectName(QStringLiteral("menuLocal"));
        menuSlide_2 = new QMenu(menuLocal);
        menuSlide_2->setObjectName(QStringLiteral("menuSlide_2"));
        menuStep_by_Step = new QMenu(menuSlide_2);
        menuStep_by_Step->setObjectName(QStringLiteral("menuStep_by_Step"));
        MainWindow->setMenuBar(menuBar);
        toolBarDraw = new QToolBar(MainWindow);
        toolBarDraw->setObjectName(QStringLiteral("toolBarDraw"));
        toolBarDraw->setMovable(false);
        MainWindow->addToolBar(Qt::LeftToolBarArea, toolBarDraw);
        mainToolbar = new QToolBar(MainWindow);
        mainToolbar->setObjectName(QStringLiteral("mainToolbar"));
        mainToolbar->setMovable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolbar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuImage->menuAction());
        menuBar->addAction(menuAnalysis->menuAction());
        menuBar->addAction(menuMake->menuAction());
        menuBar->addAction(menuSettings->menuAction());
        menuBar->addAction(menuCamera->menuAction());
        menuBar->addAction(menuLocal->menuAction());
        menuBar->addAction(menuStart->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionExit);
        menuImage->addAction(menuFilter->menuAction());
        menuImage->addAction(menuMultiselected->menuAction());
        menuImage->addAction(actionMerge_into_RGB);
        menuFilter->addAction(actionBilinear_interpolation);
        menuMultiselected->addAction(menuMerge->menuAction());
        menuMerge->addAction(actionMultiImageAverage);
        menuMerge->addAction(actionMultiImageMinimum);
        menuMerge->addAction(actionMultiImageMaximum);
        menuAnalysis->addAction(actionNDVI);
        menuAnalysis->addAction(actionRGB_to_XY);
        menuAnalysis->addAction(actionFull_Screen);
        menuAnalysis->addAction(actionDisplay_Original);
        menuSettings->addAction(actionNDVI_Algorithm);
        menuSettings->addAction(actionSync_Folder);
        menuSettings->addAction(menuSet->menuAction());
        menuSet->addAction(actionDiffraction_Origin);
        menuSet->addAction(actionSlide_Calibration_File);
        menuSet->addAction(actionSlide_Max_Wavelength);
        menuSet->addAction(actionSlide_Min_Wavelength);
        menuSet->addAction(actionSlide_HypCube_Building);
        menuCamera->addAction(actionFull_photo);
        menuCamera->addAction(menuDouble_Axis->menuAction());
        menuCamera->addAction(menuSlide->menuAction());
        menuCamera->addAction(actionVideo);
        menuCamera->addAction(menuObtain->menuAction());
        menuCamera->addAction(menuSend->menuAction());
        menuCamera->addSeparator();
        menuCamera->addAction(actionSave);
        menuDouble_Axis->addAction(actionDiffraction);
        menuDouble_Axis->addAction(actionAperture);
        menuDouble_Axis->addAction(actionComposed);
        menuSlide->addAction(actionSlideDiffraction);
        menuSlide->addAction(actionTimelapse);
        menuSlide->addAction(actionSlide_Build_Hypercube);
        menuSlide->addAction(actionFull_Video);
        menuSlide->addSeparator();
        menuSlide->addAction(menuCompute->menuAction());
        menuSlide->addSeparator();
        menuCompute->addAction(actionBuld_HypImg);
        menuObtain->addSeparator();
        menuObtain->addSeparator();
        menuObtain->addAction(actionObtain_Folder);
        menuObtain->addAction(actionObtain_File);
        menuSend->addAction(actionSlide_Settings);
        menuSend->addAction(actionSquare_Location);
        menuStart->addAction(actionVideo_2);
        menuStart->addAction(actionTimelapse_2);
        menuStart->addAction(actionSnapshot);
        menuStart->addAction(actionSnapvideos);
        menuStart->addSeparator();
        menuStart->addAction(actionSynchronize);
        menuStart->addAction(actionTesting);
        menuHelp->addAction(actionAbout_this);
        menuHelp->addAction(actionTechnical_Support);
        menuMake->addAction(actionLinear_Regression);
        menuMake->addSeparator();
        menuMake->addAction(actionSlide_Linear_Regression);
        menuMake->addAction(actionMerge_Calibration);
        menuMake->addAction(actionCalc_Sensitivities);
        menuMake->addSeparator();
        menuMake->addAction(menuPlot->menuAction());
        menuMake->addSeparator();
        menuMake->addAction(actionPlot_over_Real);
        menuMake->addAction(actionPlot_Line_at_Wavelength);
        menuMake->addSeparator();
        menuMake->addAction(menuCalib_Edition->menuAction());
        menuMake->addSeparator();
        menuPlot->addAction(actionPlot_Upper_Line_Rotation);
        menuPlot->addAction(actionPlot_Calculated_Line);
        menuPlot->addAction(actionOrigin);
        menuCalib_Edition->addAction(actionApply_Rotation);
        menuCalib_Edition->addAction(actionApply_Transformation);
        menuCalib_Edition->addAction(actionApply_Affine_Transformation);
        menuCalib_Edition->addAction(actionApply_Optical_Correction);
        menuLocal->addAction(menuSlide_2->menuAction());
        menuSlide_2->addAction(menuStep_by_Step->menuAction());
        menuSlide_2->addAction(actionHypCube_From_H264);
        menuStep_by_Step->addAction(actionExtract_frames_2);
        menuStep_by_Step->addAction(actionExtract_ROI);
        menuStep_by_Step->addAction(actionBuild_HypCube);
        menuStep_by_Step->addAction(actionBuild_HypCube_2);
        toolBarDraw->addAction(actionSelection);
        toolBarDraw->addSeparator();
        toolBarDraw->addAction(actionRestore_Original);
        toolBarDraw->addAction(actionRect);
        toolBarDraw->addAction(actionHorizontalLine);
        toolBarDraw->addAction(actionVerticalLine);
        toolBarDraw->addAction(openLine);
        toolBarDraw->addAction(actionToolPenArea);
        toolBarDraw->addAction(actionarcLine);
        toolBarDraw->addAction(actionRotateImg);
        toolBarDraw->addAction(actionApplyThreshold);
        toolBarDraw->addAction(actionLoadRegOfInteres);
        toolBarDraw->addAction(actionLoadSquareRectangle);
        toolBarDraw->addAction(actionSquareUsable);
        toolBarDraw->addAction(pbDrawSlide);
        toolBarDraw->addAction(actionSend_to_XYZ);
        toolBarDraw->addAction(actionSaveCanvas);
        toolBarDraw->addAction(actionExportPixelsSelected);
        toolBarDraw->addSeparator();
        toolBarDraw->addAction(actionClear);
        mainToolbar->addAction(actionLoadCanvas);
        mainToolbar->addAction(actionDrawToolbar);
        mainToolbar->addAction(actionDoubAxisDiff);
        mainToolbar->addAction(actionValCal);
        mainToolbar->addAction(actionFittFunction);
        mainToolbar->addAction(actionShow_hypercube);
        mainToolbar->addAction(actionChoseWavelength);
        mainToolbar->addAction(actionGenHypercube);
        mainToolbar->addAction(actionsquareSettings);
        mainToolbar->addAction(actionvideoToFrames);
        mainToolbar->addAction(actionframesToCube);
        mainToolbar->addAction(actionCube_Analysis);

        retranslateUi(MainWindow);

        pbExpPixs->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Hyperspectral Image Sensor (Beta 0.1)", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        actionRect->setText(QApplication::translate("MainWindow", "Rect", nullptr));
#ifndef QT_NO_TOOLTIP
        actionRect->setToolTip(QApplication::translate("MainWindow", "Add rectangle", nullptr));
#endif // QT_NO_TOOLTIP
        actionCircle->setText(QApplication::translate("MainWindow", "Circle", nullptr));
#ifndef QT_NO_TOOLTIP
        actionCircle->setToolTip(QApplication::translate("MainWindow", "Add circle", nullptr));
#endif // QT_NO_TOOLTIP
        actionHorizontalLine->setText(QApplication::translate("MainWindow", "HorizontalLine", nullptr));
#ifndef QT_NO_TOOLTIP
        actionHorizontalLine->setToolTip(QApplication::translate("MainWindow", "Add horizontal line", nullptr));
#endif // QT_NO_TOOLTIP
        actionVerticalLine->setText(QApplication::translate("MainWindow", "VerticalLine", nullptr));
#ifndef QT_NO_TOOLTIP
        actionVerticalLine->setToolTip(QApplication::translate("MainWindow", "Add vertical line", nullptr));
#endif // QT_NO_TOOLTIP
        actionClear->setText(QApplication::translate("MainWindow", "Clear", nullptr));
#ifndef QT_NO_TOOLTIP
        actionClear->setToolTip(QApplication::translate("MainWindow", "Clear scene", nullptr));
#endif // QT_NO_TOOLTIP
        actionSelection->setText(QApplication::translate("MainWindow", "Selection", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSelection->setToolTip(QApplication::translate("MainWindow", "Selection", nullptr));
#endif // QT_NO_TOOLTIP
        actionDrawToolbar->setText(QApplication::translate("MainWindow", "DrawToolbar", nullptr));
#ifndef QT_NO_TOOLTIP
        actionDrawToolbar->setToolTip(QApplication::translate("MainWindow", "Draw toolbar", nullptr));
#endif // QT_NO_TOOLTIP
        actionDoubAxisDiff->setText(QApplication::translate("MainWindow", "DoubAxisDiff", nullptr));
#ifndef QT_NO_TOOLTIP
        actionDoubAxisDiff->setToolTip(QApplication::translate("MainWindow", "Generate calibration .XML", nullptr));
#endif // QT_NO_TOOLTIP
        actionRotateImg->setText(QApplication::translate("MainWindow", "rotateImg", nullptr));
#ifndef QT_NO_TOOLTIP
        actionRotateImg->setToolTip(QApplication::translate("MainWindow", "Rotate the image", nullptr));
#endif // QT_NO_TOOLTIP
        actionLoadCanvas->setText(QApplication::translate("MainWindow", "loadCanvas", nullptr));
#ifndef QT_NO_TOOLTIP
        actionLoadCanvas->setToolTip(QApplication::translate("MainWindow", "Load canvas", nullptr));
#endif // QT_NO_TOOLTIP
        actionApplyThreshold->setText(QApplication::translate("MainWindow", "applyThreshold", nullptr));
#ifndef QT_NO_TOOLTIP
        actionApplyThreshold->setToolTip(QApplication::translate("MainWindow", "Apply threshold", nullptr));
#endif // QT_NO_TOOLTIP
        actionLoadSquareRectangle->setText(QApplication::translate("MainWindow", "loadSquareRectangle", nullptr));
#ifndef QT_NO_TOOLTIP
        actionLoadSquareRectangle->setToolTip(QApplication::translate("MainWindow", "Load square aperture rectangle", nullptr));
#endif // QT_NO_TOOLTIP
        actionLoadRegOfInteres->setText(QApplication::translate("MainWindow", "loadRegOfInteres", nullptr));
#ifndef QT_NO_TOOLTIP
        actionLoadRegOfInteres->setToolTip(QApplication::translate("MainWindow", "Load region of interes rectangle", nullptr));
#endif // QT_NO_TOOLTIP
        actionToolPenArea->setText(QApplication::translate("MainWindow", "toolPenArea", nullptr));
#ifndef QT_NO_TOOLTIP
        actionToolPenArea->setToolTip(QApplication::translate("MainWindow", "Pen selection tool", nullptr));
#endif // QT_NO_TOOLTIP
        actionSaveCanvas->setText(QApplication::translate("MainWindow", "SaveCanvas", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSaveCanvas->setToolTip(QApplication::translate("MainWindow", "Save canvas", nullptr));
#endif // QT_NO_TOOLTIP
        actionSend_to_XYZ->setText(QApplication::translate("MainWindow", "Send to XYZ", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSend_to_XYZ->setToolTip(QApplication::translate("MainWindow", "Send to XYZ", nullptr));
#endif // QT_NO_TOOLTIP
        actionExportPixelsSelected->setText(QApplication::translate("MainWindow", "ExportPixelsSelected", nullptr));
#ifndef QT_NO_TOOLTIP
        actionExportPixelsSelected->setToolTip(QApplication::translate("MainWindow", "Export pixels selected", nullptr));
#endif // QT_NO_TOOLTIP
        actionGenHypercube->setText(QApplication::translate("MainWindow", "genHypercube", nullptr));
#ifndef QT_NO_TOOLTIP
        actionGenHypercube->setToolTip(QApplication::translate("MainWindow", "Generate hypercube", nullptr));
#endif // QT_NO_TOOLTIP
        actionValidCal->setText(QApplication::translate("MainWindow", "validCal", nullptr));
#ifndef QT_NO_TOOLTIP
        actionValidCal->setToolTip(QApplication::translate("MainWindow", "Validate calibration", nullptr));
#endif // QT_NO_TOOLTIP
        actionValCal->setText(QApplication::translate("MainWindow", "valCal", nullptr));
#ifndef QT_NO_TOOLTIP
        actionValCal->setToolTip(QApplication::translate("MainWindow", "Check calibration points and lines", nullptr));
#endif // QT_NO_TOOLTIP
        actionSquareUsable->setText(QApplication::translate("MainWindow", "squareUsable", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSquareUsable->setToolTip(QApplication::translate("MainWindow", "Select square aperture usable", nullptr));
#endif // QT_NO_TOOLTIP
        actionChoseWavelength->setText(QApplication::translate("MainWindow", "choseWavelength", nullptr));
#ifndef QT_NO_TOOLTIP
        actionChoseWavelength->setToolTip(QApplication::translate("MainWindow", "Chose wavelengths to extract", nullptr));
#endif // QT_NO_TOOLTIP
        actionFittFunction->setText(QApplication::translate("MainWindow", "FittFunction", nullptr));
#ifndef QT_NO_TOOLTIP
        actionFittFunction->setToolTip(QApplication::translate("MainWindow", "Select an image and fits its line", nullptr));
#endif // QT_NO_TOOLTIP
        actionShow_hypercube->setText(QApplication::translate("MainWindow", "Show hypercube", nullptr));
#ifndef QT_NO_TOOLTIP
        actionShow_hypercube->setToolTip(QApplication::translate("MainWindow", "Show hypercube", nullptr));
#endif // QT_NO_TOOLTIP
        actionBilinear_interpolation->setText(QApplication::translate("MainWindow", "Bilinear interpolation", nullptr));
        actionslideHypCam->setText(QApplication::translate("MainWindow", "slideHypCam", nullptr));
#ifndef QT_NO_TOOLTIP
        actionslideHypCam->setToolTip(QApplication::translate("MainWindow", "Open Slide HypCam", nullptr));
#endif // QT_NO_TOOLTIP
        pbDrawSlide->setText(QApplication::translate("MainWindow", "Draw slide area", nullptr));
#ifndef QT_NO_TOOLTIP
        pbDrawSlide->setToolTip(QApplication::translate("MainWindow", "Draw slide area", nullptr));
#endif // QT_NO_TOOLTIP
        actionSlide_settings->setText(QApplication::translate("MainWindow", "Slide settings", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSlide_settings->setToolTip(QApplication::translate("MainWindow", "Slide settings", nullptr));
#endif // QT_NO_TOOLTIP
        actionsquareSettings->setText(QApplication::translate("MainWindow", "squareSettings", nullptr));
#ifndef QT_NO_TOOLTIP
        actionsquareSettings->setToolTip(QApplication::translate("MainWindow", "Square Settings", nullptr));
#endif // QT_NO_TOOLTIP
        actionvideoToFrames->setText(QApplication::translate("MainWindow", "videoToFrames", nullptr));
#ifndef QT_NO_TOOLTIP
        actionvideoToFrames->setToolTip(QApplication::translate("MainWindow", "Video to Frames", nullptr));
#endif // QT_NO_TOOLTIP
        actionframesToCube->setText(QApplication::translate("MainWindow", "framesToCube", nullptr));
#ifndef QT_NO_TOOLTIP
        actionframesToCube->setToolTip(QApplication::translate("MainWindow", "Frames to Cuve", nullptr));
#endif // QT_NO_TOOLTIP
        actionNDVI->setText(QApplication::translate("MainWindow", "NDVI", nullptr));
        actionRGB_to_XY->setText(QApplication::translate("MainWindow", "RGB to XY", nullptr));
        actionNDVI_Algorithm->setText(QApplication::translate("MainWindow", "NDVI Algorithm", nullptr));
        actionFull_Screen->setText(QApplication::translate("MainWindow", "Full Screen", nullptr));
        actionDisplay_Original->setText(QApplication::translate("MainWindow", "Display Original", nullptr));
        actionFull_photo->setText(QApplication::translate("MainWindow", "Full photo", nullptr));
#ifndef QT_NO_SHORTCUT
        actionFull_photo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+F", nullptr));
#endif // QT_NO_SHORTCUT
        actionDiffraction->setText(QApplication::translate("MainWindow", "Diffraction", nullptr));
#ifndef QT_NO_SHORTCUT
        actionDiffraction->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+D", nullptr));
#endif // QT_NO_SHORTCUT
        actionAperture->setText(QApplication::translate("MainWindow", "Aperture", nullptr));
        actionSlideDiffraction->setText(QApplication::translate("MainWindow", "SlideDiffraction", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSlideDiffraction->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+Y", nullptr));
#endif // QT_NO_SHORTCUT
        actionVideo->setText(QApplication::translate("MainWindow", "Video", nullptr));
#ifndef QT_NO_SHORTCUT
        actionVideo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+V", nullptr));
#endif // QT_NO_SHORTCUT
        actionTimelapse->setText(QApplication::translate("MainWindow", "Timelapse", nullptr));
#ifndef QT_NO_SHORTCUT
        actionTimelapse->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+T", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionComposed->setText(QApplication::translate("MainWindow", "Composed", nullptr));
#ifndef QT_NO_SHORTCUT
        actionComposed->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+X", nullptr));
#endif // QT_NO_SHORTCUT
        actionObtain_Folder->setText(QApplication::translate("MainWindow", "Obtain Folder", nullptr));
        actionObtain_File->setText(QApplication::translate("MainWindow", "Obtain File", nullptr));
        actionSlide_Build_Hypercube->setText(QApplication::translate("MainWindow", "HypImg Simulator", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSlide_Build_Hypercube->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+B", nullptr));
#endif // QT_NO_SHORTCUT
        actionVideo_2->setText(QApplication::translate("MainWindow", "Video", nullptr));
#ifndef QT_NO_TOOLTIP
        actionVideo_2->setToolTip(QApplication::translate("MainWindow", "Start Remote Video", nullptr));
#endif // QT_NO_TOOLTIP
        actionTimelapse_2->setText(QApplication::translate("MainWindow", "Timelapse", nullptr));
        actionSnapshot->setText(QApplication::translate("MainWindow", "Snapshot", nullptr));
        actionSnapvideos->setText(QApplication::translate("MainWindow", "Snapvideos", nullptr));
        actionSynchronize->setText(QApplication::translate("MainWindow", "Synchronize", nullptr));
        actionAbout_this->setText(QApplication::translate("MainWindow", "About HypCam Beta 1.0", nullptr));
        actionTechnical_Support->setText(QApplication::translate("MainWindow", "Technical Support", nullptr));
        actionSync_Folder->setText(QApplication::translate("MainWindow", "Sync Folder", nullptr));
        actionFull_Video->setText(QApplication::translate("MainWindow", "Full Video", nullptr));
        actionMultiImageAverage->setText(QApplication::translate("MainWindow", "Average", nullptr));
        actionMultiImageMinimum->setText(QApplication::translate("MainWindow", "Minimum", nullptr));
        actionMultiImageMaximum->setText(QApplication::translate("MainWindow", "Maximum", nullptr));
        actionSlide_Settings->setText(QApplication::translate("MainWindow", "Slide Location", nullptr));
        actionSquare_Location->setText(QApplication::translate("MainWindow", "Square Location", nullptr));
        actionLinear_Regression->setText(QApplication::translate("MainWindow", "Spectrometer Linear Regression", nullptr));
        actionDiffraction_Origin->setText(QApplication::translate("MainWindow", "Diffraction Origin", nullptr));
        openLine->setText(QApplication::translate("MainWindow", "Open Line", nullptr));
#ifndef QT_NO_TOOLTIP
        openLine->setToolTip(QApplication::translate("MainWindow", "Open Line", nullptr));
#endif // QT_NO_TOOLTIP
        actionSlide_Linear_Regression->setText(QApplication::translate("MainWindow", "Slide Linear Regression", nullptr));
        actionarcLine->setText(QApplication::translate("MainWindow", "arcLine", nullptr));
#ifndef QT_NO_TOOLTIP
        actionarcLine->setToolTip(QApplication::translate("MainWindow", "arcLine", nullptr));
#endif // QT_NO_TOOLTIP
        actionPlot_Calculated_Line->setText(QApplication::translate("MainWindow", "Horizontal", nullptr));
        actionPlot_Upper_Line_Rotation->setText(QApplication::translate("MainWindow", "Vertical", nullptr));
        actionOrigin->setText(QApplication::translate("MainWindow", "Origin", nullptr));
        actionBuld_HypImg->setText(QApplication::translate("MainWindow", "Extract HypImg", nullptr));
        actionMerge_Calibration->setText(QApplication::translate("MainWindow", "Merge Slide Calibration", nullptr));
        actionPlot_over_Real->setText(QApplication::translate("MainWindow", "Plot over Real", nullptr));
        actionPlot_Line_at_Wavelength->setText(QApplication::translate("MainWindow", "Plot Line at Wavelength", nullptr));
        actionSlide_Calibration_File->setText(QApplication::translate("MainWindow", "Slide Calibration File", nullptr));
        actionMerge_into_RGB->setText(QApplication::translate("MainWindow", "Merge into RGB", nullptr));
        actionTesting->setText(QApplication::translate("MainWindow", "Testing", nullptr));
        actionApply_Rotation->setText(QApplication::translate("MainWindow", "Apply Rotation", nullptr));
        actionApply_Transformation->setText(QApplication::translate("MainWindow", "Apply Transformation", nullptr));
        actionRestore_Original->setText(QApplication::translate("MainWindow", "Restore Original", nullptr));
#ifndef QT_NO_TOOLTIP
        actionRestore_Original->setToolTip(QApplication::translate("MainWindow", "Restore Original", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionRestore_Original->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_NO_SHORTCUT
        actionExtract_frames_2->setText(QApplication::translate("MainWindow", "Extract frames", nullptr));
        actionBuild_HypCube->setText(QApplication::translate("MainWindow", "Optical Correction", nullptr));
        actionSlide_Max_Wavelength->setText(QApplication::translate("MainWindow", "Slide Max Wavelength", nullptr));
        actionBuild_HypCube_2->setText(QApplication::translate("MainWindow", "Build HypCube", nullptr));
        actionSlide_HypCube_Building->setText(QApplication::translate("MainWindow", "Slide HypCube Building", nullptr));
        actionCamera_Sensitivities->setText(QApplication::translate("MainWindow", "Camera Sensitivities", nullptr));
        actionCalc_Sensitivities->setText(QApplication::translate("MainWindow", "Calc Sensitivities", nullptr));
        actionSlide_Min_Wavelength->setText(QApplication::translate("MainWindow", "Slide Min Wavelength", nullptr));
        actionHypCube_From_H264->setText(QApplication::translate("MainWindow", "HypCube From H264", nullptr));
        actionCube_Analysis->setText(QApplication::translate("MainWindow", "Cube Analysis", nullptr));
        actionApply_Affine_Transformation->setText(QApplication::translate("MainWindow", "Apply Affine Transformation", nullptr));
        actionApply_Optical_Correction->setText(QApplication::translate("MainWindow", "Apply Optical Correction", nullptr));
        actionExtract_ROI->setText(QApplication::translate("MainWindow", "Extract ROI", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableLstCams->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Camera", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableLstCams->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "IP", nullptr));
        labelIP->setText(QApplication::translate("MainWindow", "IP", nullptr));
        txtIp->setInputMask(QApplication::translate("MainWindow", "999.999.999.999", nullptr));
        txtIp->setText(QApplication::translate("MainWindow", "192.168.1.68", nullptr));
#ifndef QT_NO_TOOLTIP
        pbAddIp->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Ping to IP typed</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pbAddIp->setText(QString());
#ifndef QT_NO_TOOLTIP
        pbSearchAll->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Search and add all cameras in the network</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pbSearchAll->setText(QString());
#ifndef QT_NO_TOOLTIP
        pbSendComm->setToolTip(QApplication::translate("MainWindow", "Send command", nullptr));
#endif // QT_NO_TOOLTIP
        pbSendComm->setText(QString());
        checkBlind->setText(QApplication::translate("MainWindow", "blind", nullptr));
        labelCommand->setText(QApplication::translate("MainWindow", "Command", nullptr));
        txtCommand->setText(QString());
#ifndef QT_NO_TOOLTIP
        pbShutdown->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Shutdown remote camera</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pbShutdown->setText(QString());
#ifndef QT_NO_TOOLTIP
        pbConnect->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Connect</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pbConnect->setText(QString());
#ifndef QT_NO_TOOLTIP
        pbLANConnect->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Connect</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pbLANConnect->setText(QString());
#ifndef QT_NO_TOOLTIP
        pbLANTestConn->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Connect</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pbLANTestConn->setText(QString());
        pbExpPixs->setTabText(pbExpPixs->indexOf(tab), QApplication::translate("MainWindow", "Cameras", nullptr));
        labelVideo->setText(QString());
#ifndef QT_NO_TOOLTIP
        labelSquareShuterSpeed_4->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>milliseconds</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        labelSquareShuterSpeed_4->setText(QApplication::translate("MainWindow", "ms", nullptr));
        labelSquareShuterSpeed_3->setText(QApplication::translate("MainWindow", "Timelapse interval", nullptr));
        labelSquareShuterSpeed_6->setText(QApplication::translate("MainWindow", "Timelapse duration", nullptr));
#ifndef QT_NO_TOOLTIP
        labelSquareShuterSpeed_7->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Seconds</p><p><br/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        labelSquareShuterSpeed_7->setText(QApplication::translate("MainWindow", "secs", nullptr));
        labelSquareShuterSpeed->setText(QApplication::translate("MainWindow", "Shuter Speed", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "AWB mode", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Exposure mode", nullptr));
        labelSquareShuterSpeed_2->setText(QApplication::translate("MainWindow", "Square Shuter Speed", nullptr));
        cbColorBalance->setText(QApplication::translate("MainWindow", "Color balance", nullptr));
        cbDenoise->setText(QApplication::translate("MainWindow", "Denoise", nullptr));
        cbFlipped->setText(QApplication::translate("MainWindow", "Vertical Flip", nullptr));
        groupResolution->setTitle(QApplication::translate("MainWindow", "Camera Resolution", nullptr));
#ifndef QT_NO_TOOLTIP
        radioRes5Mp->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Megapixels</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        radioRes5Mp->setText(QApplication::translate("MainWindow", "5Mp", nullptr));
#ifndef QT_NO_TOOLTIP
        radioRes8Mp->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Megapixels</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        radioRes8Mp->setText(QApplication::translate("MainWindow", "8Mp", nullptr));
        labelSquareShuterSpeed_5->setText(QApplication::translate("MainWindow", "Video Duration", nullptr));
        labelISO->setText(QApplication::translate("MainWindow", "ISO", nullptr));
#ifndef QT_NO_TOOLTIP
        labelSquareShuterSpeed_8->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Seconds</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        labelSquareShuterSpeed_8->setText(QApplication::translate("MainWindow", "secs", nullptr));
#ifndef QT_NO_TOOLTIP
        labelSquareShuterSpeed_9->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Microseconds</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        labelSquareShuterSpeed_9->setText(QApplication::translate("MainWindow", "Ms", nullptr));
#ifndef QT_NO_TOOLTIP
        labelSquareShuterSpeed_10->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Microseconds</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        labelSquareShuterSpeed_10->setText(QApplication::translate("MainWindow", "Ms", nullptr));
#ifndef QT_NO_TOOLTIP
        pbSaveImage->setToolTip(QApplication::translate("MainWindow", "Save Snapshot", nullptr));
#endif // QT_NO_TOOLTIP
        pbSaveImage->setText(QString());
#ifndef QT_NO_TOOLTIP
        pbSnapshot->setToolTip(QApplication::translate("MainWindow", "One Shot", nullptr));
#endif // QT_NO_TOOLTIP
        pbSnapshot->setText(QString());
#ifndef QT_NO_TOOLTIP
        pbSnapVid->setToolTip(QApplication::translate("MainWindow", "Record Video", nullptr));
#endif // QT_NO_TOOLTIP
        pbSnapVid->setText(QString());
#ifndef QT_NO_TOOLTIP
        pbTimeLapse->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Timelapse</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pbTimeLapse->setText(QString());
#ifndef QT_NO_TOOLTIP
        pbOneShotSnapshot->setToolTip(QApplication::translate("MainWindow", "Take One-Shot Snapshot", nullptr));
#endif // QT_NO_TOOLTIP
        pbOneShotSnapshot->setText(QString());
#ifndef QT_NO_TOOLTIP
        pbSnapshotSquare->setToolTip(QApplication::translate("MainWindow", "Take Square", nullptr));
#endif // QT_NO_TOOLTIP
        pbSnapshotSquare->setText(QString());
#ifndef QT_NO_TOOLTIP
        pbSaveRaspParam->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Save parameters into XML</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pbSaveRaspParam->setText(QString());
#ifndef QT_NO_TOOLTIP
        pbCopyShutter->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Load last snap-settings</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pbCopyShutter->setText(QString());
#ifndef QT_NO_TOOLTIP
        pbObtPar->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Obtain parameters from XML</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pbObtPar->setText(QApplication::translate("MainWindow", "...", nullptr));
        labelTriggerTime->setText(QApplication::translate("MainWindow", "Triggering time", nullptr));
        pbExpPixs->setTabText(pbExpPixs->indexOf(tab_2), QApplication::translate("MainWindow", "Streaming", nullptr));
        pbExpPixs->setTabText(pbExpPixs->indexOf(tab_6), QApplication::translate("MainWindow", "Graphic tools", nullptr));
#ifndef QT_NO_TOOLTIP
        pbSelectFolder->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Select Directory</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pbSelectFolder->setText(QString());
        labelCubeImageName->setText(QApplication::translate("MainWindow", "Image name", nullptr));
        pbExpPixs->setTabText(pbExpPixs->indexOf(tabShowPixels), QApplication::translate("MainWindow", "Pixels", nullptr));
#ifndef QT_NO_TOOLTIP
        slideRedLen->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>611.3</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        slideBlueLen->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>435.7</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        slideGreenLen->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>546.1</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        chbGreen->setText(QApplication::translate("MainWindow", "Green", nullptr));
#ifndef QT_NO_TOOLTIP
        pbSpecSnapshot->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Take snapshot</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pbSpecSnapshot->setText(QString());
        chbRed->setText(QApplication::translate("MainWindow", "Red", nullptr));
        chbBlue->setText(QApplication::translate("MainWindow", "Blue", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "USB", nullptr));
#ifndef QT_NO_TOOLTIP
        pbViewBack->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Hide background</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pbViewBack->setText(QString());
#ifndef QT_NO_TOOLTIP
        pbSnapCal->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Meassure</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pbSnapCal->setText(QString());
#ifndef QT_NO_TOOLTIP
        pbSpecCut->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Cut selected area</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pbSpecCut->setText(QString());
        pbSpecLoadSnap->setText(QApplication::translate("MainWindow", "...", nullptr));
        pbExpPixs->setTabText(pbExpPixs->indexOf(tab_5), QApplication::translate("MainWindow", "Spectrometer", nullptr));
        labelProgBar->setText(QString());
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuImage->setTitle(QApplication::translate("MainWindow", "Image", nullptr));
        menuFilter->setTitle(QApplication::translate("MainWindow", "Filter", nullptr));
        menuMultiselected->setTitle(QApplication::translate("MainWindow", "Multiselected", nullptr));
        menuMerge->setTitle(QApplication::translate("MainWindow", "Merge", nullptr));
        menuAnalysis->setTitle(QApplication::translate("MainWindow", "Analysis", nullptr));
        menuSettings->setTitle(QApplication::translate("MainWindow", "Settings", nullptr));
        menuSet->setTitle(QApplication::translate("MainWindow", "Set", nullptr));
        menuCamera->setTitle(QApplication::translate("MainWindow", "Camera", nullptr));
        menuDouble_Axis->setTitle(QApplication::translate("MainWindow", "Double Axis", nullptr));
        menuSlide->setTitle(QApplication::translate("MainWindow", "Slide", nullptr));
        menuCompute->setTitle(QApplication::translate("MainWindow", "Compute", nullptr));
        menuObtain->setTitle(QApplication::translate("MainWindow", "Obtain", nullptr));
        menuSend->setTitle(QApplication::translate("MainWindow", "Send", nullptr));
        menuStart->setTitle(QApplication::translate("MainWindow", "Start Remote", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
        menuMake->setTitle(QApplication::translate("MainWindow", "One Axis LR", nullptr));
        menuPlot->setTitle(QApplication::translate("MainWindow", "Plot", nullptr));
        menuCalib_Edition->setTitle(QApplication::translate("MainWindow", "Calib Edition", nullptr));
        menuLocal->setTitle(QApplication::translate("MainWindow", "Local", nullptr));
        menuSlide_2->setTitle(QApplication::translate("MainWindow", "Slide", nullptr));
        menuStep_by_Step->setTitle(QApplication::translate("MainWindow", "Step by Step", nullptr));
        toolBarDraw->setWindowTitle(QApplication::translate("MainWindow", "Draw toolbar", nullptr));
        mainToolbar->setWindowTitle(QApplication::translate("MainWindow", "Main toolbar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
