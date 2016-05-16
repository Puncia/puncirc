#pragma once
#include "p_widget.hpp"
#include "ui_p_flat_button.h"

class p_flat_button : public p_widget {
	Q_OBJECT

public:
	p_flat_button(p_widget * parent = Q_NULLPTR);
	~p_flat_button();

private:
	Ui::p_flat_button ui;
protected:
	
};
