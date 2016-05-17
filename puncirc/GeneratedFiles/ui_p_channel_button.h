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



/********************************************************************************
** Form generated from reading UI file 'p_channel_button.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_P_CHANNEL_BUTTON_H
#define UI_P_CHANNEL_BUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include "p_flat_button.h"

QT_BEGIN_NAMESPACE

class Ui_p_channel_button
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *status;
    QLabel *name;
    QSpacerItem *horizontalSpacer;

    void setupUi(p_flat_button *p_channel_button)
    {
        if (p_channel_button->objectName().isEmpty())
            p_channel_button->setObjectName(QStringLiteral("p_channel_button"));
        p_channel_button->resize(150, 50);
        p_channel_button->setMinimumSize(QSize(150, 50));
        p_channel_button->setMaximumSize(QSize(150, 16777215));
        p_channel_button->setStyleSheet(QLatin1String("p_flat_button\n"
"{\n"
"	background-color: #323232;\n"
"}\n"
"\n"
"#status\n"
"{\n"
"	color: #26cd77;\n"
"	margin-left: -2px;\n"
"}\n"
"#name\n"
"{\n"
"	color: #e1e1e1;\n"
"}\n"
""));
        horizontalLayout = new QHBoxLayout(p_channel_button);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        status = new QLabel(p_channel_button);
        status->setObjectName(QStringLiteral("status"));
        status->setFrameShape(QFrame::VLine);
        status->setLineWidth(2);

        horizontalLayout->addWidget(status);

        name = new QLabel(p_channel_button);
        name->setObjectName(QStringLiteral("name"));
        QFont font;
        font.setPointSize(16);
        name->setFont(font);

        horizontalLayout->addWidget(name);

        horizontalSpacer = new QSpacerItem(96, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        retranslateUi(p_channel_button);

        QMetaObject::connectSlotsByName(p_channel_button);
    } // setupUi

    void retranslateUi(p_flat_button *p_channel_button)
    {
        p_channel_button->setWindowTitle(QApplication::translate("p_channel_button", "p_channel_button", 0));
        status->setText(QString());
        name->setText(QApplication::translate("p_channel_button", "Terry", 0));
    } // retranslateUi

};

namespace Ui {
    class p_channel_button: public Ui_p_channel_button {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_P_CHANNEL_BUTTON_H
