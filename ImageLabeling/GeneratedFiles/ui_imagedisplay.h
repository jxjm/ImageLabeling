/********************************************************************************
** Form generated from reading UI file 'imagedisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEDISPLAY_H
#define UI_IMAGEDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_imageDisplay
{
public:

    void setupUi(QWidget *imageDisplay)
    {
        if (imageDisplay->objectName().isEmpty())
            imageDisplay->setObjectName(QString::fromUtf8("imageDisplay"));
        imageDisplay->resize(400, 300);

        retranslateUi(imageDisplay);

        QMetaObject::connectSlotsByName(imageDisplay);
    } // setupUi

    void retranslateUi(QWidget *imageDisplay)
    {
        imageDisplay->setWindowTitle(QApplication::translate("imageDisplay", "imageDisplay", nullptr));
    } // retranslateUi

};

namespace Ui {
    class imageDisplay: public Ui_imageDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEDISPLAY_H
