#include "imagelabeling.h"
#include <QColor>
#include <QDebug>
ImageLabeling::ImageLabeling(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
//	connect(actionLoad, SIGNAL(triggered()), this, SLOT(load()));
	//connect(actionSave, SIGNAL(triggered()), this, SLOT(save()));

}

void ImageLabeling::actionLoad()
{
	qDebug() << "load";
}
void ImageLabeling::actionSave()
{ 
	qDebug() << "save";
}

void ImageLabeling::crack_pen()
{
	ui.image_frame->curColor = ui.crackButton->palette().color(QPalette::Background);
}

void ImageLabeling::dent_pen()
{
	ui.image_frame->curColor = ui.dentButton->palette().color(QPalette::Background);
}
void ImageLabeling::others_pen()
{
	ui.image_frame->curColor = ui.othersButton->palette().color(QPalette::Background);;
}
void ImageLabeling::clean()
{
	ui.image_frame->out = ui.image_frame->src.copy();
	ui.image_frame->curColor = QColor(0, 0, 0, 0);
	ui.image_frame->update();
}