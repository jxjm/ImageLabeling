#include "imagelabeling.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ImageLabeling w;
	w.show();
	return a.exec();
}
