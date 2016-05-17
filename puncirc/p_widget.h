#pragma once
#include <QWidget>
#include <QMouseEvent>
#include <QtGui\QPainter>
#include <QStyleOption>

#define PROPERTY_PRESSED "pressed"
#define PROPERTY_RELEASED "released"
#define PROPERTY_CLICKED "clicked"

class p_widget : public QWidget {
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
