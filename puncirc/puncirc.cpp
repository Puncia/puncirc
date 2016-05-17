#include "puncirc.h"

puncirc::puncirc(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	channelBar = std::make_shared<channel_bar>(this);
	//chatField = std::make_shared<chat_field>(this);

	ui.verticalLayout->addWidget(channelBar.get(), 0, Qt::AlignRight);
	//ui.main_grid_layout->addWidget(chatField.get(), 0, 1);
}

puncirc::~puncirc()
{

}
