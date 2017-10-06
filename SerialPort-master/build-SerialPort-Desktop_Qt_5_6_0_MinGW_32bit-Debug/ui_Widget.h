/********************************************************************************
** Form generated from reading UI file 'Widget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *backPushButton;
    QPushButton *rightPushButton;
    QPushButton *leftPushButton;
    QPushButton *frontPushButton;
    QPushButton *stopPushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(536, 199);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        backPushButton = new QPushButton(Widget);
        backPushButton->setObjectName(QStringLiteral("backPushButton"));

        verticalLayout->addWidget(backPushButton);

        rightPushButton = new QPushButton(Widget);
        rightPushButton->setObjectName(QStringLiteral("rightPushButton"));

        verticalLayout->addWidget(rightPushButton);

        leftPushButton = new QPushButton(Widget);
        leftPushButton->setObjectName(QStringLiteral("leftPushButton"));

        verticalLayout->addWidget(leftPushButton);

        frontPushButton = new QPushButton(Widget);
        frontPushButton->setObjectName(QStringLiteral("frontPushButton"));

        verticalLayout->addWidget(frontPushButton);

        stopPushButton = new QPushButton(Widget);
        stopPushButton->setObjectName(QStringLiteral("stopPushButton"));

        verticalLayout->addWidget(stopPushButton);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        backPushButton->setText(QApplication::translate("Widget", "back", 0));
        rightPushButton->setText(QApplication::translate("Widget", "right", 0));
        leftPushButton->setText(QApplication::translate("Widget", "left", 0));
        frontPushButton->setText(QApplication::translate("Widget", "front", 0));
        stopPushButton->setText(QApplication::translate("Widget", "stop", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
