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



#include "channel_bar.h"
#include <QPushButton>

channel_bar::channel_bar(QWidget * parent) : p_widget(parent)
{
	ui.setupUi(this);
	
	ch_b1 = std::make_shared<p_channel_button>(this);
	ui.gridLayout->addWidget(ch_b1.get(), 0, 1, Qt::AlignTop | Qt::AlignLeft);


}

void channel_bar::button_pressed(Qt::MouseButton button)
{

}

channel_bar::~channel_bar()
{
	
}
