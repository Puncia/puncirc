#include "p_flat_button.hpp"

p_flat_button::p_flat_button(QWidget * parent) : QWidget(parent) 
{
	ui.setupUi(this);
}

p_flat_button::~p_flat_button()
{
	
}

void p_flat_button::paintEvent(QPaintEvent *event)
{
	QStyleOption opt;
	opt.init(this);
	QPainter p(this);
	style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}

void p_flat_button::mousePressEvent(QMouseEvent *mpress)
{
	if (mpress->button() == Qt::LeftButton)
	{
		emit(pressed(mpress->button()));
	}
}