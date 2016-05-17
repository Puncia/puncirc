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
** Form generated from reading UI file 'channel_bar.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANNEL_BAR_H
#define UI_CHANNEL_BAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_channel_bar
{
public:
    QGridLayout *gridLayout;
    QLabel *channel_separator;

    void setupUi(QWidget *channel_bar)
    {
        if (channel_bar->objectName().isEmpty())
            channel_bar->setObjectName(QStringLiteral("channel_bar"));
        channel_bar->resize(136, 421);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(channel_bar->sizePolicy().hasHeightForWidth());
        channel_bar->setSizePolicy(sizePolicy);
        channel_bar->setMinimumSize(QSize(136, 0));
        channel_bar->setStyleSheet(QLatin1String("#channel_bar\n"
"{\n"
"	background-color: #1d1d1d;\n"
"}\n"
"#channel_separator\n"
"{\n"
"	color: #323232;\n"
"	margin-right: -3px;\n"
"}"));
        gridLayout = new QGridLayout(channel_bar);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        channel_separator = new QLabel(channel_bar);
        channel_separator->setObjectName(QStringLiteral("channel_separator"));
        channel_separator->setFrameShape(QFrame::VLine);
        channel_separator->setLineWidth(1);

        gridLayout->addWidget(channel_separator, 0, 0, 1, 1);


        retranslateUi(channel_bar);

        QMetaObject::connectSlotsByName(channel_bar);
    } // setupUi

    void retranslateUi(QWidget *channel_bar)
    {
        channel_bar->setWindowTitle(QApplication::translate("channel_bar", "channel_bar", 0));
        channel_separator->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class channel_bar: public Ui_channel_bar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANNEL_BAR_H
