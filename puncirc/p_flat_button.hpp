#pragma once
#include <QWidget>
#include "ui_p_flat_button.h"
#include <QtGui\QPainter>
#include <QMouseEvent>

class p_flat_button : public QWidget {
	Q_OBJECT

public:
	p_flat_button(QWidget * parent = Q_NULLPTR);
	~p_flat_button();

signals:
	void pressed(Qt::MouseButton button);

private:
	Ui::p_flat_button ui;
protected:
	void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;
	void mousePressEvent(QMouseEvent *mpress) Q_DECL_OVERRIDE;
};
