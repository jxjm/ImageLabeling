#include "imagedisplay.h"
#include <QPainter>
#include <QPoint>
#include <QMouseEvent>

imageDisplay::imageDisplay(QWidget *parent)
	: QWidget(parent)
{
	src = QImage("sample_image1.jpg");
	out = src.copy();
	label = {};
	curColor = QColor(255, 0, 0);
	
}

imageDisplay::~imageDisplay()
{

}

void imageDisplay::paintEvent(QPaintEvent *ev)
{
	//QImage out = src.copy();
	QPainter painter(this);
	this->resize(out.size());
	painter.drawImage(QPoint(0,0),out);	

}


void imageDisplay::mousePressEvent(QMouseEvent *e)
{
	oldPoint = e->pos();
}

void imageDisplay::mouseMoveEvent(QMouseEvent *e)

{
	QPainter painter(&out);

	QPen pen;
	//pen.setStyle((Qt::PenStyle)style);
	pen.setWidth(10);
	pen.setColor(curColor);
	pen.setCapStyle(Qt::RoundCap);
	pen.setJoinStyle(Qt::RoundJoin);
	painter.setPen(pen);
	painter.setRenderHint(QPainter::Antialiasing);
	painter.drawLine(oldPoint, e->pos());
	painter.end();
	oldPoint = e->pos();
	update();

}
