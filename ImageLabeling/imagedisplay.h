#pragma once

#include <QWidget>
#include <QMap>
#include <QPainter>
class imageDisplay : public QWidget
{
	Q_OBJECT

public:
	QImage src, out;
	QMap<QColor, QVector<QLine>> label;
	QColor curColor;
	QPoint oldPoint;
	//QPainter painter;
	imageDisplay(QWidget *parent = Q_NULLPTR);
	~imageDisplay();
	void paintEvent(QPaintEvent *ev);

	void mousePressEvent(QMouseEvent *e);

	void mouseMoveEvent(QMouseEvent *e);

};
