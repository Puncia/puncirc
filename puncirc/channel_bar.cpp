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
