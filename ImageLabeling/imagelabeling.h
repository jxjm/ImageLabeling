#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_imagelabeling.h"

class ImageLabeling : public QMainWindow
{
	Q_OBJECT

public:
	ImageLabeling(QWidget *parent = Q_NULLPTR);

private:
	Ui::ImageLabelingClass ui;
};
