#include "channel_bar.h"

channel_bar::channel_bar(QWidget * parent) : p_widget(parent)
{
	ui.setupUi(this);
	channel_button = std::make_shared<p_flat_button>(this);
	channel_buttona = std::make_shared<p_flat_button>(this);
	channel_buttonb = std::make_shared<p_flat_button>(this);

	ui.verticalLayout->addWidget(channel_button.get());
	ui.verticalLayout->addWidget(channel_buttona.get());
	ui.verticalLayout->addWidget(channel_buttonb.get());

	ui.verticalLayout->setAlignment(Qt::AlignTop);

	QObject::connect(channel_button.get(), SIGNAL(pressed(Qt::MouseButton)), this, SLOT(button_pressed(Qt::MouseButton)));

}

void channel_bar::button_pressed(Qt::MouseButton button)
{

}

channel_bar::~channel_bar() {
	
}
