#pragma once
#include "ui_channel_bar.h"
#include "p_channel_button.h"
#include "p_widget.h"
#include <memory>

class channel_bar : public p_widget {
	Q_OBJECT

public:
	channel_bar(QWidget * parent = Q_NULLPTR);
	~channel_bar();

private:
	Ui::channel_bar ui;
	std::shared_ptr<p_flat_button> channel_button;
	std::shared_ptr<p_flat_button> channel_buttona;
	std::shared_ptr<p_flat_button> channel_buttonb;

public slots:
	void button_pressed(Qt::MouseButton button);

};
