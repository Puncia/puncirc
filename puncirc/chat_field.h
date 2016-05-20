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
#include "ui_chat_field.h"

namespace ui
{
	class chat_field : public QWidget
	{
		Q_OBJECT

	public:
		chat_field(QWidget * parent = Q_NULLPTR);
		~chat_field();

	private:
		Ui::chat_field ui;
	};
}
