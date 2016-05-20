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


#ifndef PUNCIRC_H
#define PUNCIRC_H

#include <QtWidgets/QMainWindow>
#include "ui_puncirc.h"
#include "channel_bar.h"
#include "chat_field.h"
#include <memory>

namespace application
{
	class puncirc : public QMainWindow
	{
		Q_OBJECT

	public:
		puncirc(QWidget *parent = 0);
		~puncirc();

	private:
		Ui::puncircClass ui;
		std::shared_ptr<ui::channel_bar> channelBar;
		std::shared_ptr<ui::chat_field> chatField;

		void tmp_add_txt(const char *l);

	};
}

#endif // PUNCIRC_H
