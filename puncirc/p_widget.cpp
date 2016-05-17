#include "p_widget.h"

p_widget::p_widget(QWidget * parent) : QWidget(parent)
{
	
}

void p_widget::paintEvent(QPaintEvent *event)
{
	QStyleOption opt;
	opt.init(this);
	QPainter p(this);
	style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}

void p_widget::mousePressEvent(QMouseEvent *mpress)
{
	if (mpress->button() == Qt::LeftButton)
	{
		emit(pressed(mpress->button()));
		applyProperty(PROPERTY_PRESSED, true);
		applyProperty(PROPERTY_RELEASED, false);
	}
}

void p_widget::mouseReleaseEvent(QMouseEvent *mrelease)
{
	if (mrelease->button() == Qt::LeftButton)
	{
		emit(released(mrelease->button()));
		applyProperty(PROPERTY_RELEASED, true);
		applyProperty(PROPERTY_PRESSED, false);
	}
}

template <typename value_type>
void p_widget::applyProperty(char *property, value_type value)
{
	setProperty(property, value);
	style()->unpolish(this);
	style()->polish(this);
	update();
}

p_widget::~p_widget()
{
	
}
