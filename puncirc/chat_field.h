#pragma once
#include <QWidget>
#include "ui_chat_field.h"

class chat_field : public QWidget
{
	Q_OBJECT

public:
	chat_field(QWidget * parent = Q_NULLPTR);
	~chat_field();

private:
	Ui::chat_field ui;
};
