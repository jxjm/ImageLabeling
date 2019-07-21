#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_imagelabeling.h"

class ImageLabeling : public QMainWindow
{
	Q_OBJECT

public:
	ImageLabeling(QWidget *parent = Q_NULLPTR);
	void actionLoad();
	void actionSave();

public slots:
	void crack_pen();
	void dent_pen();
	void others_pen();
	void clean();

private:
	Ui::ImageLabelingClass ui;
};
