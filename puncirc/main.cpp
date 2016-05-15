#include "puncirc.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	puncirc w;
	w.show();
	return a.exec();
}
