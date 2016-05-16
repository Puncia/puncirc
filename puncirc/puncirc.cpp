#include "puncirc.h"

puncirc::puncirc(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	channelBar = std::make_shared<channel_bar>(this);
	chatField = std::make_shared<chat_field>(this);

	ui.horizontalLayout->addWidget(channelBar.get());
	ui.gridLayout->addWidget(chatField.get(), 0, 1);
}

puncirc::~puncirc()
{

}
