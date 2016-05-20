/*
	This file is part of puncirc.

    puncirc is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    puncirc is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    Full license: https://github.com/Puncia/puncirc/blob/master/LICENSE.md
	Copyright (c) 2016 Marco Tolu [puncia]
*/


#include "p_widget.h"

ui_base::p_widget::p_widget(QWidget * parent) : QWidget(parent)
{
	
}

void ui_base::p_widget::paintEvent(QPaintEvent *event)
{
	QStyleOption opt;
	opt.init(this);
	QPainter p(this);
	style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}

void ui_base::p_widget::mousePressEvent(QMouseEvent *mpress)
{
	if (mpress->button() == Qt::LeftButton)
	{
		emit(pressed(mpress->button()));
		applyProperty(PROPERTY_PRESSED, true);
		applyProperty(PROPERTY_RELEASED, false);
	}
}

void ui_base::p_widget::mouseReleaseEvent(QMouseEvent *mrelease)
{
	if (mrelease->button() == Qt::LeftButton)
	{
		emit(released(mrelease->button()));
		applyProperty(PROPERTY_RELEASED, true);
		applyProperty(PROPERTY_PRESSED, false);
	}
}

template <typename value_type>
void ui_base::p_widget::applyProperty(char *property, value_type value)
{
	setProperty(property, value);
	style()->unpolish(this);
	style()->polish(this);
	update();
}

ui_base::p_widget::~p_widget()
{
	
}
