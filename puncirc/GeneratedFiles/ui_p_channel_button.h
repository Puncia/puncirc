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
#include <QtWidgets/QHeaderView>
#include <p_flat_button.h>

QT_BEGIN_NAMESPACE

class Ui_p_channel_button
{
public:

    void setupUi(p_flat_button *p_channel_button)
    {
        if (p_channel_button->objectName().isEmpty())
            p_channel_button->setObjectName(QStringLiteral("p_channel_button"));
        p_channel_button->resize(400, 300);

        retranslateUi(p_channel_button);

        QMetaObject::connectSlotsByName(p_channel_button);
    } // setupUi

    void retranslateUi(p_flat_button *p_channel_button)
    {
        p_channel_button->setWindowTitle(QApplication::translate("p_channel_button", "p_channel_button", 0));
    } // retranslateUi

};

namespace Ui {
    class p_channel_button: public Ui_p_channel_button {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_P_CHANNEL_BUTTON_H
