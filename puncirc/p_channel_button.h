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
#ifndef P_CHANNEL_BUTTON_H
#define P_CHANNEL_BUTTON_H
#include <p_flat_button.h>
#include "ui_p_channel_button.h"

class p_channel_button : public p_flat_button
{
	Q_OBJECT

public:
	p_channel_button(p_widget * parent = Q_NULLPTR);
	~p_channel_button();

private:
	Ui::p_channel_button ui;
};
#endif // P_CHANNEL_BUTTON_H