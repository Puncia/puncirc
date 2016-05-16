#pragma once
#include <QWidget>
#include "ui_channel_bar.h"
#include "p_flat_button.hpp"
#include <QtGui\QPainter>
#include <memory>

class channel_bar : public QWidget {
	Q_OBJECT

public:
	channel_bar(QWidget * parent = Q_NULLPTR);
	~channel_bar();

private:
	Ui::channel_bar ui;
	void paintEvent(QPaintEvent *event);
	std::shared_ptr<p_flat_button> channel_button;
	std::shared_ptr<p_flat_button> channel_buttona;
	std::shared_ptr<p_flat_button> channel_buttonb;

public slots:
	void button_pressed(Qt::MouseButton button);

};
