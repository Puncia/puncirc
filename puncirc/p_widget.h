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


#pragma once
#include <QWidget>
#include <QMouseEvent>
#include <QtGui\QPainter>
#include <QStyleOption>

#define PROPERTY_PRESSED "pressed"
#define PROPERTY_RELEASED "released"
#define PROPERTY_CLICKED "clicked"

namespace ui_base
{
	class p_widget : public QWidget
	{
		Q_OBJECT

	public:
		p_widget(QWidget * parent = Q_NULLPTR);
		~p_widget();

	signals:
	signals:
		void pressed(Qt::MouseButton button);
		void released(Qt::MouseButton button);

	private:
		template <typename value_type>
		void applyProperty(char *property, value_type value);

	protected:
		void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;
		void mousePressEvent(QMouseEvent *mpress) Q_DECL_OVERRIDE;
		void mouseReleaseEvent(QMouseEvent *mrelease) Q_DECL_OVERRIDE;
	};
}