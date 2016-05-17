/*
*** puncirc - Marco Tolu <puncia> ***

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/



#pragma once
#include <QWidget>
#include <QMouseEvent>
#include <QtGui\QPainter>
#include <QStyleOption>

#define PROPERTY_PRESSED "pressed"
#define PROPERTY_RELEASED "released"
#define PROPERTY_CLICKED "clicked"

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
