/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *playArea;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Button_Replay;
    QPushButton *Button_Play;
    QPushButton *Button_Mode;
    QPushButton *Button_;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1600, 900);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        playArea = new QWidget(MainWindow);
        playArea->setObjectName(QStringLiteral("playArea"));
        playArea->setGeometry(QRect(20, 20, 1280, 720));
        horizontalLayoutWidget = new QWidget(MainWindow);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(60, 800, 1201, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(100);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(20, 0, 20, 0);
        Button_Replay = new QPushButton(horizontalLayoutWidget);
        Button_Replay->setObjectName(QStringLiteral("Button_Replay"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Button_Replay->sizePolicy().hasHeightForWidth());
        Button_Replay->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QStringLiteral("aakar"));
        font.setPointSize(24);
        Button_Replay->setFont(font);

        horizontalLayout->addWidget(Button_Replay);

        Button_Play = new QPushButton(horizontalLayoutWidget);
        Button_Play->setObjectName(QStringLiteral("Button_Play"));
        sizePolicy1.setHeightForWidth(Button_Play->sizePolicy().hasHeightForWidth());
        Button_Play->setSizePolicy(sizePolicy1);
        Button_Play->setFont(font);

        horizontalLayout->addWidget(Button_Play);

        Button_Mode = new QPushButton(horizontalLayoutWidget);
        Button_Mode->setObjectName(QStringLiteral("Button_Mode"));
        sizePolicy1.setHeightForWidth(Button_Mode->sizePolicy().hasHeightForWidth());
        Button_Mode->setSizePolicy(sizePolicy1);
        Button_Mode->setFont(font);

        horizontalLayout->addWidget(Button_Mode);

        Button_ = new QPushButton(horizontalLayoutWidget);
        Button_->setObjectName(QStringLiteral("Button_"));
        sizePolicy1.setHeightForWidth(Button_->sizePolicy().hasHeightForWidth());
        Button_->setSizePolicy(sizePolicy1);
        Button_->setFont(font);

        horizontalLayout->addWidget(Button_);

        scrollArea = new QScrollArea(MainWindow);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(1320, 20, 260, 860));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 258, 858));
        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "PIPlayer", Q_NULLPTR));
        Button_Replay->setText(QApplication::translate("MainWindow", "REPLAY", Q_NULLPTR));
        Button_Play->setText(QApplication::translate("MainWindow", "PLAY", Q_NULLPTR));
        Button_Mode->setText(QApplication::translate("MainWindow", "MODE", Q_NULLPTR));
        Button_->setText(QApplication::translate("MainWindow", "VOLUME", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
