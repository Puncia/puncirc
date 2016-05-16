#include "chat_field.hpp"

chat_field::chat_field(QWidget * parent) : QWidget(parent) {
	ui.setupUi(this);
}

chat_field::~chat_field() {
	
}

void chat_field::paintEvent(QPaintEvent *event)
{
	QStyleOption opt;
	opt.init(this);
	QPainter p(this);
	style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}