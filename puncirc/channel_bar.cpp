#include "channel_bar.hpp"

channel_bar::channel_bar(QWidget * parent) : QWidget(parent) {
	ui.setupUi(this);
	channel_button = std::make_shared<p_flat_button>(this);
	channel_buttona = std::make_shared<p_flat_button>(this);
	channel_buttonb = std::make_shared<p_flat_button>(this);

	ui.verticalLayout->addWidget(channel_button.get());
	ui.verticalLayout->addWidget(channel_buttona.get());
	ui.verticalLayout->addWidget(channel_buttonb.get());

	ui.verticalLayout->setAlignment(Qt::AlignTop);

}

void channel_bar::paintEvent(QPaintEvent *event)
{
	QStyleOption opt;
	opt.init(this);
	QPainter p(this);
	style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}

channel_bar::~channel_bar() {
	
}
