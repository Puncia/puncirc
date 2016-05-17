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


#include "puncirc.h"
#include "include\libircclient.h"
#include "include\libirc_rfcnumeric.h"

puncirc::puncirc(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	channelBar = std::make_shared<channel_bar>(this);

	ui.verticalLayout->addWidget(channelBar.get(), 0, Qt::AlignRight);
	
	
}

uint8_t i = 0;

void puncirc::tmp_add_txt(const char *l)
{
	QLabel *ll = new QLabel(l);
	ll->setStyleSheet("color:white;");
	ui.main_grid_layout->addWidget(ll, ++i, 0, Qt::AlignBottom);
}

puncirc::~puncirc()
{

}
