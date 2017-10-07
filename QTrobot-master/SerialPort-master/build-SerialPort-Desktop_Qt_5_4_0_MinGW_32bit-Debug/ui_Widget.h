/********************************************************************************
** Form generated from reading UI file 'Widget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *vboxLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *frontPushButton;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *leftPushButton;
    QPushButton *stopPushButton;
    QPushButton *rightPushButton;
    QVBoxLayout *verticalLayout_4;
    QPushButton *backPushButton;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->setWindowModality(Qt::NonModal);
        Widget->setEnabled(false);
        Widget->resize(684, 486);
        QFont font;
        font.setStyleStrategy(QFont::NoAntialias);
        Widget->setFont(font);
        Widget->setContextMenuPolicy(Qt::NoContextMenu);
        Widget->setAcceptDrops(true);
        Widget->setWindowOpacity(0);
        Widget->setAutoFillBackground(false);
        Widget->setStyleSheet(QLatin1String("#Widget\n"
"{\n"
"background-color:black;\n"
"border-image:url(:/backgroung.JPG);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
""));
        vboxLayout = new QVBoxLayout(Widget);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        vboxLayout->setContentsMargins(39, 16, -1, -1);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(192, 22, 204, -1);
        frontPushButton = new QPushButton(Widget);
        frontPushButton->setObjectName(QStringLiteral("frontPushButton"));
        frontPushButton->setMinimumSize(QSize(12, 11));
        frontPushButton->setMaximumSize(QSize(16777215, 16777215));
        frontPushButton->setSizeIncrement(QSize(71, 50));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(85, 170, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(213, 234, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(149, 202, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(42, 85, 127, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(56, 113, 170, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(170, 212, 255, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        frontPushButton->setPalette(palette);
        QFont font1;
        font1.setPointSize(24);
        font1.setBold(true);
        font1.setWeight(75);
        frontPushButton->setFont(font1);
        frontPushButton->setAutoFillBackground(false);
        frontPushButton->setStyleSheet(QLatin1String("#frontPushButton\n"
"{\n"
"background-color:transperent;\n"
"border-image:url(:/front.png);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
"#frontPushButton:pressed\n"
"{\n"
"border-image:url(:/front.png);\n"
"\n"
"}"));

        horizontalLayout_4->addWidget(frontPushButton);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(26);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(12, 24, 5, 8);
        leftPushButton = new QPushButton(Widget);
        leftPushButton->setObjectName(QStringLiteral("leftPushButton"));
        leftPushButton->setFont(font1);
        leftPushButton->setStyleSheet(QLatin1String("#leftPushButton\n"
"{\n"
"background-color:transperent;\n"
"border-image:url(:/left.png);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
"#leftPushButton:pressed\n"
"{\n"
"border-image:url(:/left.png);\n"
"\n"
"}"));

        horizontalLayout_5->addWidget(leftPushButton);

        stopPushButton = new QPushButton(Widget);
        stopPushButton->setObjectName(QStringLiteral("stopPushButton"));
        stopPushButton->setFont(font1);

        horizontalLayout_5->addWidget(stopPushButton);

        rightPushButton = new QPushButton(Widget);
        rightPushButton->setObjectName(QStringLiteral("rightPushButton"));
        rightPushButton->setFont(font1);
        rightPushButton->setStyleSheet(QLatin1String("#rightPushButton\n"
"{\n"
"background-color:transperent;\n"
"border-image:url(:/right.png);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
"#lrightPushButton:pressed\n"
"{\n"
"border-image:url(:/right.png);\n"
"\n"
"}"));
        rightPushButton->setAutoDefault(true);
        rightPushButton->setDefault(true);
        rightPushButton->setFlat(false);

        horizontalLayout_5->addWidget(rightPushButton);


        verticalLayout_2->addLayout(horizontalLayout_5);


        vboxLayout->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(191, 28, 199, 25);
        backPushButton = new QPushButton(Widget);
        backPushButton->setObjectName(QStringLiteral("backPushButton"));
        backPushButton->setMaximumSize(QSize(666, 16777215));
        backPushButton->setFont(font1);
        backPushButton->setContextMenuPolicy(Qt::PreventContextMenu);
        backPushButton->setStyleSheet(QLatin1String("#backPushButton\n"
"{\n"
"background-color:transperent;\n"
"border-image:url(:/back.png);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
"#backPushButton:pressed\n"
"{\n"
"border-image:url(:/back.png);\n"
"\n"
"}\n"
""));

        verticalLayout_4->addWidget(backPushButton);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(11, 4, 11, -1);
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_6->addWidget(pushButton_2);

        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_6->addWidget(pushButton);


        verticalLayout_4->addLayout(horizontalLayout_6);


        vboxLayout->addLayout(verticalLayout_4);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        frontPushButton->setText(QString());
        leftPushButton->setText(QString());
        stopPushButton->setText(QApplication::translate("Widget", "stop", 0));
        rightPushButton->setText(QString());
        backPushButton->setText(QString());
        pushButton_2->setText(QApplication::translate("Widget", "PushButton", 0));
        pushButton->setText(QApplication::translate("Widget", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
