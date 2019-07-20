#pragma once

#include <QWidget>
#include "ui_imagedisplay.h"

class imageDisplay : public QWidget
{
	Q_OBJECT

public:
	imageDisplay(QWidget *parent = Q_NULLPTR);
	~imageDisplay();

private:
	Ui::imageDisplay ui;
};
