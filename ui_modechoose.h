/********************************************************************************
** Form generated from reading UI file 'modechoose.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODECHOOSE_H
#define UI_MODECHOOSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_ModeChoose
{
public:
    QDialogButtonBox *buttonBox;
    QComboBox *Box_RM;
    QLabel *label_RM;
    QLabel *label_PP;
    QComboBox *Box_PP;
    QComboBox *Box_WS;
    QLabel *label_WS;
    QComboBox *Box_WG;
    QLabel *label_WG;

    void setupUi(QDialog *ModeChoose)
    {
        if (ModeChoose->objectName().isEmpty())
            ModeChoose->setObjectName(QStringLiteral("ModeChoose"));
        ModeChoose->resize(360, 351);
        buttonBox = new QDialogButtonBox(ModeChoose);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(100, 290, 151, 51));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        Box_RM = new QComboBox(ModeChoose);
        Box_RM->setObjectName(QStringLiteral("Box_RM"));
        Box_RM->setGeometry(QRect(159, 34, 162, 23));
        label_RM = new QLabel(ModeChoose);
        label_RM->setObjectName(QStringLiteral("label_RM"));
        label_RM->setGeometry(QRect(40, 30, 100, 30));
        label_PP = new QLabel(ModeChoose);
        label_PP->setObjectName(QStringLiteral("label_PP"));
        label_PP->setGeometry(QRect(40, 100, 100, 30));
        Box_PP = new QComboBox(ModeChoose);
        Box_PP->setObjectName(QStringLiteral("Box_PP"));
        Box_PP->setGeometry(QRect(158, 104, 162, 23));
        Box_WS = new QComboBox(ModeChoose);
        Box_WS->setObjectName(QStringLiteral("Box_WS"));
        Box_WS->setGeometry(QRect(158, 174, 162, 23));
        label_WS = new QLabel(ModeChoose);
        label_WS->setObjectName(QStringLiteral("label_WS"));
        label_WS->setGeometry(QRect(40, 170, 100, 30));
        Box_WG = new QComboBox(ModeChoose);
        Box_WG->setObjectName(QStringLiteral("Box_WG"));
        Box_WG->setGeometry(QRect(158, 244, 162, 23));
        label_WG = new QLabel(ModeChoose);
        label_WG->setObjectName(QStringLiteral("label_WG"));
        label_WG->setGeometry(QRect(40, 240, 100, 30));

        retranslateUi(ModeChoose);

        QMetaObject::connectSlotsByName(ModeChoose);
    } // setupUi

    void retranslateUi(QDialog *ModeChoose)
    {
        ModeChoose->setWindowTitle(QApplication::translate("ModeChoose", "Dialog", Q_NULLPTR));
        Box_RM->clear();
        Box_RM->insertItems(0, QStringList()
         << QApplication::translate("ModeChoose", "Standard", Q_NULLPTR)
         << QApplication::translate("ModeChoose", "ASCII With Color", Q_NULLPTR)
         << QApplication::translate("ModeChoose", "ASCII Without Color", Q_NULLPTR)
        );
        label_RM->setText(QApplication::translate("ModeChoose", "   Render Mode", Q_NULLPTR));
        label_PP->setText(QApplication::translate("ModeChoose", "  Place to Play", Q_NULLPTR));
        Box_PP->clear();
        Box_PP->insertItems(0, QStringList()
         << QApplication::translate("ModeChoose", "In This Window", Q_NULLPTR)
         << QApplication::translate("ModeChoose", "New Window", Q_NULLPTR)
         << QApplication::translate("ModeChoose", "On Top & No Border", Q_NULLPTR)
        );
        Box_WS->clear();
        Box_WS->insertItems(0, QStringList()
         << QApplication::translate("ModeChoose", "1/2 Screen Size", Q_NULLPTR)
         << QApplication::translate("ModeChoose", "1/3 Screen Size", Q_NULLPTR)
         << QApplication::translate("ModeChoose", "1/4 Screen Size", Q_NULLPTR)
         << QApplication::translate("ModeChoose", "1/5 Screen Size", Q_NULLPTR)
        );
        label_WS->setText(QApplication::translate("ModeChoose", "   Window Size", Q_NULLPTR));
        Box_WG->clear();
        Box_WG->insertItems(0, QStringList()
         << QApplication::translate("ModeChoose", "Left Top", Q_NULLPTR)
         << QApplication::translate("ModeChoose", "Left", Q_NULLPTR)
         << QApplication::translate("ModeChoose", "Left Bottom", Q_NULLPTR)
         << QApplication::translate("ModeChoose", "Top", Q_NULLPTR)
         << QApplication::translate("ModeChoose", "Bottom", Q_NULLPTR)
         << QApplication::translate("ModeChoose", "Right Top", Q_NULLPTR)
         << QApplication::translate("ModeChoose", "Right", Q_NULLPTR)
         << QApplication::translate("ModeChoose", "Right Bottom", Q_NULLPTR)
        );
        label_WG->setText(QApplication::translate("ModeChoose", "   Window Geo", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ModeChoose: public Ui_ModeChoose {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODECHOOSE_H
