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



#ifndef PUNCIRC_H
#define PUNCIRC_H

#include <QtWidgets/QMainWindow>
#include "ui_puncirc.h"
#include "channel_bar.h"
#include "chat_field.h"
#include <memory>

class puncirc : public QMainWindow
{
	Q_OBJECT

public:
	puncirc(QWidget *parent = 0);
	~puncirc();

private:
	Ui::puncircClass ui;
	std::shared_ptr<channel_bar> channelBar;
	std::shared_ptr<chat_field> chatField;

};

#endif // PUNCIRC_H
