/*
	This file is part of puncirc.

    puncirc is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    puncirc is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    Full license: https://github.com/Puncia/puncirc/blob/master/LICENSE.md
	Copyright (c) 2016 Marco Tolu [puncia]
*/


/********************************************************************************
** Form generated from reading UI file 'chat_field.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_FIELD_H
#define UI_CHAT_FIELD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chat_field
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *chat_field)
    {
        if (chat_field->objectName().isEmpty())
            chat_field->setObjectName(QStringLiteral("chat_field"));
        chat_field->resize(518, 301);
        chat_field->setMinimumSize(QSize(518, 0));
        chat_field->setStyleSheet(QLatin1String("#chat_field\n"
"{\n"
"	background: #425768;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(chat_field);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));

        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(chat_field);

        QMetaObject::connectSlotsByName(chat_field);
    } // setupUi

    void retranslateUi(QWidget *chat_field)
    {
        chat_field->setWindowTitle(QApplication::translate("chat_field", "chat_field", 0));
    } // retranslateUi

};

namespace Ui {
    class chat_field: public Ui_chat_field {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_FIELD_H
