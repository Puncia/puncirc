/********************************************************************************
** Form generated from reading UI file 'p_flat_button.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_P_FLAT_BUTTON_H
#define UI_P_FLAT_BUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_p_flat_button
{
public:

    void setupUi(QWidget *p_flat_button)
    {
        if (p_flat_button->objectName().isEmpty())
            p_flat_button->setObjectName(QStringLiteral("p_flat_button"));
        p_flat_button->resize(460, 266);

        retranslateUi(p_flat_button);

        QMetaObject::connectSlotsByName(p_flat_button);
    } // setupUi

    void retranslateUi(QWidget *p_flat_button)
    {
        p_flat_button->setWindowTitle(QApplication::translate("p_flat_button", "p_flat_button", 0));
    } // retranslateUi

};

namespace Ui {
    class p_flat_button: public Ui_p_flat_button {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_P_FLAT_BUTTON_H
