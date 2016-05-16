#ifndef PUNCIRC_H
#define PUNCIRC_H

#include <QtWidgets/QMainWindow>
#include "ui_puncirc.h"
#include "channel_bar.hpp"
#include "chat_field.hpp"
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
