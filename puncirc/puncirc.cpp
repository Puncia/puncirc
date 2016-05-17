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



#include "puncirc.h"

puncirc::puncirc(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	channelBar = std::make_shared<channel_bar>(this);
	//chatField = std::make_shared<chat_field>(this);

	ui.verticalLayout->addWidget(channelBar.get(), 0, Qt::AlignRight);
	//ui.main_grid_layout->addWidget(chatField.get(), 0, 1);
}

puncirc::~puncirc()
{

}
