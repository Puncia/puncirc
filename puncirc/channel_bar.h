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
#include "ui_channel_bar.h"
#include "p_channel_button.h"
#include "p_widget.h"
#include <memory>

class channel_bar : public p_widget
{
	Q_OBJECT

public:
	channel_bar(QWidget * parent = Q_NULLPTR);
	~channel_bar();

private:
	Ui::channel_bar ui;

	std::shared_ptr<p_channel_button> ch_b1;

public slots:
	void button_pressed(Qt::MouseButton button);

};
