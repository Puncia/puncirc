#include "puncirc.h"

puncirc::puncirc(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	channelBar = std::make_shared<channel_bar>(this);

	ui.horizontalLayout->addWidget(channelBar.get());
}

puncirc::~puncirc()
{

}
