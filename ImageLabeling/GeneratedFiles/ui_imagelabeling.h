/********************************************************************************
** Form generated from reading UI file 'imagelabeling.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGELABELING_H
#define UI_IMAGELABELING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "imagedisplay.h"

QT_BEGIN_NAMESPACE

class Ui_ImageLabelingClass
{
public:
    QAction *actionLoad;
    QAction *actionSave;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *listWidget;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *cleanButton;
    QPushButton *dentButton;
    QPushButton *crackButton;
    QPushButton *othersButton;
    QVBoxLayout *verticalLayout_2;
    imageDisplay *image_frame;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menuBar;
    QMenu *menuSetting;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *ImageLabelingClass)
    {
        if (ImageLabelingClass->objectName().isEmpty())
            ImageLabelingClass->setObjectName(QString::fromUtf8("ImageLabelingClass"));
        ImageLabelingClass->resize(943, 542);
        actionLoad = new QAction(ImageLabelingClass);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        actionSave = new QAction(ImageLabelingClass);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        centralWidget = new QWidget(ImageLabelingClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        listWidget = new QListWidget(centralWidget);
        new QListWidgetItem(listWidget);
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setFont(font);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(listWidget);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cleanButton = new QPushButton(groupBox);
        cleanButton->setObjectName(QString::fromUtf8("cleanButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cleanButton->sizePolicy().hasHeightForWidth());
        cleanButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(cleanButton, 1, 0, 1, 1);

        dentButton = new QPushButton(groupBox);
        dentButton->setObjectName(QString::fromUtf8("dentButton"));
        sizePolicy2.setHeightForWidth(dentButton->sizePolicy().hasHeightForWidth());
        dentButton->setSizePolicy(sizePolicy2);
        dentButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(dentButton, 0, 1, 1, 1);

        crackButton = new QPushButton(groupBox);
        crackButton->setObjectName(QString::fromUtf8("crackButton"));
        sizePolicy2.setHeightForWidth(crackButton->sizePolicy().hasHeightForWidth());
        crackButton->setSizePolicy(sizePolicy2);
        crackButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(crackButton, 0, 0, 1, 1);

        othersButton = new QPushButton(groupBox);
        othersButton->setObjectName(QString::fromUtf8("othersButton"));
        sizePolicy2.setHeightForWidth(othersButton->sizePolicy().hasHeightForWidth());
        othersButton->setSizePolicy(sizePolicy2);
        othersButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 255);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(othersButton, 0, 2, 1, 1);


        verticalLayout->addWidget(groupBox);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        image_frame = new imageDisplay(centralWidget);
        image_frame->setObjectName(QString::fromUtf8("image_frame"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(100);
        sizePolicy3.setVerticalStretch(100);
        sizePolicy3.setHeightForWidth(image_frame->sizePolicy().hasHeightForWidth());
        image_frame->setSizePolicy(sizePolicy3);
        image_frame->setAutoFillBackground(false);

        verticalLayout_2->addWidget(image_frame);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy4);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy4.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy4);

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_2);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        ImageLabelingClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ImageLabelingClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 943, 23));
        menuSetting = new QMenu(menuBar);
        menuSetting->setObjectName(QString::fromUtf8("menuSetting"));
        ImageLabelingClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(ImageLabelingClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ImageLabelingClass->setStatusBar(statusBar);
        mainToolBar = new QToolBar(ImageLabelingClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ImageLabelingClass->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menuSetting->menuAction());
        menuSetting->addAction(actionLoad);
        menuSetting->addAction(actionSave);

        retranslateUi(ImageLabelingClass);
        QObject::connect(othersButton, SIGNAL(clicked()), ImageLabelingClass, SLOT(others_pen()));
        QObject::connect(cleanButton, SIGNAL(clicked()), ImageLabelingClass, SLOT(clean()));
        QObject::connect(dentButton, SIGNAL(clicked()), ImageLabelingClass, SLOT(dent_pen()));
        QObject::connect(crackButton, SIGNAL(clicked()), ImageLabelingClass, SLOT(crack_pen()));

        QMetaObject::connectSlotsByName(ImageLabelingClass);
    } // setupUi

    void retranslateUi(QMainWindow *ImageLabelingClass)
    {
        ImageLabelingClass->setWindowTitle(QApplication::translate("ImageLabelingClass", "ImageLabeling", nullptr));
        actionLoad->setText(QApplication::translate("ImageLabelingClass", "Load", nullptr));
        actionSave->setText(QApplication::translate("ImageLabelingClass", "Save", nullptr));
        label->setText(QApplication::translate("ImageLabelingClass", "Image file list", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("ImageLabelingClass", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("ImageLabelingClass", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        groupBox->setTitle(QApplication::translate("ImageLabelingClass", "Tools", nullptr));
        cleanButton->setText(QApplication::translate("ImageLabelingClass", "Clean", nullptr));
        dentButton->setText(QApplication::translate("ImageLabelingClass", "dent", nullptr));
        crackButton->setText(QApplication::translate("ImageLabelingClass", "crack", nullptr));
        othersButton->setText(QApplication::translate("ImageLabelingClass", "others", nullptr));
        pushButton->setText(QApplication::translate("ImageLabelingClass", "Before", nullptr));
        pushButton_2->setText(QApplication::translate("ImageLabelingClass", "After", nullptr));
        menuSetting->setTitle(QApplication::translate("ImageLabelingClass", "Setting", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImageLabelingClass: public Ui_ImageLabelingClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGELABELING_H
