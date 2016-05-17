/********************************************************************************
** Form generated from reading UI file 'puncirc.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PUNCIRC_H
#define UI_PUNCIRC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_puncircClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *main_grid_layout;

    void setupUi(QMainWindow *puncircClass)
    {
        if (puncircClass->objectName().isEmpty())
            puncircClass->setObjectName(QStringLiteral("puncircClass"));
        puncircClass->resize(597, 405);
        puncircClass->setStyleSheet(QLatin1String(".QWidget\n"
"{\n"
"	background: #33363E;\n"
"}"));
        centralWidget = new QWidget(puncircClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        main_grid_layout = new QGridLayout();
        main_grid_layout->setSpacing(0);
        main_grid_layout->setObjectName(QStringLiteral("main_grid_layout"));

        verticalLayout->addLayout(main_grid_layout);

        puncircClass->setCentralWidget(centralWidget);

        retranslateUi(puncircClass);

        QMetaObject::connectSlotsByName(puncircClass);
    } // setupUi

    void retranslateUi(QMainWindow *puncircClass)
    {
        puncircClass->setWindowTitle(QApplication::translate("puncircClass", "puncirc", 0));
    } // retranslateUi

};

namespace Ui {
    class puncircClass: public Ui_puncircClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PUNCIRC_H
