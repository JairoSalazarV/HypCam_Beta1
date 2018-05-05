/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../QtHypCam/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[396];
    char stringdata0[7212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 12), // "funcAddPoint"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 12), // "QMouseEvent*"
QT_MOC_LITERAL(4, 38, 1), // "e"
QT_MOC_LITERAL(5, 40, 13), // "addRect2Calib"
QT_MOC_LITERAL(6, 54, 7), // "colSeld"
QT_MOC_LITERAL(7, 62, 15), // "addCircle2Calib"
QT_MOC_LITERAL(8, 78, 16), // "addHorLine2Calib"
QT_MOC_LITERAL(9, 95, 17), // "addVertLine2Calib"
QT_MOC_LITERAL(10, 113, 8), // "getCamMP"
QT_MOC_LITERAL(11, 122, 17), // "getCameraSelected"
QT_MOC_LITERAL(12, 140, 18), // "structCamSelected*"
QT_MOC_LITERAL(13, 159, 20), // "funcGetSLIDESnapshot"
QT_MOC_LITERAL(14, 180, 10), // "u_int8_t**"
QT_MOC_LITERAL(15, 191, 4), // "int*"
QT_MOC_LITERAL(16, 196, 9), // "numImages"
QT_MOC_LITERAL(17, 206, 9), // "saveFiles"
QT_MOC_LITERAL(18, 216, 18), // "funcGetCamSelected"
QT_MOC_LITERAL(19, 235, 17), // "funcVideoToFrames"
QT_MOC_LITERAL(20, 253, 11), // "videoSource"
QT_MOC_LITERAL(21, 265, 18), // "processEndOfPlayer"
QT_MOC_LITERAL(22, 284, 25), // "QMediaPlayer::MediaStatus"
QT_MOC_LITERAL(23, 310, 6), // "status"
QT_MOC_LITERAL(24, 317, 19), // "funcHideBarAndLabel"
QT_MOC_LITERAL(25, 337, 12), // "processFrame"
QT_MOC_LITERAL(26, 350, 11), // "QVideoFrame"
QT_MOC_LITERAL(27, 362, 11), // "actualFrame"
QT_MOC_LITERAL(28, 374, 30), // "funcDrawSpectralPixelIntoSmall"
QT_MOC_LITERAL(29, 405, 1), // "x"
QT_MOC_LITERAL(30, 407, 1), // "y"
QT_MOC_LITERAL(31, 409, 21), // "funcMouseMoveReaction"
QT_MOC_LITERAL(32, 431, 25), // "funcLoadImageIntoGaphView"
QT_MOC_LITERAL(33, 457, 14), // "QGraphicsView*"
QT_MOC_LITERAL(34, 472, 6), // "canvas"
QT_MOC_LITERAL(35, 479, 8), // "filePath"
QT_MOC_LITERAL(36, 488, 25), // "funcRemoteTerminalCommand"
QT_MOC_LITERAL(37, 514, 11), // "std::string"
QT_MOC_LITERAL(38, 526, 7), // "command"
QT_MOC_LITERAL(39, 534, 11), // "camSelected"
QT_MOC_LITERAL(40, 546, 12), // "trigeredTime"
QT_MOC_LITERAL(41, 559, 13), // "waitForAnswer"
QT_MOC_LITERAL(42, 573, 5), // "bool*"
QT_MOC_LITERAL(43, 579, 2), // "ok"
QT_MOC_LITERAL(44, 582, 10), // "obtainFile"
QT_MOC_LITERAL(45, 593, 12), // "fileToObtain"
QT_MOC_LITERAL(46, 606, 15), // "fileNameDestine"
QT_MOC_LITERAL(47, 622, 6), // "txtBar"
QT_MOC_LITERAL(48, 629, 15), // "obtainImageFile"
QT_MOC_LITERAL(49, 645, 11), // "funcEndRect"
QT_MOC_LITERAL(50, 657, 13), // "GraphicsView*"
QT_MOC_LITERAL(51, 671, 9), // "tmpCanvas"
QT_MOC_LITERAL(52, 681, 21), // "funcCalibMouseRelease"
QT_MOC_LITERAL(53, 703, 21), // "funcSpectMouseRelease"
QT_MOC_LITERAL(54, 725, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(55, 749, 18), // "on_pbAddIp_clicked"
QT_MOC_LITERAL(56, 768, 22), // "on_pbSearchAll_clicked"
QT_MOC_LITERAL(57, 791, 21), // "on_pbSendComm_clicked"
QT_MOC_LITERAL(58, 813, 15), // "funcReceiveFile"
QT_MOC_LITERAL(59, 829, 6), // "sockfd"
QT_MOC_LITERAL(60, 836, 3), // "Len"
QT_MOC_LITERAL(61, 840, 14), // "unsigned char*"
QT_MOC_LITERAL(62, 855, 10), // "bufferRead"
QT_MOC_LITERAL(63, 866, 3), // "tmp"
QT_MOC_LITERAL(64, 870, 19), // "funcActivateProgBar"
QT_MOC_LITERAL(65, 890, 20), // "on_pbConnect_clicked"
QT_MOC_LITERAL(66, 911, 12), // "progBarTimer"
QT_MOC_LITERAL(67, 924, 2), // "ms"
QT_MOC_LITERAL(68, 927, 16), // "funcGetRemoteImg"
QT_MOC_LITERAL(69, 944, 10), // "strReqImg*"
QT_MOC_LITERAL(70, 955, 6), // "reqImg"
QT_MOC_LITERAL(71, 962, 7), // "saveImg"
QT_MOC_LITERAL(72, 970, 12), // "funcObtVideo"
QT_MOC_LITERAL(73, 983, 11), // "saveLocally"
QT_MOC_LITERAL(74, 995, 15), // "funcUpdateVideo"
QT_MOC_LITERAL(75, 1011, 7), // "msSleep"
QT_MOC_LITERAL(76, 1019, 8), // "sec2Stab"
QT_MOC_LITERAL(77, 1028, 15), // "funcIniCamParam"
QT_MOC_LITERAL(78, 1044, 22), // "structRaspcamSettings*"
QT_MOC_LITERAL(79, 1067, 15), // "raspcamSettings"
QT_MOC_LITERAL(80, 1083, 24), // "on_slideISO_valueChanged"
QT_MOC_LITERAL(81, 1108, 5), // "value"
QT_MOC_LITERAL(82, 1114, 26), // "on_pbSaveRaspParam_clicked"
QT_MOC_LITERAL(83, 1141, 19), // "saveRaspCamSettings"
QT_MOC_LITERAL(84, 1161, 7), // "tmpName"
QT_MOC_LITERAL(85, 1169, 19), // "on_pbObtPar_clicked"
QT_MOC_LITERAL(86, 1189, 10), // "funcSetCam"
QT_MOC_LITERAL(87, 1200, 13), // "mergeSnapshot"
QT_MOC_LITERAL(88, 1214, 7), // "QImage*"
QT_MOC_LITERAL(89, 1222, 4), // "diff"
QT_MOC_LITERAL(90, 1227, 4), // "aper"
QT_MOC_LITERAL(91, 1232, 25), // "lstDoubleAxisCalibration*"
QT_MOC_LITERAL(92, 1258, 7), // "daCalib"
QT_MOC_LITERAL(93, 1266, 14), // "calcDiffPoints"
QT_MOC_LITERAL(94, 1281, 4), // "wave"
QT_MOC_LITERAL(95, 1286, 12), // "strDiffProj*"
QT_MOC_LITERAL(96, 1299, 3), // "p11"
QT_MOC_LITERAL(97, 1303, 3), // "p12"
QT_MOC_LITERAL(98, 1307, 3), // "p21"
QT_MOC_LITERAL(99, 1311, 3), // "p22"
QT_MOC_LITERAL(100, 1315, 15), // "getMaxCalibRect"
QT_MOC_LITERAL(101, 1331, 6), // "QRect*"
QT_MOC_LITERAL(102, 1338, 4), // "rect"
QT_MOC_LITERAL(103, 1343, 5), // "calib"
QT_MOC_LITERAL(104, 1349, 18), // "updateDisplayImage"
QT_MOC_LITERAL(105, 1368, 6), // "tmpImg"
QT_MOC_LITERAL(106, 1375, 8), // "fileName"
QT_MOC_LITERAL(107, 1384, 18), // "updatePreviewImage"
QT_MOC_LITERAL(108, 1403, 8), // "QString*"
QT_MOC_LITERAL(109, 1412, 21), // "on_pbSnapshot_clicked"
QT_MOC_LITERAL(110, 1434, 15), // "funcGetSnapshot"
QT_MOC_LITERAL(111, 1450, 18), // "funcPutImageIntoGV"
QT_MOC_LITERAL(112, 1469, 11), // "gvContainer"
QT_MOC_LITERAL(113, 1481, 7), // "impPath"
QT_MOC_LITERAL(114, 1489, 18), // "funcUpdatePolitope"
QT_MOC_LITERAL(115, 1508, 14), // "funcCreateLine"
QT_MOC_LITERAL(116, 1523, 10), // "drawVertex"
QT_MOC_LITERAL(117, 1534, 2), // "x1"
QT_MOC_LITERAL(118, 1537, 2), // "y1"
QT_MOC_LITERAL(119, 1540, 2), // "x2"
QT_MOC_LITERAL(120, 1543, 2), // "y2"
QT_MOC_LITERAL(121, 1546, 14), // "funcFillFigure"
QT_MOC_LITERAL(122, 1561, 23), // "funcDrawPointIntoCanvas"
QT_MOC_LITERAL(123, 1585, 1), // "w"
QT_MOC_LITERAL(124, 1587, 1), // "h"
QT_MOC_LITERAL(125, 1589, 5), // "color"
QT_MOC_LITERAL(126, 1595, 9), // "lineColor"
QT_MOC_LITERAL(127, 1605, 17), // "funcAddPoit2Graph"
QT_MOC_LITERAL(128, 1623, 20), // "funcLabelProgBarHide"
QT_MOC_LITERAL(129, 1644, 18), // "progBarUpdateLabel"
QT_MOC_LITERAL(130, 1663, 3), // "txt"
QT_MOC_LITERAL(131, 1667, 24), // "funcFillSnapshotSettings"
QT_MOC_LITERAL(132, 1692, 21), // "structRaspcamSettings"
QT_MOC_LITERAL(133, 1714, 8), // "raspSett"
QT_MOC_LITERAL(134, 1723, 25), // "on_pbSpecSnapshot_clicked"
QT_MOC_LITERAL(135, 1749, 17), // "on_chbRed_clicked"
QT_MOC_LITERAL(136, 1767, 28), // "funcUpdateColorSensibilities"
QT_MOC_LITERAL(137, 1796, 13), // "funcBeginRect"
QT_MOC_LITERAL(138, 1810, 20), // "on_pbSpecCut_clicked"
QT_MOC_LITERAL(139, 1831, 19), // "on_chbGreen_clicked"
QT_MOC_LITERAL(140, 1851, 18), // "on_chbBlue_clicked"
QT_MOC_LITERAL(141, 1870, 13), // "funcDrawLines"
QT_MOC_LITERAL(142, 1884, 4), // "flag"
QT_MOC_LITERAL(143, 1889, 2), // "xR"
QT_MOC_LITERAL(144, 1892, 2), // "xG"
QT_MOC_LITERAL(145, 1895, 2), // "xB"
QT_MOC_LITERAL(146, 1898, 29), // "on_slideRedLen_sliderReleased"
QT_MOC_LITERAL(147, 1928, 30), // "on_slideBlueLen_sliderReleased"
QT_MOC_LITERAL(148, 1959, 31), // "on_slideGreenLen_sliderReleased"
QT_MOC_LITERAL(149, 1991, 21), // "on_pbViewBack_clicked"
QT_MOC_LITERAL(150, 2013, 20), // "on_pbSnapCal_clicked"
QT_MOC_LITERAL(151, 2034, 15), // "updateCalibLine"
QT_MOC_LITERAL(152, 2050, 14), // "refreshGvCalib"
QT_MOC_LITERAL(153, 2065, 16), // "funcImgThreshold"
QT_MOC_LITERAL(154, 2082, 9), // "threshold"
QT_MOC_LITERAL(155, 2092, 8), // "tmpImage"
QT_MOC_LITERAL(156, 2101, 25), // "on_pbSpecLoadSnap_clicked"
QT_MOC_LITERAL(157, 2127, 23), // "on_actionRect_triggered"
QT_MOC_LITERAL(158, 2151, 33), // "on_actionHorizontalLine_trigg..."
QT_MOC_LITERAL(159, 2185, 25), // "on_actionCircle_triggered"
QT_MOC_LITERAL(160, 2211, 31), // "on_actionVerticalLine_triggered"
QT_MOC_LITERAL(161, 2243, 24), // "on_actionClear_triggered"
QT_MOC_LITERAL(162, 2268, 20), // "clearFreeHandPoligon"
QT_MOC_LITERAL(163, 2289, 14), // "clearRectangle"
QT_MOC_LITERAL(164, 2304, 28), // "on_actionSelection_triggered"
QT_MOC_LITERAL(165, 2333, 17), // "ResetGraphToolBar"
QT_MOC_LITERAL(166, 2351, 8), // "toEnable"
QT_MOC_LITERAL(167, 2360, 23), // "funcAnalizeAreaSelected"
QT_MOC_LITERAL(168, 2384, 2), // "p1"
QT_MOC_LITERAL(169, 2387, 2), // "p2"
QT_MOC_LITERAL(170, 2390, 18), // "disableAllToolBars"
QT_MOC_LITERAL(171, 2409, 30), // "on_actionDrawToolbar_triggered"
QT_MOC_LITERAL(172, 2440, 26), // "on_pbExpPixs_tabBarClicked"
QT_MOC_LITERAL(173, 2467, 5), // "index"
QT_MOC_LITERAL(174, 2473, 31), // "on_actionDoubAxisDiff_triggered"
QT_MOC_LITERAL(175, 2505, 32), // "on_slideTriggerTime_valueChanged"
QT_MOC_LITERAL(176, 2538, 28), // "on_actionRotateImg_triggered"
QT_MOC_LITERAL(177, 2567, 13), // "doImgRotation"
QT_MOC_LITERAL(178, 2581, 5), // "angle"
QT_MOC_LITERAL(179, 2587, 18), // "DrawVerAndHorLines"
QT_MOC_LITERAL(180, 2606, 15), // "Qt::GlobalColor"
QT_MOC_LITERAL(181, 2622, 29), // "on_actionLoadCanvas_triggered"
QT_MOC_LITERAL(182, 2652, 21), // "updateImageCanvasEdit"
QT_MOC_LITERAL(183, 2674, 7), // "origImg"
QT_MOC_LITERAL(184, 2682, 33), // "on_actionApplyThreshold_trigg..."
QT_MOC_LITERAL(185, 2716, 19), // "applyThreshol2Scene"
QT_MOC_LITERAL(186, 2736, 12), // "getLastAngle"
QT_MOC_LITERAL(187, 2749, 38), // "on_actionLoadSquareRectangle_..."
QT_MOC_LITERAL(188, 2788, 35), // "on_actionLoadRegOfInteres_tri..."
QT_MOC_LITERAL(189, 2824, 30), // "on_actionToolPenArea_triggered"
QT_MOC_LITERAL(190, 2855, 15), // "mouseCursorHand"
QT_MOC_LITERAL(191, 2871, 16), // "mouseCursorCross"
QT_MOC_LITERAL(192, 2888, 15), // "mouseCursorWait"
QT_MOC_LITERAL(193, 2904, 16), // "mouseCursorReset"
QT_MOC_LITERAL(194, 2921, 30), // "on_actionSend_to_XYZ_triggered"
QT_MOC_LITERAL(195, 2952, 29), // "on_actionSaveCanvas_triggered"
QT_MOC_LITERAL(196, 2982, 9), // "saveCalib"
QT_MOC_LITERAL(197, 2992, 10), // "saveCanvas"
QT_MOC_LITERAL(198, 3003, 39), // "on_actionExportPixelsSelected..."
QT_MOC_LITERAL(199, 3043, 23), // "on_pbLANConnect_clicked"
QT_MOC_LITERAL(200, 3067, 24), // "on_pbLANTestConn_clicked"
QT_MOC_LITERAL(201, 3092, 31), // "on_actionGenHypercube_triggered"
QT_MOC_LITERAL(202, 3124, 16), // "generatesHypcube"
QT_MOC_LITERAL(203, 3141, 13), // "numIterations"
QT_MOC_LITERAL(204, 3155, 12), // "demosaiseF2D"
QT_MOC_LITERAL(205, 3168, 7), // "double*"
QT_MOC_LITERAL(206, 3176, 1), // "f"
QT_MOC_LITERAL(207, 3178, 1), // "L"
QT_MOC_LITERAL(208, 3180, 1), // "H"
QT_MOC_LITERAL(209, 3182, 1), // "W"
QT_MOC_LITERAL(210, 3184, 12), // "demosaiseF3D"
QT_MOC_LITERAL(211, 3197, 26), // "calcTrilinearInterpolation"
QT_MOC_LITERAL(212, 3224, 9), // "double***"
QT_MOC_LITERAL(213, 3234, 4), // "cube"
QT_MOC_LITERAL(214, 3239, 10), // "trilinear*"
QT_MOC_LITERAL(215, 3250, 4), // "node"
QT_MOC_LITERAL(216, 3255, 11), // "calculatesF"
QT_MOC_LITERAL(217, 3267, 10), // "iterations"
QT_MOC_LITERAL(218, 3278, 6), // "sensor"
QT_MOC_LITERAL(219, 3285, 8), // "improveF"
QT_MOC_LITERAL(220, 3294, 9), // "fKPlusOne"
QT_MOC_LITERAL(221, 3304, 7), // "pixel**"
QT_MOC_LITERAL(222, 3312, 4), // "Hcol"
QT_MOC_LITERAL(223, 3317, 4), // "gTmp"
QT_MOC_LITERAL(224, 3322, 1), // "N"
QT_MOC_LITERAL(225, 3324, 11), // "createsGTmp"
QT_MOC_LITERAL(226, 3336, 1), // "g"
QT_MOC_LITERAL(227, 3338, 5), // "int**"
QT_MOC_LITERAL(228, 3344, 4), // "Hrow"
QT_MOC_LITERAL(229, 3349, 1), // "M"
QT_MOC_LITERAL(230, 3351, 9), // "createsF0"
QT_MOC_LITERAL(231, 3361, 24), // "serializeImageToProccess"
QT_MOC_LITERAL(232, 3386, 3), // "img"
QT_MOC_LITERAL(233, 3390, 18), // "createsHColAndHrow"
QT_MOC_LITERAL(234, 3409, 17), // "insertItemIntoRow"
QT_MOC_LITERAL(235, 3427, 3), // "row"
QT_MOC_LITERAL(236, 3431, 3), // "col"
QT_MOC_LITERAL(237, 3435, 15), // "getWavesChoised"
QT_MOC_LITERAL(238, 3451, 13), // "QList<double>"
QT_MOC_LITERAL(239, 3465, 27), // "on_actionValidCal_triggered"
QT_MOC_LITERAL(240, 3493, 25), // "on_actionValCal_triggered"
QT_MOC_LITERAL(241, 3519, 31), // "on_actionSquareUsable_triggered"
QT_MOC_LITERAL(242, 3551, 34), // "on_actionChoseWavelength_trig..."
QT_MOC_LITERAL(243, 3586, 31), // "on_actionFittFunction_triggered"
QT_MOC_LITERAL(244, 3618, 33), // "on_actionShow_hypercube_trigg..."
QT_MOC_LITERAL(245, 3652, 17), // "extractsHyperCube"
QT_MOC_LITERAL(246, 3670, 14), // "originFileName"
QT_MOC_LITERAL(247, 3685, 41), // "on_actionBilinear_interpolati..."
QT_MOC_LITERAL(248, 3727, 24), // "on_pbCopyShutter_clicked"
QT_MOC_LITERAL(249, 3752, 30), // "on_actionslideHypCam_triggered"
QT_MOC_LITERAL(250, 3783, 17), // "funcQtReceiveFile"
QT_MOC_LITERAL(251, 3801, 9), // "u_int8_t*"
QT_MOC_LITERAL(252, 3811, 17), // "fileNameRequested"
QT_MOC_LITERAL(253, 3829, 7), // "fileLen"
QT_MOC_LITERAL(254, 3837, 16), // "funcReceiveFrame"
QT_MOC_LITERAL(255, 3854, 5), // "idImg"
QT_MOC_LITERAL(256, 3860, 8), // "frameLen"
QT_MOC_LITERAL(257, 3869, 9), // "funcDebug"
QT_MOC_LITERAL(258, 3879, 3), // "msg"
QT_MOC_LITERAL(259, 3883, 19), // "funcRequestSubframe"
QT_MOC_LITERAL(260, 3903, 15), // "strReqSubframe*"
QT_MOC_LITERAL(261, 3919, 14), // "subFrameParams"
QT_MOC_LITERAL(262, 3934, 14), // "funcReceiveACK"
QT_MOC_LITERAL(263, 3949, 21), // "funcReceiveOneMessage"
QT_MOC_LITERAL(264, 3971, 5), // "frame"
QT_MOC_LITERAL(265, 3977, 21), // "funcFillSLIDESettings"
QT_MOC_LITERAL(266, 3999, 24), // "funcDrawRectangleFromXML"
QT_MOC_LITERAL(267, 4024, 24), // "on_pbDrawSlide_triggered"
QT_MOC_LITERAL(268, 4049, 15), // "saveRectangleAs"
QT_MOC_LITERAL(269, 4065, 15), // "squareAperture*"
QT_MOC_LITERAL(270, 4081, 6), // "square"
QT_MOC_LITERAL(271, 4088, 33), // "on_actionSlide_settings_trigg..."
QT_MOC_LITERAL(272, 4122, 21), // "on_pbShutdown_clicked"
QT_MOC_LITERAL(273, 4144, 20), // "on_pbSnapVid_clicked"
QT_MOC_LITERAL(274, 4165, 25), // "funcUpdateImageFromFolder"
QT_MOC_LITERAL(275, 4191, 6), // "folder"
QT_MOC_LITERAL(276, 4198, 30), // "rectangleInPixelsFromSquareXML"
QT_MOC_LITERAL(277, 4229, 9), // "rectangle"
QT_MOC_LITERAL(278, 4239, 9), // "respectTo"
QT_MOC_LITERAL(279, 4249, 23), // "createSubimageRemotelly"
QT_MOC_LITERAL(280, 4273, 10), // "squareArea"
QT_MOC_LITERAL(281, 4284, 18), // "takeRemoteSnapshot"
QT_MOC_LITERAL(282, 4303, 11), // "fileDestiny"
QT_MOC_LITERAL(283, 4315, 27), // "on_pbSnapshotSquare_clicked"
QT_MOC_LITERAL(284, 4343, 22), // "on_pbSaveImage_clicked"
QT_MOC_LITERAL(285, 4366, 18), // "funcResetStatusBar"
QT_MOC_LITERAL(286, 4385, 28), // "on_pbOneShotSnapshot_clicked"
QT_MOC_LITERAL(287, 4414, 33), // "on_actionsquareSettings_trigg..."
QT_MOC_LITERAL(288, 4448, 25), // "on_pbSelectFolder_clicked"
QT_MOC_LITERAL(289, 4474, 32), // "on_slideChangeImage_valueChanged"
QT_MOC_LITERAL(290, 4507, 18), // "funcDrawPlotLimits"
QT_MOC_LITERAL(291, 4526, 32), // "on_actionvideoToFrames_triggered"
QT_MOC_LITERAL(292, 4559, 31), // "on_actionframesToCube_triggered"
QT_MOC_LITERAL(293, 4591, 22), // "on_pbTimeLapse_clicked"
QT_MOC_LITERAL(294, 4614, 21), // "genRemoteVideoCommand"
QT_MOC_LITERAL(295, 4636, 11), // "remoteVideo"
QT_MOC_LITERAL(296, 4648, 3), // "ROI"
QT_MOC_LITERAL(297, 4652, 19), // "genTimelapseCommand"
QT_MOC_LITERAL(298, 4672, 6), // "setROI"
QT_MOC_LITERAL(299, 4679, 27), // "genSubareaRaspistillCommand"
QT_MOC_LITERAL(300, 4707, 14), // "remoteFilename"
QT_MOC_LITERAL(301, 4722, 16), // "subareaRectangle"
QT_MOC_LITERAL(302, 4739, 28), // "on_actionRGB_to_XY_triggered"
QT_MOC_LITERAL(303, 4768, 23), // "on_actionNDVI_triggered"
QT_MOC_LITERAL(304, 4792, 33), // "on_actionNDVI_Algorithm_trigg..."
QT_MOC_LITERAL(305, 4826, 30), // "on_actionFull_Screen_triggered"
QT_MOC_LITERAL(306, 4857, 35), // "on_actionDisplay_Original_tri..."
QT_MOC_LITERAL(307, 4893, 29), // "on_actionFull_photo_triggered"
QT_MOC_LITERAL(308, 4923, 30), // "on_actionDiffraction_triggered"
QT_MOC_LITERAL(309, 4954, 27), // "on_actionComposed_triggered"
QT_MOC_LITERAL(310, 4982, 24), // "on_actionVideo_triggered"
QT_MOC_LITERAL(311, 5007, 28), // "on_actionTimelapse_triggered"
QT_MOC_LITERAL(312, 5036, 23), // "on_actionSave_triggered"
QT_MOC_LITERAL(313, 5060, 35), // "on_actionSlideDiffraction_tri..."
QT_MOC_LITERAL(314, 5096, 32), // "on_actionObtain_Folder_triggered"
QT_MOC_LITERAL(315, 5129, 18), // "obtainRemoteFolder"
QT_MOC_LITERAL(316, 5148, 12), // "remoteFolder"
QT_MOC_LITERAL(317, 5161, 11), // "localFolder"
QT_MOC_LITERAL(318, 5173, 8), // "errTrans"
QT_MOC_LITERAL(319, 5182, 6), // "errDel"
QT_MOC_LITERAL(320, 5189, 9), // "delFolder"
QT_MOC_LITERAL(321, 5199, 20), // "funcRemoveRemoteFile"
QT_MOC_LITERAL(322, 5220, 40), // "on_actionSlide_Build_Hypercub..."
QT_MOC_LITERAL(323, 5261, 26), // "buildHypercubeFromFilelist"
QT_MOC_LITERAL(324, 5288, 16), // "QList<QFileInfo>"
QT_MOC_LITERAL(325, 5305, 9), // "lstFrames"
QT_MOC_LITERAL(326, 5315, 18), // "structSlideHypCube"
QT_MOC_LITERAL(327, 5334, 17), // "slideCubeSettings"
QT_MOC_LITERAL(328, 5352, 24), // "funcAccountFilesInFolder"
QT_MOC_LITERAL(329, 5377, 24), // "funcStartRemoteTimelapse"
QT_MOC_LITERAL(330, 5402, 33), // "funcValidateFileDirNameDuplic..."
QT_MOC_LITERAL(331, 5436, 10), // "remoteFile"
QT_MOC_LITERAL(332, 5447, 9), // "localFile"
QT_MOC_LITERAL(333, 5457, 17), // "funcGetSyncFolder"
QT_MOC_LITERAL(334, 5475, 26), // "on_actionVideo_2_triggered"
QT_MOC_LITERAL(335, 5502, 30), // "on_actionTimelapse_2_triggered"
QT_MOC_LITERAL(336, 5533, 29), // "on_actionSnapvideos_triggered"
QT_MOC_LITERAL(337, 5563, 27), // "on_actionSnapshot_triggered"
QT_MOC_LITERAL(338, 5591, 30), // "on_actionSynchronize_triggered"
QT_MOC_LITERAL(339, 5622, 30), // "on_actionSync_Folder_triggered"
QT_MOC_LITERAL(340, 5653, 24), // "funcMainCall_RecordVideo"
QT_MOC_LITERAL(341, 5678, 7), // "videoID"
QT_MOC_LITERAL(342, 5686, 11), // "defaultPath"
QT_MOC_LITERAL(343, 5698, 24), // "funcMainCall_GetSnapshot"
QT_MOC_LITERAL(344, 5723, 29), // "on_actionFull_Video_triggered"
QT_MOC_LITERAL(345, 5753, 16), // "funcDisplayTimer"
QT_MOC_LITERAL(346, 5770, 5), // "title"
QT_MOC_LITERAL(347, 5776, 6), // "timeMs"
QT_MOC_LITERAL(348, 5783, 36), // "on_actionMultiImageAverage_tr..."
QT_MOC_LITERAL(349, 5820, 20), // "func_MultiImageMerge"
QT_MOC_LITERAL(350, 5841, 4), // "type"
QT_MOC_LITERAL(351, 5846, 36), // "on_actionMultiImageMinimum_tr..."
QT_MOC_LITERAL(352, 5883, 36), // "on_actionMultiImageMaximum_tr..."
QT_MOC_LITERAL(353, 5920, 33), // "on_actionSlide_Settings_trigg..."
QT_MOC_LITERAL(354, 5954, 36), // "on_actionLinear_Regression_tr..."
QT_MOC_LITERAL(355, 5991, 37), // "on_actionDiffraction_Origin_t..."
QT_MOC_LITERAL(356, 6029, 21), // "on_openLine_triggered"
QT_MOC_LITERAL(357, 6051, 42), // "on_actionSlide_Linear_Regress..."
QT_MOC_LITERAL(358, 6094, 26), // "on_actionarcLine_triggered"
QT_MOC_LITERAL(359, 6121, 26), // "funcDrawLineIntoCanvasEdit"
QT_MOC_LITERAL(360, 6148, 39), // "on_actionPlot_Calculated_Line..."
QT_MOC_LITERAL(361, 6188, 43), // "on_actionPlot_Upper_Line_Rota..."
QT_MOC_LITERAL(362, 6232, 27), // "funcReadVerticalCalibration"
QT_MOC_LITERAL(363, 6260, 26), // "structVerticalCalibration*"
QT_MOC_LITERAL(364, 6287, 7), // "vertCal"
QT_MOC_LITERAL(365, 6295, 24), // "funcReadHorizCalibration"
QT_MOC_LITERAL(366, 6320, 28), // "structHorizontalCalibration*"
QT_MOC_LITERAL(367, 6349, 10), // "horizCalib"
QT_MOC_LITERAL(368, 6360, 25), // "on_actionOrigin_triggered"
QT_MOC_LITERAL(369, 6386, 30), // "on_actionBuld_HypImg_triggered"
QT_MOC_LITERAL(370, 6417, 36), // "on_actionMerge_Calibration_tr..."
QT_MOC_LITERAL(371, 6454, 33), // "on_actionPlot_over_Real_trigg..."
QT_MOC_LITERAL(372, 6488, 42), // "on_actionPlot_Line_at_Wavelen..."
QT_MOC_LITERAL(373, 6531, 41), // "on_actionSlide_Calibration_Fi..."
QT_MOC_LITERAL(374, 6573, 33), // "on_actionMerge_into_RGB_trigg..."
QT_MOC_LITERAL(375, 6607, 33), // "on_actionApply_Rotation_trigg..."
QT_MOC_LITERAL(376, 6641, 39), // "on_actionApply_Transformation..."
QT_MOC_LITERAL(377, 6681, 35), // "on_actionRestore_Original_tri..."
QT_MOC_LITERAL(378, 6717, 35), // "on_actionExtract_frames_2_tri..."
QT_MOC_LITERAL(379, 6753, 25), // "funcExtractFramesFromH264"
QT_MOC_LITERAL(380, 6779, 11), // "updateImage"
QT_MOC_LITERAL(381, 6791, 39), // "on_actionSlide_Max_Wavelength..."
QT_MOC_LITERAL(382, 6831, 32), // "on_actionBuild_HypCube_triggered"
QT_MOC_LITERAL(383, 6864, 34), // "on_actionBuild_HypCube_2_trig..."
QT_MOC_LITERAL(384, 6899, 21), // "funcOpticalCorrection"
QT_MOC_LITERAL(385, 6921, 14), // "QList<QImage>*"
QT_MOC_LITERAL(386, 6936, 14), // "lstTransImages"
QT_MOC_LITERAL(387, 6951, 23), // "structSlideCalibration*"
QT_MOC_LITERAL(388, 6975, 16), // "slideCalibration"
QT_MOC_LITERAL(389, 6992, 9), // "tryToSave"
QT_MOC_LITERAL(390, 7002, 12), // "refreshImage"
QT_MOC_LITERAL(391, 7015, 41), // "on_actionSlide_HypCube_Buildi..."
QT_MOC_LITERAL(392, 7057, 39), // "on_actionCamera_Sensitivities..."
QT_MOC_LITERAL(393, 7097, 37), // "on_actionCalc_Sensitivities_t..."
QT_MOC_LITERAL(394, 7135, 39), // "on_actionSlide_Min_Wavelength..."
QT_MOC_LITERAL(395, 7175, 36) // "on_actionHypCube_From_H264_tr..."

    },
    "MainWindow\0funcAddPoint\0\0QMouseEvent*\0"
    "e\0addRect2Calib\0colSeld\0addCircle2Calib\0"
    "addHorLine2Calib\0addVertLine2Calib\0"
    "getCamMP\0getCameraSelected\0"
    "structCamSelected*\0funcGetSLIDESnapshot\0"
    "u_int8_t**\0int*\0numImages\0saveFiles\0"
    "funcGetCamSelected\0funcVideoToFrames\0"
    "videoSource\0processEndOfPlayer\0"
    "QMediaPlayer::MediaStatus\0status\0"
    "funcHideBarAndLabel\0processFrame\0"
    "QVideoFrame\0actualFrame\0"
    "funcDrawSpectralPixelIntoSmall\0x\0y\0"
    "funcMouseMoveReaction\0funcLoadImageIntoGaphView\0"
    "QGraphicsView*\0canvas\0filePath\0"
    "funcRemoteTerminalCommand\0std::string\0"
    "command\0camSelected\0trigeredTime\0"
    "waitForAnswer\0bool*\0ok\0obtainFile\0"
    "fileToObtain\0fileNameDestine\0txtBar\0"
    "obtainImageFile\0funcEndRect\0GraphicsView*\0"
    "tmpCanvas\0funcCalibMouseRelease\0"
    "funcSpectMouseRelease\0on_actionExit_triggered\0"
    "on_pbAddIp_clicked\0on_pbSearchAll_clicked\0"
    "on_pbSendComm_clicked\0funcReceiveFile\0"
    "sockfd\0Len\0unsigned char*\0bufferRead\0"
    "tmp\0funcActivateProgBar\0on_pbConnect_clicked\0"
    "progBarTimer\0ms\0funcGetRemoteImg\0"
    "strReqImg*\0reqImg\0saveImg\0funcObtVideo\0"
    "saveLocally\0funcUpdateVideo\0msSleep\0"
    "sec2Stab\0funcIniCamParam\0"
    "structRaspcamSettings*\0raspcamSettings\0"
    "on_slideISO_valueChanged\0value\0"
    "on_pbSaveRaspParam_clicked\0"
    "saveRaspCamSettings\0tmpName\0"
    "on_pbObtPar_clicked\0funcSetCam\0"
    "mergeSnapshot\0QImage*\0diff\0aper\0"
    "lstDoubleAxisCalibration*\0daCalib\0"
    "calcDiffPoints\0wave\0strDiffProj*\0p11\0"
    "p12\0p21\0p22\0getMaxCalibRect\0QRect*\0"
    "rect\0calib\0updateDisplayImage\0tmpImg\0"
    "fileName\0updatePreviewImage\0QString*\0"
    "on_pbSnapshot_clicked\0funcGetSnapshot\0"
    "funcPutImageIntoGV\0gvContainer\0impPath\0"
    "funcUpdatePolitope\0funcCreateLine\0"
    "drawVertex\0x1\0y1\0x2\0y2\0funcFillFigure\0"
    "funcDrawPointIntoCanvas\0w\0h\0color\0"
    "lineColor\0funcAddPoit2Graph\0"
    "funcLabelProgBarHide\0progBarUpdateLabel\0"
    "txt\0funcFillSnapshotSettings\0"
    "structRaspcamSettings\0raspSett\0"
    "on_pbSpecSnapshot_clicked\0on_chbRed_clicked\0"
    "funcUpdateColorSensibilities\0funcBeginRect\0"
    "on_pbSpecCut_clicked\0on_chbGreen_clicked\0"
    "on_chbBlue_clicked\0funcDrawLines\0flag\0"
    "xR\0xG\0xB\0on_slideRedLen_sliderReleased\0"
    "on_slideBlueLen_sliderReleased\0"
    "on_slideGreenLen_sliderReleased\0"
    "on_pbViewBack_clicked\0on_pbSnapCal_clicked\0"
    "updateCalibLine\0refreshGvCalib\0"
    "funcImgThreshold\0threshold\0tmpImage\0"
    "on_pbSpecLoadSnap_clicked\0"
    "on_actionRect_triggered\0"
    "on_actionHorizontalLine_triggered\0"
    "on_actionCircle_triggered\0"
    "on_actionVerticalLine_triggered\0"
    "on_actionClear_triggered\0clearFreeHandPoligon\0"
    "clearRectangle\0on_actionSelection_triggered\0"
    "ResetGraphToolBar\0toEnable\0"
    "funcAnalizeAreaSelected\0p1\0p2\0"
    "disableAllToolBars\0on_actionDrawToolbar_triggered\0"
    "on_pbExpPixs_tabBarClicked\0index\0"
    "on_actionDoubAxisDiff_triggered\0"
    "on_slideTriggerTime_valueChanged\0"
    "on_actionRotateImg_triggered\0doImgRotation\0"
    "angle\0DrawVerAndHorLines\0Qt::GlobalColor\0"
    "on_actionLoadCanvas_triggered\0"
    "updateImageCanvasEdit\0origImg\0"
    "on_actionApplyThreshold_triggered\0"
    "applyThreshol2Scene\0getLastAngle\0"
    "on_actionLoadSquareRectangle_triggered\0"
    "on_actionLoadRegOfInteres_triggered\0"
    "on_actionToolPenArea_triggered\0"
    "mouseCursorHand\0mouseCursorCross\0"
    "mouseCursorWait\0mouseCursorReset\0"
    "on_actionSend_to_XYZ_triggered\0"
    "on_actionSaveCanvas_triggered\0saveCalib\0"
    "saveCanvas\0on_actionExportPixelsSelected_triggered\0"
    "on_pbLANConnect_clicked\0"
    "on_pbLANTestConn_clicked\0"
    "on_actionGenHypercube_triggered\0"
    "generatesHypcube\0numIterations\0"
    "demosaiseF2D\0double*\0f\0L\0H\0W\0demosaiseF3D\0"
    "calcTrilinearInterpolation\0double***\0"
    "cube\0trilinear*\0node\0calculatesF\0"
    "iterations\0sensor\0improveF\0fKPlusOne\0"
    "pixel**\0Hcol\0gTmp\0N\0createsGTmp\0g\0"
    "int**\0Hrow\0M\0createsF0\0serializeImageToProccess\0"
    "img\0createsHColAndHrow\0insertItemIntoRow\0"
    "row\0col\0getWavesChoised\0QList<double>\0"
    "on_actionValidCal_triggered\0"
    "on_actionValCal_triggered\0"
    "on_actionSquareUsable_triggered\0"
    "on_actionChoseWavelength_triggered\0"
    "on_actionFittFunction_triggered\0"
    "on_actionShow_hypercube_triggered\0"
    "extractsHyperCube\0originFileName\0"
    "on_actionBilinear_interpolation_triggered\0"
    "on_pbCopyShutter_clicked\0"
    "on_actionslideHypCam_triggered\0"
    "funcQtReceiveFile\0u_int8_t*\0"
    "fileNameRequested\0fileLen\0funcReceiveFrame\0"
    "idImg\0frameLen\0funcDebug\0msg\0"
    "funcRequestSubframe\0strReqSubframe*\0"
    "subFrameParams\0funcReceiveACK\0"
    "funcReceiveOneMessage\0frame\0"
    "funcFillSLIDESettings\0funcDrawRectangleFromXML\0"
    "on_pbDrawSlide_triggered\0saveRectangleAs\0"
    "squareAperture*\0square\0"
    "on_actionSlide_settings_triggered\0"
    "on_pbShutdown_clicked\0on_pbSnapVid_clicked\0"
    "funcUpdateImageFromFolder\0folder\0"
    "rectangleInPixelsFromSquareXML\0rectangle\0"
    "respectTo\0createSubimageRemotelly\0"
    "squareArea\0takeRemoteSnapshot\0fileDestiny\0"
    "on_pbSnapshotSquare_clicked\0"
    "on_pbSaveImage_clicked\0funcResetStatusBar\0"
    "on_pbOneShotSnapshot_clicked\0"
    "on_actionsquareSettings_triggered\0"
    "on_pbSelectFolder_clicked\0"
    "on_slideChangeImage_valueChanged\0"
    "funcDrawPlotLimits\0on_actionvideoToFrames_triggered\0"
    "on_actionframesToCube_triggered\0"
    "on_pbTimeLapse_clicked\0genRemoteVideoCommand\0"
    "remoteVideo\0ROI\0genTimelapseCommand\0"
    "setROI\0genSubareaRaspistillCommand\0"
    "remoteFilename\0subareaRectangle\0"
    "on_actionRGB_to_XY_triggered\0"
    "on_actionNDVI_triggered\0"
    "on_actionNDVI_Algorithm_triggered\0"
    "on_actionFull_Screen_triggered\0"
    "on_actionDisplay_Original_triggered\0"
    "on_actionFull_photo_triggered\0"
    "on_actionDiffraction_triggered\0"
    "on_actionComposed_triggered\0"
    "on_actionVideo_triggered\0"
    "on_actionTimelapse_triggered\0"
    "on_actionSave_triggered\0"
    "on_actionSlideDiffraction_triggered\0"
    "on_actionObtain_Folder_triggered\0"
    "obtainRemoteFolder\0remoteFolder\0"
    "localFolder\0errTrans\0errDel\0delFolder\0"
    "funcRemoveRemoteFile\0"
    "on_actionSlide_Build_Hypercube_triggered\0"
    "buildHypercubeFromFilelist\0QList<QFileInfo>\0"
    "lstFrames\0structSlideHypCube\0"
    "slideCubeSettings\0funcAccountFilesInFolder\0"
    "funcStartRemoteTimelapse\0"
    "funcValidateFileDirNameDuplicated\0"
    "remoteFile\0localFile\0funcGetSyncFolder\0"
    "on_actionVideo_2_triggered\0"
    "on_actionTimelapse_2_triggered\0"
    "on_actionSnapvideos_triggered\0"
    "on_actionSnapshot_triggered\0"
    "on_actionSynchronize_triggered\0"
    "on_actionSync_Folder_triggered\0"
    "funcMainCall_RecordVideo\0videoID\0"
    "defaultPath\0funcMainCall_GetSnapshot\0"
    "on_actionFull_Video_triggered\0"
    "funcDisplayTimer\0title\0timeMs\0"
    "on_actionMultiImageAverage_triggered\0"
    "func_MultiImageMerge\0type\0"
    "on_actionMultiImageMinimum_triggered\0"
    "on_actionMultiImageMaximum_triggered\0"
    "on_actionSlide_Settings_triggered\0"
    "on_actionLinear_Regression_triggered\0"
    "on_actionDiffraction_Origin_triggered\0"
    "on_openLine_triggered\0"
    "on_actionSlide_Linear_Regression_triggered\0"
    "on_actionarcLine_triggered\0"
    "funcDrawLineIntoCanvasEdit\0"
    "on_actionPlot_Calculated_Line_triggered\0"
    "on_actionPlot_Upper_Line_Rotation_triggered\0"
    "funcReadVerticalCalibration\0"
    "structVerticalCalibration*\0vertCal\0"
    "funcReadHorizCalibration\0"
    "structHorizontalCalibration*\0horizCalib\0"
    "on_actionOrigin_triggered\0"
    "on_actionBuld_HypImg_triggered\0"
    "on_actionMerge_Calibration_triggered\0"
    "on_actionPlot_over_Real_triggered\0"
    "on_actionPlot_Line_at_Wavelength_triggered\0"
    "on_actionSlide_Calibration_File_triggered\0"
    "on_actionMerge_into_RGB_triggered\0"
    "on_actionApply_Rotation_triggered\0"
    "on_actionApply_Transformation_triggered\0"
    "on_actionRestore_Original_triggered\0"
    "on_actionExtract_frames_2_triggered\0"
    "funcExtractFramesFromH264\0updateImage\0"
    "on_actionSlide_Max_Wavelength_triggered\0"
    "on_actionBuild_HypCube_triggered\0"
    "on_actionBuild_HypCube_2_triggered\0"
    "funcOpticalCorrection\0QList<QImage>*\0"
    "lstTransImages\0structSlideCalibration*\0"
    "slideCalibration\0tryToSave\0refreshImage\0"
    "on_actionSlide_HypCube_Building_triggered\0"
    "on_actionCamera_Sensitivities_triggered\0"
    "on_actionCalc_Sensitivities_triggered\0"
    "on_actionSlide_Min_Wavelength_triggered\0"
    "on_actionHypCube_From_H264_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     244,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1, 1234,    2, 0x0a /* Public */,
       5,    1, 1237,    2, 0x0a /* Public */,
       7,    1, 1240,    2, 0x0a /* Public */,
       8,    1, 1243,    2, 0x0a /* Public */,
       9,    1, 1246,    2, 0x0a /* Public */,
      10,    0, 1249,    2, 0x0a /* Public */,
      11,    0, 1250,    2, 0x0a /* Public */,
      13,    2, 1251,    2, 0x0a /* Public */,
      18,    0, 1256,    2, 0x0a /* Public */,
      19,    1, 1257,    2, 0x0a /* Public */,
      21,    1, 1260,    2, 0x0a /* Public */,
      24,    0, 1263,    2, 0x0a /* Public */,
      25,    1, 1264,    2, 0x0a /* Public */,
      28,    2, 1267,    2, 0x0a /* Public */,
      31,    1, 1272,    2, 0x0a /* Public */,
      32,    2, 1275,    2, 0x0a /* Public */,
      36,    5, 1280,    2, 0x0a /* Public */,
      44,    3, 1291,    2, 0x0a /* Public */,
      48,    2, 1298,    2, 0x0a /* Public */,
      49,    2, 1303,    2, 0x08 /* Private */,
      52,    1, 1308,    2, 0x08 /* Private */,
      53,    1, 1311,    2, 0x08 /* Private */,
      54,    0, 1314,    2, 0x08 /* Private */,
      55,    0, 1315,    2, 0x08 /* Private */,
      56,    0, 1316,    2, 0x08 /* Private */,
      57,    0, 1317,    2, 0x08 /* Private */,
      58,    4, 1318,    2, 0x08 /* Private */,
      64,    0, 1327,    2, 0x08 /* Private */,
      65,    0, 1328,    2, 0x08 /* Private */,
      66,    1, 1329,    2, 0x08 /* Private */,
      68,    2, 1332,    2, 0x08 /* Private */,
      68,    1, 1337,    2, 0x28 /* Private | MethodCloned */,
      72,    1, 1340,    2, 0x08 /* Private */,
      74,    2, 1343,    2, 0x08 /* Private */,
      77,    1, 1348,    2, 0x08 /* Private */,
      80,    1, 1351,    2, 0x08 /* Private */,
      82,    0, 1354,    2, 0x08 /* Private */,
      83,    1, 1355,    2, 0x08 /* Private */,
      85,    0, 1358,    2, 0x08 /* Private */,
      86,    1, 1359,    2, 0x08 /* Private */,
      87,    3, 1362,    2, 0x08 /* Private */,
      93,    6, 1369,    2, 0x08 /* Private */,
     100,    2, 1382,    2, 0x08 /* Private */,
     104,    1, 1387,    2, 0x08 /* Private */,
     104,    1, 1390,    2, 0x08 /* Private */,
     107,    1, 1393,    2, 0x08 /* Private */,
     107,    1, 1396,    2, 0x08 /* Private */,
     109,    0, 1399,    2, 0x08 /* Private */,
     110,    0, 1400,    2, 0x08 /* Private */,
     111,    2, 1401,    2, 0x08 /* Private */,
     114,    0, 1406,    2, 0x08 /* Private */,
     115,    5, 1407,    2, 0x08 /* Private */,
     121,    0, 1418,    2, 0x08 /* Private */,
     122,    6, 1419,    2, 0x08 /* Private */,
     127,    7, 1432,    2, 0x08 /* Private */,
     128,    0, 1447,    2, 0x08 /* Private */,
     129,    2, 1448,    2, 0x08 /* Private */,
     131,    1, 1453,    2, 0x08 /* Private */,
     134,    0, 1456,    2, 0x08 /* Private */,
     135,    0, 1457,    2, 0x08 /* Private */,
     136,    0, 1458,    2, 0x08 /* Private */,
     137,    1, 1459,    2, 0x08 /* Private */,
     138,    0, 1462,    2, 0x08 /* Private */,
     139,    0, 1463,    2, 0x08 /* Private */,
     140,    0, 1464,    2, 0x08 /* Private */,
     141,    4, 1465,    2, 0x08 /* Private */,
     146,    0, 1474,    2, 0x08 /* Private */,
     147,    0, 1475,    2, 0x08 /* Private */,
     148,    0, 1476,    2, 0x08 /* Private */,
     149,    0, 1477,    2, 0x08 /* Private */,
     150,    0, 1478,    2, 0x08 /* Private */,
     151,    0, 1479,    2, 0x08 /* Private */,
     152,    1, 1480,    2, 0x08 /* Private */,
     153,    2, 1483,    2, 0x08 /* Private */,
     156,    0, 1488,    2, 0x08 /* Private */,
     157,    0, 1489,    2, 0x08 /* Private */,
     158,    0, 1490,    2, 0x08 /* Private */,
     159,    0, 1491,    2, 0x08 /* Private */,
     160,    0, 1492,    2, 0x08 /* Private */,
     161,    0, 1493,    2, 0x08 /* Private */,
     162,    0, 1494,    2, 0x08 /* Private */,
     163,    0, 1495,    2, 0x08 /* Private */,
     164,    0, 1496,    2, 0x08 /* Private */,
     165,    1, 1497,    2, 0x08 /* Private */,
     167,    2, 1500,    2, 0x08 /* Private */,
     170,    0, 1505,    2, 0x08 /* Private */,
     171,    0, 1506,    2, 0x08 /* Private */,
     172,    1, 1507,    2, 0x08 /* Private */,
     174,    0, 1510,    2, 0x08 /* Private */,
     175,    1, 1511,    2, 0x08 /* Private */,
     176,    0, 1514,    2, 0x08 /* Private */,
     177,    1, 1515,    2, 0x08 /* Private */,
     179,    2, 1518,    2, 0x08 /* Private */,
     181,    0, 1523,    2, 0x08 /* Private */,
     182,    1, 1524,    2, 0x08 /* Private */,
     182,    1, 1527,    2, 0x08 /* Private */,
     184,    0, 1530,    2, 0x08 /* Private */,
     185,    1, 1531,    2, 0x08 /* Private */,
     186,    0, 1534,    2, 0x08 /* Private */,
     187,    0, 1535,    2, 0x08 /* Private */,
     188,    0, 1536,    2, 0x08 /* Private */,
     189,    0, 1537,    2, 0x08 /* Private */,
     190,    0, 1538,    2, 0x08 /* Private */,
     191,    0, 1539,    2, 0x08 /* Private */,
     192,    0, 1540,    2, 0x08 /* Private */,
     193,    0, 1541,    2, 0x08 /* Private */,
     194,    0, 1542,    2, 0x08 /* Private */,
     195,    0, 1543,    2, 0x08 /* Private */,
     196,    1, 1544,    2, 0x08 /* Private */,
     197,    2, 1547,    2, 0x08 /* Private */,
     198,    0, 1552,    2, 0x08 /* Private */,
     199,    0, 1553,    2, 0x08 /* Private */,
     200,    0, 1554,    2, 0x08 /* Private */,
     201,    0, 1555,    2, 0x08 /* Private */,
     202,    2, 1556,    2, 0x08 /* Private */,
     204,    4, 1561,    2, 0x08 /* Private */,
     210,    4, 1570,    2, 0x08 /* Private */,
     211,    2, 1579,    2, 0x08 /* Private */,
     216,    3, 1584,    2, 0x08 /* Private */,
     219,    5, 1591,    2, 0x08 /* Private */,
     225,    5, 1602,    2, 0x08 /* Private */,
     230,    3, 1613,    2, 0x08 /* Private */,
     231,    2, 1620,    2, 0x08 /* Private */,
     233,    4, 1625,    2, 0x08 /* Private */,
     234,    3, 1634,    2, 0x08 /* Private */,
     237,    0, 1641,    2, 0x08 /* Private */,
     239,    0, 1642,    2, 0x08 /* Private */,
     240,    0, 1643,    2, 0x08 /* Private */,
     241,    0, 1644,    2, 0x08 /* Private */,
     242,    0, 1645,    2, 0x08 /* Private */,
     243,    0, 1646,    2, 0x08 /* Private */,
     244,    0, 1647,    2, 0x08 /* Private */,
     245,    1, 1648,    2, 0x08 /* Private */,
     247,    0, 1651,    2, 0x08 /* Private */,
     248,    0, 1652,    2, 0x08 /* Private */,
     249,    0, 1653,    2, 0x08 /* Private */,
     250,    3, 1654,    2, 0x08 /* Private */,
     254,    4, 1661,    2, 0x08 /* Private */,
     257,    1, 1670,    2, 0x08 /* Private */,
     259,    2, 1673,    2, 0x08 /* Private */,
     262,    1, 1678,    2, 0x08 /* Private */,
     263,    2, 1681,    2, 0x08 /* Private */,
     265,    1, 1686,    2, 0x08 /* Private */,
     266,    1, 1689,    2, 0x08 /* Private */,
     267,    0, 1692,    2, 0x08 /* Private */,
     268,    2, 1693,    2, 0x08 /* Private */,
     271,    0, 1698,    2, 0x08 /* Private */,
     272,    0, 1699,    2, 0x08 /* Private */,
     273,    0, 1700,    2, 0x08 /* Private */,
     274,    1, 1701,    2, 0x08 /* Private */,
     276,    2, 1704,    2, 0x08 /* Private */,
     276,    3, 1709,    2, 0x08 /* Private */,
     279,    1, 1716,    2, 0x08 /* Private */,
     281,    2, 1719,    2, 0x08 /* Private */,
     283,    0, 1724,    2, 0x08 /* Private */,
     284,    0, 1725,    2, 0x08 /* Private */,
     285,    0, 1726,    2, 0x08 /* Private */,
     286,    0, 1727,    2, 0x08 /* Private */,
     287,    0, 1728,    2, 0x08 /* Private */,
     288,    0, 1729,    2, 0x08 /* Private */,
     289,    1, 1730,    2, 0x08 /* Private */,
     290,    0, 1733,    2, 0x08 /* Private */,
     291,    0, 1734,    2, 0x08 /* Private */,
     292,    0, 1735,    2, 0x08 /* Private */,
     293,    0, 1736,    2, 0x08 /* Private */,
     294,    2, 1737,    2, 0x08 /* Private */,
     294,    1, 1742,    2, 0x28 /* Private | MethodCloned */,
     297,    2, 1745,    2, 0x08 /* Private */,
     297,    1, 1750,    2, 0x28 /* Private | MethodCloned */,
     299,    2, 1753,    2, 0x08 /* Private */,
     302,    0, 1758,    2, 0x08 /* Private */,
     303,    0, 1759,    2, 0x08 /* Private */,
     304,    0, 1760,    2, 0x08 /* Private */,
     305,    0, 1761,    2, 0x08 /* Private */,
     306,    0, 1762,    2, 0x08 /* Private */,
     307,    0, 1763,    2, 0x08 /* Private */,
     308,    0, 1764,    2, 0x08 /* Private */,
     309,    0, 1765,    2, 0x08 /* Private */,
     310,    0, 1766,    2, 0x08 /* Private */,
     311,    0, 1767,    2, 0x08 /* Private */,
     312,    0, 1768,    2, 0x08 /* Private */,
     313,    0, 1769,    2, 0x08 /* Private */,
     314,    0, 1770,    2, 0x08 /* Private */,
     315,    5, 1771,    2, 0x08 /* Private */,
     315,    4, 1782,    2, 0x28 /* Private | MethodCloned */,
     321,    1, 1791,    2, 0x08 /* Private */,
     322,    0, 1794,    2, 0x08 /* Private */,
     323,    2, 1795,    2, 0x08 /* Private */,
     328,    1, 1800,    2, 0x08 /* Private */,
     329,    1, 1803,    2, 0x08 /* Private */,
     329,    0, 1806,    2, 0x28 /* Private | MethodCloned */,
     330,    2, 1807,    2, 0x08 /* Private */,
     333,    0, 1812,    2, 0x08 /* Private */,
     334,    0, 1813,    2, 0x08 /* Private */,
     335,    0, 1814,    2, 0x08 /* Private */,
     336,    0, 1815,    2, 0x08 /* Private */,
     337,    0, 1816,    2, 0x08 /* Private */,
     338,    0, 1817,    2, 0x08 /* Private */,
     339,    0, 1818,    2, 0x08 /* Private */,
     340,    3, 1819,    2, 0x08 /* Private */,
     340,    2, 1826,    2, 0x28 /* Private | MethodCloned */,
     340,    1, 1831,    2, 0x28 /* Private | MethodCloned */,
     343,    0, 1834,    2, 0x08 /* Private */,
     344,    0, 1835,    2, 0x08 /* Private */,
     345,    3, 1836,    2, 0x08 /* Private */,
     348,    0, 1843,    2, 0x08 /* Private */,
     349,    1, 1844,    2, 0x08 /* Private */,
     351,    0, 1847,    2, 0x08 /* Private */,
     352,    0, 1848,    2, 0x08 /* Private */,
     353,    0, 1849,    2, 0x08 /* Private */,
     354,    0, 1850,    2, 0x08 /* Private */,
     355,    0, 1851,    2, 0x08 /* Private */,
     356,    0, 1852,    2, 0x08 /* Private */,
     357,    0, 1853,    2, 0x08 /* Private */,
     358,    0, 1854,    2, 0x08 /* Private */,
     359,    1, 1855,    2, 0x08 /* Private */,
     360,    0, 1858,    2, 0x08 /* Private */,
     361,    0, 1859,    2, 0x08 /* Private */,
     362,    2, 1860,    2, 0x08 /* Private */,
     365,    2, 1865,    2, 0x08 /* Private */,
     368,    0, 1870,    2, 0x08 /* Private */,
     369,    0, 1871,    2, 0x08 /* Private */,
     370,    0, 1872,    2, 0x08 /* Private */,
     371,    0, 1873,    2, 0x08 /* Private */,
     372,    0, 1874,    2, 0x08 /* Private */,
     373,    0, 1875,    2, 0x08 /* Private */,
     374,    0, 1876,    2, 0x08 /* Private */,
     375,    0, 1877,    2, 0x08 /* Private */,
     376,    0, 1878,    2, 0x08 /* Private */,
     377,    0, 1879,    2, 0x08 /* Private */,
     378,    0, 1880,    2, 0x08 /* Private */,
     379,    1, 1881,    2, 0x08 /* Private */,
     379,    0, 1884,    2, 0x28 /* Private | MethodCloned */,
     381,    0, 1885,    2, 0x08 /* Private */,
     382,    0, 1886,    2, 0x08 /* Private */,
     383,    0, 1887,    2, 0x08 /* Private */,
     384,    4, 1888,    2, 0x08 /* Private */,
     384,    3, 1897,    2, 0x28 /* Private | MethodCloned */,
     384,    2, 1904,    2, 0x28 /* Private | MethodCloned */,
     391,    0, 1909,    2, 0x08 /* Private */,
     392,    0, 1910,    2, 0x08 /* Private */,
     393,    0, 1911,    2, 0x08 /* Private */,
     394,    0, 1912,    2, 0x08 /* Private */,
     395,    0, 1913,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Int,
    0x80000000 | 12,
    0x80000000 | 14, 0x80000000 | 15, QMetaType::Bool,   16,   17,
    0x80000000 | 12,
    QMetaType::Int, QMetaType::QString,   20,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   29,   30,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 33, QMetaType::QString,   34,   35,
    0x80000000 | 37, 0x80000000 | 37, 0x80000000 | 12, QMetaType::Int, QMetaType::Bool, 0x80000000 | 42,   38,   39,   40,   41,   43,
    QMetaType::Int, 0x80000000 | 37, 0x80000000 | 37, QMetaType::QString,   45,   46,   47,
    QMetaType::QImage, 0x80000000 | 37, QMetaType::QString,   45,   47,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 50,    4,   51,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Int, QMetaType::UInt, 0x80000000 | 61, 0x80000000 | 61,   59,   60,   62,   63,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   67,
    QMetaType::Bool, 0x80000000 | 69, QMetaType::Bool,   70,   71,
    QMetaType::Bool, 0x80000000 | 69,   70,
    0x80000000 | 61, QMetaType::UChar,   73,
    QMetaType::Bool, QMetaType::UInt, QMetaType::Int,   75,   76,
    QMetaType::Void, 0x80000000 | 78,   79,
    QMetaType::Void, QMetaType::Int,   81,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   84,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 78,   79,
    QMetaType::Void, 0x80000000 | 88, 0x80000000 | 88, 0x80000000 | 91,   89,   90,   92,
    QMetaType::Void, QMetaType::Float, 0x80000000 | 95, 0x80000000 | 95, 0x80000000 | 95, 0x80000000 | 95, 0x80000000 | 91,   94,   96,   97,   98,   99,   92,
    QMetaType::Void, 0x80000000 | 101, 0x80000000 | 91,  102,  103,
    QMetaType::Void, 0x80000000 | 88,  105,
    QMetaType::Void, QMetaType::QString,  106,
    QMetaType::Void, 0x80000000 | 108,  106,
    QMetaType::Void, 0x80000000 | 88,  105,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 33, QMetaType::QString,  112,  113,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,  116,  117,  118,  119,  120,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QString,   29,   30,  123,  124,  125,  126,
    QMetaType::Void, 0x80000000 | 50, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QColor, QMetaType::QColor,   51,   29,   30,  123,  124,  125,  126,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,  130,  125,
    0x80000000 | 132, 0x80000000 | 132,  133,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,  142,  143,  144,  145,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  106,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 88,  154,  155,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  166,
    QMetaType::Void, QMetaType::QPoint, QMetaType::QPoint,  168,  169,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  173,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   81,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,  178,
    QMetaType::Void, 0x80000000 | 50, 0x80000000 | 180,   51,  125,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  106,
    QMetaType::Void, 0x80000000 | 88,  183,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  154,
    QMetaType::Float,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  106,
    QMetaType::Bool, 0x80000000 | 50, QMetaType::QString,   51,  106,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Int, QMetaType::QString,  203,  106,
    0x80000000 | 205, 0x80000000 | 205, QMetaType::Int, QMetaType::Int, QMetaType::Int,  206,  207,  208,  209,
    0x80000000 | 205, 0x80000000 | 205, QMetaType::Int, QMetaType::Int, QMetaType::Int,  206,  207,  208,  209,
    QMetaType::Double, 0x80000000 | 212, 0x80000000 | 214,  213,  215,
    0x80000000 | 205, QMetaType::Int, QMetaType::Int, 0x80000000 | 91,  217,  218,   92,
    QMetaType::Void, 0x80000000 | 205, 0x80000000 | 221, 0x80000000 | 205, 0x80000000 | 205, QMetaType::Int,  220,  222,  206,  223,  224,
    QMetaType::Void, 0x80000000 | 205, 0x80000000 | 205, 0x80000000 | 227, 0x80000000 | 205, QMetaType::Int,  223,  226,  228,  206,  229,
    0x80000000 | 205, 0x80000000 | 221, 0x80000000 | 205, QMetaType::Int,  222,  226,  224,
    0x80000000 | 205, QMetaType::QImage, QMetaType::Int,  232,  218,
    QMetaType::Void, 0x80000000 | 221, 0x80000000 | 227, 0x80000000 | 88, 0x80000000 | 91,  222,  228,  232,   92,
    QMetaType::Void, 0x80000000 | 227, QMetaType::Int, QMetaType::Int,  228,  235,  236,
    0x80000000 | 238,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  246,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 251, 0x80000000 | 37, 0x80000000 | 15, QMetaType::QString,  252,  253,   47,
    QMetaType::Int, QMetaType::Int, QMetaType::Int, 0x80000000 | 15, 0x80000000 | 69,   59,  255,  256,   70,
    QMetaType::Void, QMetaType::QString,  258,
    QMetaType::Int, QMetaType::Int, 0x80000000 | 260,   59,  261,
    QMetaType::Int, QMetaType::Int,   59,
    QMetaType::Int, QMetaType::Int, QMetaType::VoidStar,   59,  264,
    0x80000000 | 69, 0x80000000 | 69,   70,
    QMetaType::Int, QMetaType::QString,  106,
    QMetaType::Void,
    QMetaType::Int, 0x80000000 | 269, QMetaType::QString,  270,  106,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, QMetaType::QString,  275,
    QMetaType::Int, QMetaType::QString, 0x80000000 | 269,  106,  277,
    QMetaType::Int, QMetaType::QString, QMetaType::QString, 0x80000000 | 269,  106,  278,  277,
    QMetaType::Int, QMetaType::Bool,  280,
    QMetaType::Int, QMetaType::QString, QMetaType::Bool,  282,  280,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   81,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, QMetaType::QString, QMetaType::Bool,  295,  296,
    QMetaType::QString, QMetaType::QString,  295,
    QMetaType::QString, QMetaType::QString, QMetaType::Bool,  275,  298,
    QMetaType::QString, QMetaType::QString,  275,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,  300,  301,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, QMetaType::QString, QMetaType::QString, 0x80000000 | 108, 0x80000000 | 108, QMetaType::Bool,  316,  317,  318,  319,  320,
    QMetaType::Int, QMetaType::QString, QMetaType::QString, 0x80000000 | 108, 0x80000000 | 108,  316,  317,  318,  319,
    QMetaType::Bool, QMetaType::QString,  106,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 324, 0x80000000 | 326,  325,  327,
    QMetaType::Int, QMetaType::QString,  275,
    QMetaType::Void, QMetaType::Bool,  298,
    QMetaType::Void,
    QMetaType::Int, QMetaType::QString, QMetaType::QString,  331,  332,
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 108, QMetaType::Bool, QMetaType::Bool,  341,  342,  296,
    QMetaType::Void, 0x80000000 | 108, QMetaType::Bool,  341,  342,
    QMetaType::Void, 0x80000000 | 108,  341,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::QColor,  346,  347,  125,
    QMetaType::Void,
    QMetaType::Int, QMetaType::QString,  350,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   35,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, 0x80000000 | 108, 0x80000000 | 363,   35,  364,
    QMetaType::Int, 0x80000000 | 108, 0x80000000 | 366,   35,  367,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, QMetaType::Bool,  380,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 385, 0x80000000 | 387, QMetaType::Bool, QMetaType::Bool,  386,  388,  389,  390,
    QMetaType::Void, 0x80000000 | 385, 0x80000000 | 387, QMetaType::Bool,  386,  388,  389,
    QMetaType::Void, 0x80000000 | 385, 0x80000000 | 387,  386,  388,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->funcAddPoint((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 1: _t->addRect2Calib((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->addCircle2Calib((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->addHorLine2Calib((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->addVertLine2Calib((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: { int _r = _t->getCamMP();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 6: { structCamSelected* _r = _t->getCameraSelected();
            if (_a[0]) *reinterpret_cast< structCamSelected**>(_a[0]) = std::move(_r); }  break;
        case 7: { u_int8_t** _r = _t->funcGetSLIDESnapshot((*reinterpret_cast< int*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< u_int8_t***>(_a[0]) = std::move(_r); }  break;
        case 8: { structCamSelected* _r = _t->funcGetCamSelected();
            if (_a[0]) *reinterpret_cast< structCamSelected**>(_a[0]) = std::move(_r); }  break;
        case 9: { int _r = _t->funcVideoToFrames((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->processEndOfPlayer((*reinterpret_cast< QMediaPlayer::MediaStatus(*)>(_a[1]))); break;
        case 11: _t->funcHideBarAndLabel(); break;
        case 12: _t->processFrame((*reinterpret_cast< QVideoFrame(*)>(_a[1]))); break;
        case 13: _t->funcDrawSpectralPixelIntoSmall((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->funcMouseMoveReaction((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 15: _t->funcLoadImageIntoGaphView((*reinterpret_cast< QGraphicsView*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 16: { std::string _r = _t->funcRemoteTerminalCommand((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< structCamSelected*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< std::string*>(_a[0]) = std::move(_r); }  break;
        case 17: { int _r = _t->obtainFile((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 18: { QImage _r = _t->obtainImageFile((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = std::move(_r); }  break;
        case 19: _t->funcEndRect((*reinterpret_cast< QMouseEvent*(*)>(_a[1])),(*reinterpret_cast< GraphicsView*(*)>(_a[2]))); break;
        case 20: _t->funcCalibMouseRelease((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 21: _t->funcSpectMouseRelease((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 22: _t->on_actionExit_triggered(); break;
        case 23: _t->on_pbAddIp_clicked(); break;
        case 24: _t->on_pbSearchAll_clicked(); break;
        case 25: _t->on_pbSendComm_clicked(); break;
        case 26: { bool _r = _t->funcReceiveFile((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< unsigned char*(*)>(_a[3])),(*reinterpret_cast< unsigned char*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 27: _t->funcActivateProgBar(); break;
        case 28: _t->on_pbConnect_clicked(); break;
        case 29: _t->progBarTimer((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: { bool _r = _t->funcGetRemoteImg((*reinterpret_cast< strReqImg*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 31: { bool _r = _t->funcGetRemoteImg((*reinterpret_cast< strReqImg*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 32: { unsigned char* _r = _t->funcObtVideo((*reinterpret_cast< unsigned char(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< unsigned char**>(_a[0]) = std::move(_r); }  break;
        case 33: { bool _r = _t->funcUpdateVideo((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 34: _t->funcIniCamParam((*reinterpret_cast< structRaspcamSettings*(*)>(_a[1]))); break;
        case 35: _t->on_slideISO_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->on_pbSaveRaspParam_clicked(); break;
        case 37: { bool _r = _t->saveRaspCamSettings((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 38: _t->on_pbObtPar_clicked(); break;
        case 39: { bool _r = _t->funcSetCam((*reinterpret_cast< structRaspcamSettings*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 40: _t->mergeSnapshot((*reinterpret_cast< QImage*(*)>(_a[1])),(*reinterpret_cast< QImage*(*)>(_a[2])),(*reinterpret_cast< lstDoubleAxisCalibration*(*)>(_a[3]))); break;
        case 41: _t->calcDiffPoints((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< strDiffProj*(*)>(_a[2])),(*reinterpret_cast< strDiffProj*(*)>(_a[3])),(*reinterpret_cast< strDiffProj*(*)>(_a[4])),(*reinterpret_cast< strDiffProj*(*)>(_a[5])),(*reinterpret_cast< lstDoubleAxisCalibration*(*)>(_a[6]))); break;
        case 42: _t->getMaxCalibRect((*reinterpret_cast< QRect*(*)>(_a[1])),(*reinterpret_cast< lstDoubleAxisCalibration*(*)>(_a[2]))); break;
        case 43: _t->updateDisplayImage((*reinterpret_cast< QImage*(*)>(_a[1]))); break;
        case 44: _t->updateDisplayImage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 45: _t->updatePreviewImage((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 46: _t->updatePreviewImage((*reinterpret_cast< QImage*(*)>(_a[1]))); break;
        case 47: _t->on_pbSnapshot_clicked(); break;
        case 48: _t->funcGetSnapshot(); break;
        case 49: _t->funcPutImageIntoGV((*reinterpret_cast< QGraphicsView*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 50: { bool _r = _t->funcUpdatePolitope();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 51: _t->funcCreateLine((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 52: _t->funcFillFigure(); break;
        case 53: _t->funcDrawPointIntoCanvas((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6]))); break;
        case 54: _t->funcAddPoit2Graph((*reinterpret_cast< GraphicsView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< QColor(*)>(_a[6])),(*reinterpret_cast< QColor(*)>(_a[7]))); break;
        case 55: _t->funcLabelProgBarHide(); break;
        case 56: _t->progBarUpdateLabel((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 57: { structRaspcamSettings _r = _t->funcFillSnapshotSettings((*reinterpret_cast< structRaspcamSettings(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< structRaspcamSettings*>(_a[0]) = std::move(_r); }  break;
        case 58: _t->on_pbSpecSnapshot_clicked(); break;
        case 59: _t->on_chbRed_clicked(); break;
        case 60: _t->funcUpdateColorSensibilities(); break;
        case 61: _t->funcBeginRect((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 62: _t->on_pbSpecCut_clicked(); break;
        case 63: _t->on_chbGreen_clicked(); break;
        case 64: _t->on_chbBlue_clicked(); break;
        case 65: _t->funcDrawLines((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 66: _t->on_slideRedLen_sliderReleased(); break;
        case 67: _t->on_slideBlueLen_sliderReleased(); break;
        case 68: _t->on_slideGreenLen_sliderReleased(); break;
        case 69: _t->on_pbViewBack_clicked(); break;
        case 70: _t->on_pbSnapCal_clicked(); break;
        case 71: _t->updateCalibLine(); break;
        case 72: _t->refreshGvCalib((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 73: _t->funcImgThreshold((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QImage*(*)>(_a[2]))); break;
        case 74: _t->on_pbSpecLoadSnap_clicked(); break;
        case 75: _t->on_actionRect_triggered(); break;
        case 76: _t->on_actionHorizontalLine_triggered(); break;
        case 77: _t->on_actionCircle_triggered(); break;
        case 78: _t->on_actionVerticalLine_triggered(); break;
        case 79: _t->on_actionClear_triggered(); break;
        case 80: _t->clearFreeHandPoligon(); break;
        case 81: _t->clearRectangle(); break;
        case 82: _t->on_actionSelection_triggered(); break;
        case 83: _t->ResetGraphToolBar((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 84: _t->funcAnalizeAreaSelected((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< QPoint(*)>(_a[2]))); break;
        case 85: _t->disableAllToolBars(); break;
        case 86: _t->on_actionDrawToolbar_triggered(); break;
        case 87: _t->on_pbExpPixs_tabBarClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 88: _t->on_actionDoubAxisDiff_triggered(); break;
        case 89: _t->on_slideTriggerTime_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 90: _t->on_actionRotateImg_triggered(); break;
        case 91: _t->doImgRotation((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 92: _t->DrawVerAndHorLines((*reinterpret_cast< GraphicsView*(*)>(_a[1])),(*reinterpret_cast< Qt::GlobalColor(*)>(_a[2]))); break;
        case 93: _t->on_actionLoadCanvas_triggered(); break;
        case 94: _t->updateImageCanvasEdit((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 95: _t->updateImageCanvasEdit((*reinterpret_cast< QImage*(*)>(_a[1]))); break;
        case 96: _t->on_actionApplyThreshold_triggered(); break;
        case 97: _t->applyThreshol2Scene((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 98: { float _r = _t->getLastAngle();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 99: _t->on_actionLoadSquareRectangle_triggered(); break;
        case 100: _t->on_actionLoadRegOfInteres_triggered(); break;
        case 101: _t->on_actionToolPenArea_triggered(); break;
        case 102: _t->mouseCursorHand(); break;
        case 103: _t->mouseCursorCross(); break;
        case 104: _t->mouseCursorWait(); break;
        case 105: _t->mouseCursorReset(); break;
        case 106: _t->on_actionSend_to_XYZ_triggered(); break;
        case 107: _t->on_actionSaveCanvas_triggered(); break;
        case 108: _t->saveCalib((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 109: { bool _r = _t->saveCanvas((*reinterpret_cast< GraphicsView*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 110: _t->on_actionExportPixelsSelected_triggered(); break;
        case 111: _t->on_pbLANConnect_clicked(); break;
        case 112: _t->on_pbLANTestConn_clicked(); break;
        case 113: _t->on_actionGenHypercube_triggered(); break;
        case 114: { bool _r = _t->generatesHypcube((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 115: { double* _r = _t->demosaiseF2D((*reinterpret_cast< double*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< double**>(_a[0]) = std::move(_r); }  break;
        case 116: { double* _r = _t->demosaiseF3D((*reinterpret_cast< double*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< double**>(_a[0]) = std::move(_r); }  break;
        case 117: { double _r = _t->calcTrilinearInterpolation((*reinterpret_cast< double***(*)>(_a[1])),(*reinterpret_cast< trilinear*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 118: { double* _r = _t->calculatesF((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< lstDoubleAxisCalibration*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< double**>(_a[0]) = std::move(_r); }  break;
        case 119: _t->improveF((*reinterpret_cast< double*(*)>(_a[1])),(*reinterpret_cast< pixel**(*)>(_a[2])),(*reinterpret_cast< double*(*)>(_a[3])),(*reinterpret_cast< double*(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 120: _t->createsGTmp((*reinterpret_cast< double*(*)>(_a[1])),(*reinterpret_cast< double*(*)>(_a[2])),(*reinterpret_cast< int**(*)>(_a[3])),(*reinterpret_cast< double*(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 121: { double* _r = _t->createsF0((*reinterpret_cast< pixel**(*)>(_a[1])),(*reinterpret_cast< double*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< double**>(_a[0]) = std::move(_r); }  break;
        case 122: { double* _r = _t->serializeImageToProccess((*reinterpret_cast< QImage(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< double**>(_a[0]) = std::move(_r); }  break;
        case 123: _t->createsHColAndHrow((*reinterpret_cast< pixel**(*)>(_a[1])),(*reinterpret_cast< int**(*)>(_a[2])),(*reinterpret_cast< QImage*(*)>(_a[3])),(*reinterpret_cast< lstDoubleAxisCalibration*(*)>(_a[4]))); break;
        case 124: _t->insertItemIntoRow((*reinterpret_cast< int**(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 125: { QList<double> _r = _t->getWavesChoised();
            if (_a[0]) *reinterpret_cast< QList<double>*>(_a[0]) = std::move(_r); }  break;
        case 126: _t->on_actionValidCal_triggered(); break;
        case 127: _t->on_actionValCal_triggered(); break;
        case 128: _t->on_actionSquareUsable_triggered(); break;
        case 129: _t->on_actionChoseWavelength_triggered(); break;
        case 130: _t->on_actionFittFunction_triggered(); break;
        case 131: _t->on_actionShow_hypercube_triggered(); break;
        case 132: _t->extractsHyperCube((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 133: _t->on_actionBilinear_interpolation_triggered(); break;
        case 134: _t->on_pbCopyShutter_clicked(); break;
        case 135: _t->on_actionslideHypCam_triggered(); break;
        case 136: { u_int8_t* _r = _t->funcQtReceiveFile((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< u_int8_t**>(_a[0]) = std::move(_r); }  break;
        case 137: { int _r = _t->funcReceiveFrame((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int*(*)>(_a[3])),(*reinterpret_cast< strReqImg*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 138: _t->funcDebug((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 139: { int _r = _t->funcRequestSubframe((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< strReqSubframe*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 140: { int _r = _t->funcReceiveACK((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 141: { int _r = _t->funcReceiveOneMessage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 142: { strReqImg* _r = _t->funcFillSLIDESettings((*reinterpret_cast< strReqImg*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< strReqImg**>(_a[0]) = std::move(_r); }  break;
        case 143: { int _r = _t->funcDrawRectangleFromXML((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 144: _t->on_pbDrawSlide_triggered(); break;
        case 145: { int _r = _t->saveRectangleAs((*reinterpret_cast< squareAperture*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 146: _t->on_actionSlide_settings_triggered(); break;
        case 147: _t->on_pbShutdown_clicked(); break;
        case 148: _t->on_pbSnapVid_clicked(); break;
        case 149: { int _r = _t->funcUpdateImageFromFolder((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 150: { int _r = _t->rectangleInPixelsFromSquareXML((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< squareAperture*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 151: { int _r = _t->rectangleInPixelsFromSquareXML((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< squareAperture*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 152: { int _r = _t->createSubimageRemotelly((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 153: { int _r = _t->takeRemoteSnapshot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 154: _t->on_pbSnapshotSquare_clicked(); break;
        case 155: _t->on_pbSaveImage_clicked(); break;
        case 156: _t->funcResetStatusBar(); break;
        case 157: _t->on_pbOneShotSnapshot_clicked(); break;
        case 158: _t->on_actionsquareSettings_triggered(); break;
        case 159: _t->on_pbSelectFolder_clicked(); break;
        case 160: _t->on_slideChangeImage_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 161: _t->funcDrawPlotLimits(); break;
        case 162: _t->on_actionvideoToFrames_triggered(); break;
        case 163: _t->on_actionframesToCube_triggered(); break;
        case 164: _t->on_pbTimeLapse_clicked(); break;
        case 165: { QString _r = _t->genRemoteVideoCommand((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 166: { QString _r = _t->genRemoteVideoCommand((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 167: { QString _r = _t->genTimelapseCommand((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 168: { QString _r = _t->genTimelapseCommand((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 169: { QString _r = _t->genSubareaRaspistillCommand((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 170: _t->on_actionRGB_to_XY_triggered(); break;
        case 171: _t->on_actionNDVI_triggered(); break;
        case 172: _t->on_actionNDVI_Algorithm_triggered(); break;
        case 173: _t->on_actionFull_Screen_triggered(); break;
        case 174: _t->on_actionDisplay_Original_triggered(); break;
        case 175: _t->on_actionFull_photo_triggered(); break;
        case 176: _t->on_actionDiffraction_triggered(); break;
        case 177: _t->on_actionComposed_triggered(); break;
        case 178: _t->on_actionVideo_triggered(); break;
        case 179: _t->on_actionTimelapse_triggered(); break;
        case 180: _t->on_actionSave_triggered(); break;
        case 181: _t->on_actionSlideDiffraction_triggered(); break;
        case 182: _t->on_actionObtain_Folder_triggered(); break;
        case 183: { int _r = _t->obtainRemoteFolder((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString*(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 184: { int _r = _t->obtainRemoteFolder((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString*(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 185: { bool _r = _t->funcRemoveRemoteFile((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 186: _t->on_actionSlide_Build_Hypercube_triggered(); break;
        case 187: _t->buildHypercubeFromFilelist((*reinterpret_cast< QList<QFileInfo>(*)>(_a[1])),(*reinterpret_cast< structSlideHypCube(*)>(_a[2]))); break;
        case 188: { int _r = _t->funcAccountFilesInFolder((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 189: _t->funcStartRemoteTimelapse((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 190: _t->funcStartRemoteTimelapse(); break;
        case 191: { int _r = _t->funcValidateFileDirNameDuplicated((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 192: { QString _r = _t->funcGetSyncFolder();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 193: _t->on_actionVideo_2_triggered(); break;
        case 194: _t->on_actionTimelapse_2_triggered(); break;
        case 195: _t->on_actionSnapvideos_triggered(); break;
        case 196: _t->on_actionSnapshot_triggered(); break;
        case 197: _t->on_actionSynchronize_triggered(); break;
        case 198: _t->on_actionSync_Folder_triggered(); break;
        case 199: _t->funcMainCall_RecordVideo((*reinterpret_cast< QString*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 200: _t->funcMainCall_RecordVideo((*reinterpret_cast< QString*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 201: _t->funcMainCall_RecordVideo((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 202: _t->funcMainCall_GetSnapshot(); break;
        case 203: _t->on_actionFull_Video_triggered(); break;
        case 204: { int _r = _t->funcDisplayTimer((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QColor(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 205: _t->on_actionMultiImageAverage_triggered(); break;
        case 206: { int _r = _t->func_MultiImageMerge((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 207: _t->on_actionMultiImageMinimum_triggered(); break;
        case 208: _t->on_actionMultiImageMaximum_triggered(); break;
        case 209: _t->on_actionSlide_Settings_triggered(); break;
        case 210: _t->on_actionLinear_Regression_triggered(); break;
        case 211: _t->on_actionDiffraction_Origin_triggered(); break;
        case 212: _t->on_openLine_triggered(); break;
        case 213: _t->on_actionSlide_Linear_Regression_triggered(); break;
        case 214: _t->on_actionarcLine_triggered(); break;
        case 215: { bool _r = _t->funcDrawLineIntoCanvasEdit((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 216: _t->on_actionPlot_Calculated_Line_triggered(); break;
        case 217: _t->on_actionPlot_Upper_Line_Rotation_triggered(); break;
        case 218: { int _r = _t->funcReadVerticalCalibration((*reinterpret_cast< QString*(*)>(_a[1])),(*reinterpret_cast< structVerticalCalibration*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 219: { int _r = _t->funcReadHorizCalibration((*reinterpret_cast< QString*(*)>(_a[1])),(*reinterpret_cast< structHorizontalCalibration*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 220: _t->on_actionOrigin_triggered(); break;
        case 221: _t->on_actionBuld_HypImg_triggered(); break;
        case 222: _t->on_actionMerge_Calibration_triggered(); break;
        case 223: _t->on_actionPlot_over_Real_triggered(); break;
        case 224: _t->on_actionPlot_Line_at_Wavelength_triggered(); break;
        case 225: _t->on_actionSlide_Calibration_File_triggered(); break;
        case 226: _t->on_actionMerge_into_RGB_triggered(); break;
        case 227: _t->on_actionApply_Rotation_triggered(); break;
        case 228: _t->on_actionApply_Transformation_triggered(); break;
        case 229: _t->on_actionRestore_Original_triggered(); break;
        case 230: _t->on_actionExtract_frames_2_triggered(); break;
        case 231: { int _r = _t->funcExtractFramesFromH264((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 232: { int _r = _t->funcExtractFramesFromH264();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 233: _t->on_actionSlide_Max_Wavelength_triggered(); break;
        case 234: _t->on_actionBuild_HypCube_triggered(); break;
        case 235: _t->on_actionBuild_HypCube_2_triggered(); break;
        case 236: _t->funcOpticalCorrection((*reinterpret_cast< QList<QImage>*(*)>(_a[1])),(*reinterpret_cast< structSlideCalibration*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 237: _t->funcOpticalCorrection((*reinterpret_cast< QList<QImage>*(*)>(_a[1])),(*reinterpret_cast< structSlideCalibration*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 238: _t->funcOpticalCorrection((*reinterpret_cast< QList<QImage>*(*)>(_a[1])),(*reinterpret_cast< structSlideCalibration*(*)>(_a[2]))); break;
        case 239: _t->on_actionSlide_HypCube_Building_triggered(); break;
        case 240: _t->on_actionCamera_Sensitivities_triggered(); break;
        case 241: _t->on_actionCalc_Sensitivities_triggered(); break;
        case 242: _t->on_actionSlide_Min_Wavelength_triggered(); break;
        case 243: _t->on_actionHypCube_From_H264_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::MediaStatus >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoFrame >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsView* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GraphicsView* >(); break;
            }
            break;
        case 49:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsView* >(); break;
            }
            break;
        case 54:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GraphicsView* >(); break;
            }
            break;
        case 92:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GraphicsView* >(); break;
            }
            break;
        case 109:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GraphicsView* >(); break;
            }
            break;
        case 187:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QFileInfo> >(); break;
            }
            break;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 244)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 244;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 244)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 244;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
