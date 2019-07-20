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
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageLabelingClass
{
public:
    QAction *actionLoad;
    QAction *actionSave;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QListView *imageListView;
    QScrollArea *scrollArea;
    QWidget *image_frame;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *dentButton;
    QPushButton *cleanButton;
    QPushButton *othersButton;
    QPushButton *crackButton;
    QLabel *label_2;
    QMenuBar *menuBar;
    QMenu *menuSetting;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *ImageLabelingClass)
    {
        if (ImageLabelingClass->objectName().isEmpty())
            ImageLabelingClass->setObjectName(QString::fromUtf8("ImageLabelingClass"));
        ImageLabelingClass->resize(856, 631);
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
        imageListView = new QListView(centralWidget);
        imageListView->setObjectName(QString::fromUtf8("imageListView"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(imageListView->sizePolicy().hasHeightForWidth());
        imageListView->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(imageListView, 1, 0, 1, 1);

        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        image_frame = new QWidget();
        image_frame->setObjectName(QString::fromUtf8("image_frame"));
        image_frame->setGeometry(QRect(0, 0, 573, 554));
        scrollArea->setWidget(image_frame);

        gridLayout_2->addWidget(scrollArea, 0, 1, 3, 1);

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
        dentButton = new QPushButton(groupBox);
        dentButton->setObjectName(QString::fromUtf8("dentButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(dentButton->sizePolicy().hasHeightForWidth());
        dentButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(dentButton, 0, 2, 1, 1);

        cleanButton = new QPushButton(groupBox);
        cleanButton->setObjectName(QString::fromUtf8("cleanButton"));
        sizePolicy2.setHeightForWidth(cleanButton->sizePolicy().hasHeightForWidth());
        cleanButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(cleanButton, 4, 0, 1, 1);

        othersButton = new QPushButton(groupBox);
        othersButton->setObjectName(QString::fromUtf8("othersButton"));
        sizePolicy2.setHeightForWidth(othersButton->sizePolicy().hasHeightForWidth());
        othersButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(othersButton, 0, 3, 1, 1);

        crackButton = new QPushButton(groupBox);
        crackButton->setObjectName(QString::fromUtf8("crackButton"));
        sizePolicy2.setHeightForWidth(crackButton->sizePolicy().hasHeightForWidth());
        crackButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(crackButton, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 2, 0, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        ImageLabelingClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ImageLabelingClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 856, 23));
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

        QMetaObject::connectSlotsByName(ImageLabelingClass);
    } // setupUi

    void retranslateUi(QMainWindow *ImageLabelingClass)
    {
        ImageLabelingClass->setWindowTitle(QApplication::translate("ImageLabelingClass", "ImageLabeling", nullptr));
        actionLoad->setText(QApplication::translate("ImageLabelingClass", "Load", nullptr));
        actionSave->setText(QApplication::translate("ImageLabelingClass", "Save", nullptr));
        groupBox->setTitle(QApplication::translate("ImageLabelingClass", "Tools", nullptr));
        dentButton->setText(QApplication::translate("ImageLabelingClass", "dent", nullptr));
        cleanButton->setText(QApplication::translate("ImageLabelingClass", "Clean", nullptr));
        othersButton->setText(QApplication::translate("ImageLabelingClass", "others", nullptr));
        crackButton->setText(QApplication::translate("ImageLabelingClass", "crack", nullptr));
        label_2->setText(QApplication::translate("ImageLabelingClass", "Image List", nullptr));
        menuSetting->setTitle(QApplication::translate("ImageLabelingClass", "Setting", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImageLabelingClass: public Ui_ImageLabelingClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGELABELING_H
