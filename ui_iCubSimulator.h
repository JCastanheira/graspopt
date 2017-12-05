/********************************************************************************
** Form generated from reading UI file 'iCubSimulator.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ICUBSIMULATOR_H
#define UI_ICUBSIMULATOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowShowRobot
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *frameViewer;
    QGroupBox *groupBox;
    QPushButton *pushButtonReset;
    QPushButton *pushButtonLoadHand;
    QGroupBox *groupBox_3;
    QLabel *label_2;
    QLCDNumber *lcdNumberJointValue;
    QSlider *horizontalSliderPos;
    QLabel *labelMinPos;
    QLabel *labelMaxPos;
    QComboBox *comboBoxJoint;
    QComboBox *comboBoxRobotNodeSet;
    QLabel *label_3;
    QLabel *label_4;
    QGroupBox *groupBox_9;
    QComboBox *comboBoxMoveHand;
    QSlider *moveHandSlider1;
    QSlider *moveHandSlider2;
    QSlider *moveHandSlider3;
    QSlider *moveHandSlider4;
    QSlider *moveHandSlider5;
    QSlider *moveHandSlider6;
    QGroupBox *groupBox_8;
    QComboBox *comboBoxGrasp;
    QSlider *graspSlider1;
    QSlider *graspSlider2;
    QSlider *graspSlider3;
    QSlider *graspSlider4;
    QSlider *graspSlider5;
    QSlider *graspSlider6;
    QSlider *graspSlider7;
    QSlider *graspSlider8;
    QSlider *graspSlider9;
    QPushButton *pushButtonGraspReset;
    QPushButton *pushButtonCloseGrasp;
    QPushButton *pushButtonMoveObject;
    QPushButton *pushButtonGraspOpt;
    QPushButton *pushButtonMetric;
    QComboBox *comboBoxGraspOpt;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowShowRobot)
    {
        if (MainWindowShowRobot->objectName().isEmpty())
            MainWindowShowRobot->setObjectName(QString::fromUtf8("MainWindowShowRobot"));
        MainWindowShowRobot->resize(1024, 728);
        centralwidget = new QWidget(MainWindowShowRobot);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frameViewer = new QFrame(centralwidget);
        frameViewer->setObjectName(QString::fromUtf8("frameViewer"));
        frameViewer->setFrameShape(QFrame::StyledPanel);
        frameViewer->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frameViewer, 0, 0, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(200, 16777215));
        pushButtonReset = new QPushButton(groupBox);
        pushButtonReset->setObjectName(QString::fromUtf8("pushButtonReset"));
        pushButtonReset->setGeometry(QRect(20, 30, 171, 28));
        pushButtonLoadHand = new QPushButton(groupBox);
        pushButtonLoadHand->setObjectName(QString::fromUtf8("pushButtonLoadHand"));
        pushButtonLoadHand->setGeometry(QRect(20, 0, 171, 28));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 1100, 201, 231));
        groupBox_3->setFlat(false);
        groupBox_3->setCheckable(false);
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(15, 1130, 81, 16));
        lcdNumberJointValue = new QLCDNumber(groupBox_3);
        lcdNumberJointValue->setObjectName(QString::fromUtf8("lcdNumberJointValue"));
        lcdNumberJointValue->setGeometry(QRect(90, 1120, 101, 31));
        lcdNumberJointValue->setSmallDecimalPoint(true);
        lcdNumberJointValue->setDigitCount(5);
        lcdNumberJointValue->setProperty("value", QVariant(0));
        horizontalSliderPos = new QSlider(groupBox_3);
        horizontalSliderPos->setObjectName(QString::fromUtf8("horizontalSliderPos"));
        horizontalSliderPos->setGeometry(QRect(10, 1160, 181, 20));
        horizontalSliderPos->setMaximum(1000);
        horizontalSliderPos->setPageStep(50);
        horizontalSliderPos->setOrientation(Qt::Horizontal);
        labelMinPos = new QLabel(groupBox_3);
        labelMinPos->setObjectName(QString::fromUtf8("labelMinPos"));
        labelMinPos->setGeometry(QRect(10, 1180, 91, 21));
        labelMaxPos = new QLabel(groupBox_3);
        labelMaxPos->setObjectName(QString::fromUtf8("labelMaxPos"));
        labelMaxPos->setGeometry(QRect(110, 1180, 81, 20));
        labelMaxPos->setLayoutDirection(Qt::RightToLeft);
        comboBoxJoint = new QComboBox(groupBox_3);
        comboBoxJoint->setObjectName(QString::fromUtf8("comboBoxJoint"));
        comboBoxJoint->setGeometry(QRect(10, 90, 181, 22));
        comboBoxRobotNodeSet = new QComboBox(groupBox_3);
        comboBoxRobotNodeSet->setObjectName(QString::fromUtf8("comboBoxRobotNodeSet"));
        comboBoxRobotNodeSet->setGeometry(QRect(10, 40, 181, 22));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 20, 131, 16));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 1070, 131, 16));
        groupBox_9 = new QGroupBox(groupBox);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setGeometry(QRect(0, 60, 201, 231));
        comboBoxMoveHand = new QComboBox(groupBox_9);
        comboBoxMoveHand->setObjectName(QString::fromUtf8("comboBoxMoveHand"));
        comboBoxMoveHand->setGeometry(QRect(10, 20, 181, 22));
        moveHandSlider1 = new QSlider(groupBox_9);
        moveHandSlider1->setObjectName(QString::fromUtf8("moveHandSlider1"));
        moveHandSlider1->setGeometry(QRect(10, 40, 181, 20));
        moveHandSlider1->setMaximum(1000);
        moveHandSlider1->setPageStep(50);
        moveHandSlider1->setOrientation(Qt::Horizontal);
        moveHandSlider2 = new QSlider(groupBox_9);
        moveHandSlider2->setObjectName(QString::fromUtf8("moveHandSlider2"));
        moveHandSlider2->setGeometry(QRect(10, 60, 181, 20));
        moveHandSlider2->setMaximum(1000);
        moveHandSlider2->setPageStep(50);
        moveHandSlider2->setOrientation(Qt::Horizontal);
        moveHandSlider3 = new QSlider(groupBox_9);
        moveHandSlider3->setObjectName(QString::fromUtf8("moveHandSlider3"));
        moveHandSlider3->setGeometry(QRect(10, 80, 181, 20));
        moveHandSlider3->setMaximum(1000);
        moveHandSlider3->setPageStep(50);
        moveHandSlider3->setOrientation(Qt::Horizontal);
        moveHandSlider4 = new QSlider(groupBox_9);
        moveHandSlider4->setObjectName(QString::fromUtf8("moveHandSlider4"));
        moveHandSlider4->setGeometry(QRect(10, 100, 181, 20));
        moveHandSlider4->setMaximum(1000);
        moveHandSlider4->setPageStep(50);
        moveHandSlider4->setOrientation(Qt::Horizontal);
        moveHandSlider5 = new QSlider(groupBox_9);
        moveHandSlider5->setObjectName(QString::fromUtf8("moveHandSlider5"));
        moveHandSlider5->setGeometry(QRect(10, 120, 181, 20));
        moveHandSlider5->setMaximum(1000);
        moveHandSlider5->setPageStep(50);
        moveHandSlider5->setOrientation(Qt::Horizontal);
        moveHandSlider6 = new QSlider(groupBox_9);
        moveHandSlider6->setObjectName(QString::fromUtf8("moveHandSlider6"));
        moveHandSlider6->setGeometry(QRect(10, 140, 181, 20));
        moveHandSlider6->setMaximum(1000);
        moveHandSlider6->setPageStep(50);
        moveHandSlider6->setOrientation(Qt::Horizontal);
        groupBox_8 = new QGroupBox(groupBox);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(0, 220, 201, 400));
        comboBoxGrasp = new QComboBox(groupBox_8);
        comboBoxGrasp->setObjectName(QString::fromUtf8("comboBoxGrasp"));
        comboBoxGrasp->setGeometry(QRect(10, 20, 181, 22));
        graspSlider1 = new QSlider(groupBox_8);
        graspSlider1->setObjectName(QString::fromUtf8("graspSlider1"));
        graspSlider1->setGeometry(QRect(10, 40, 181, 20));
        graspSlider1->setMaximum(1000);
        graspSlider1->setPageStep(50);
        graspSlider1->setOrientation(Qt::Horizontal);
        graspSlider2 = new QSlider(groupBox_8);
        graspSlider2->setObjectName(QString::fromUtf8("graspSlider2"));
        graspSlider2->setGeometry(QRect(10, 60, 181, 20));
        graspSlider2->setMaximum(1000);
        graspSlider2->setPageStep(50);
        graspSlider2->setOrientation(Qt::Horizontal);
        graspSlider3 = new QSlider(groupBox_8);
        graspSlider3->setObjectName(QString::fromUtf8("graspSlider3"));
        graspSlider3->setGeometry(QRect(10, 80, 181, 20));
        graspSlider3->setMaximum(1000);
        graspSlider3->setPageStep(50);
        graspSlider3->setOrientation(Qt::Horizontal);
        graspSlider4 = new QSlider(groupBox_8);
        graspSlider4->setObjectName(QString::fromUtf8("graspSlider4"));
        graspSlider4->setGeometry(QRect(10, 100, 181, 20));
        graspSlider4->setMaximum(1000);
        graspSlider4->setPageStep(50);
        graspSlider4->setOrientation(Qt::Horizontal);
        graspSlider5 = new QSlider(groupBox_8);
        graspSlider5->setObjectName(QString::fromUtf8("graspSlider5"));
        graspSlider5->setGeometry(QRect(10, 120, 181, 20));
        graspSlider5->setMaximum(1000);
        graspSlider5->setPageStep(50);
        graspSlider5->setOrientation(Qt::Horizontal);
        graspSlider6 = new QSlider(groupBox_8);
        graspSlider6->setObjectName(QString::fromUtf8("graspSlider6"));
        graspSlider6->setGeometry(QRect(10, 140, 181, 20));
        graspSlider6->setMaximum(1000);
        graspSlider6->setPageStep(50);
        graspSlider6->setOrientation(Qt::Horizontal);
        graspSlider7 = new QSlider(groupBox_8);
        graspSlider7->setObjectName(QString::fromUtf8("graspSlider7"));
        graspSlider7->setGeometry(QRect(10, 160, 181, 20));
        graspSlider7->setMaximum(1000);
        graspSlider7->setPageStep(50);
        graspSlider7->setOrientation(Qt::Horizontal);
        graspSlider8 = new QSlider(groupBox_8);
        graspSlider8->setObjectName(QString::fromUtf8("graspSlider8"));
        graspSlider8->setGeometry(QRect(10, 180, 181, 20));
        graspSlider8->setMaximum(1000);
        graspSlider8->setPageStep(50);
        graspSlider8->setOrientation(Qt::Horizontal);
        graspSlider9 = new QSlider(groupBox_8);
        graspSlider9->setObjectName(QString::fromUtf8("graspSlider9"));
        graspSlider9->setGeometry(QRect(10, 200, 181, 20));
        graspSlider9->setMaximum(1000);
        graspSlider9->setPageStep(50);
        graspSlider9->setOrientation(Qt::Horizontal);
        pushButtonGraspReset = new QPushButton(groupBox_8);
        pushButtonGraspReset->setObjectName(QString::fromUtf8("pushButtonGraspReset"));
        pushButtonGraspReset->setGeometry(QRect(20, 220, 171, 20));
        pushButtonCloseGrasp = new QPushButton(groupBox_8);
        pushButtonCloseGrasp->setObjectName(QString::fromUtf8("pushButtonCloseGrasp"));
        pushButtonCloseGrasp->setGeometry(QRect(20, 240, 171, 20));
        pushButtonMoveObject = new QPushButton(groupBox_8);
        pushButtonMoveObject->setObjectName(QString::fromUtf8("pushButtonMoveObject"));
        pushButtonMoveObject->setGeometry(QRect(20, 260, 171, 20));
        pushButtonGraspOpt = new QPushButton(groupBox_8);
        pushButtonGraspOpt->setObjectName(QString::fromUtf8("pushButtonGraspOpt"));
        pushButtonGraspOpt->setGeometry(QRect(20, 280, 171, 20));
        pushButtonMetric = new QPushButton(groupBox_8);
        pushButtonMetric->setObjectName(QString::fromUtf8("pushButtonMetric"));
        pushButtonMetric->setGeometry(QRect(20, 300, 171, 20));
        comboBoxGraspOpt = new QComboBox(groupBox_8);
        comboBoxGraspOpt->setObjectName(QString::fromUtf8("comboBoxGraspOpt"));
        comboBoxGraspOpt->setGeometry(QRect(10, 320, 181, 22));

        gridLayout->addWidget(groupBox, 0, 1, 1, 1);

        MainWindowShowRobot->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowShowRobot);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1114, 21));
        MainWindowShowRobot->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowShowRobot);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindowShowRobot->setStatusBar(statusbar);

        retranslateUi(MainWindowShowRobot);

        QMetaObject::connectSlotsByName(MainWindowShowRobot);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowShowRobot)
    {
        MainWindowShowRobot->setWindowTitle(QApplication::translate("MainWindowShowRobot", "Simox - VirtualRobot - Show Robot", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        pushButtonReset->setText(QApplication::translate("MainWindowShowRobot", "Reset", 0, QApplication::UnicodeUTF8));
        pushButtonLoadHand->setText(QApplication::translate("MainWindowShowRobot", "Load Hand", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("MainWindowShowRobot", "Joints", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindowShowRobot", "Joint Value", 0, QApplication::UnicodeUTF8));
        labelMinPos->setText(QApplication::translate("MainWindowShowRobot", "-1.57", 0, QApplication::UnicodeUTF8));
        labelMaxPos->setText(QApplication::translate("MainWindowShowRobot", "1.57", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindowShowRobot", "Select RobotNodeSet", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindowShowRobot", "Select RobotNode", 0, QApplication::UnicodeUTF8));
        groupBox_9->setTitle(QApplication::translate("MainWindowShowRobot", "Move Hand", 0, QApplication::UnicodeUTF8));
        groupBox_8->setTitle(QApplication::translate("MainWindowShowRobot", "Grasps", 0, QApplication::UnicodeUTF8));
        pushButtonGraspReset->setText(QApplication::translate("MainWindowShowRobot", "Reset", 0, QApplication::UnicodeUTF8));
        pushButtonCloseGrasp->setText(QApplication::translate("MainWindowShowRobot", "Close Grasp", 0, QApplication::UnicodeUTF8));
        pushButtonMoveObject->setText(QApplication::translate("MainWindowShowRobot", "Object", 0, QApplication::UnicodeUTF8));
        pushButtonGraspOpt->setText(QApplication::translate("MainWindowShowRobot", "GraspOptimization", 0, QApplication::UnicodeUTF8));
        pushButtonMetric->setText(QApplication::translate("MainWindowShowRobot", "Metric Test", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindowShowRobot: public Ui_MainWindowShowRobot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ICUBSIMULATOR_H
