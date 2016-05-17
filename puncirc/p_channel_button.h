#pragma once
#ifndef P_CHANNEL_BUTTON_H
#define P_CHANNEL_BUTTON_H
#include <p_flat_button.h>
#include "ui_p_channel_button.h"

class p_channel_button : public p_flat_button
{
	Q_OBJECT

public:
	p_channel_button(p_flat_button * parent = Q_NULLPTR);
	~p_channel_button();

private:
	Ui::p_channel_button ui;
};
#endif // P_CHANNEL_BUTTON_H