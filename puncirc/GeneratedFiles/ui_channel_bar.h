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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_channel_bar
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;

    void setupUi(QWidget *channel_bar)
    {
        if (channel_bar->objectName().isEmpty())
            channel_bar->setObjectName(QStringLiteral("channel_bar"));
        channel_bar->resize(203, 421);
        channel_bar->setMinimumSize(QSize(203, 421));
        channel_bar->setStyleSheet(QLatin1String("#channel_bar\n"
"{\n"
"	background: #616A80;\n"
"}"));
        verticalLayout = new QVBoxLayout(channel_bar);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(channel_bar);

        QMetaObject::connectSlotsByName(channel_bar);
    } // setupUi

    void retranslateUi(QWidget *channel_bar)
    {
        channel_bar->setWindowTitle(QApplication::translate("channel_bar", "channel_bar", 0));
    } // retranslateUi

};

namespace Ui {
    class channel_bar: public Ui_channel_bar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANNEL_BAR_H
