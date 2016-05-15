#pragma once
#include <QWidget>
#include "ui_p_flat_button.h"
#include <QtGui\QPainter>

class p_flat_button : public QWidget {
	Q_OBJECT

public:
	p_flat_button(QWidget * parent = Q_NULLPTR);
	~p_flat_button();

private:
	Ui::p_flat_button ui;
	void paintEvent(QPaintEvent *event);
};
