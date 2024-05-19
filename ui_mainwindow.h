/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QWidget *centralwidget;
    QTreeWidget *treeWidget;
    QLabel *label;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QComboBox *comboBox;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QTextBrowser *textBrowser_3;
    QLineEdit *lineEdit;
    QRadioButton *radioButton_10;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_11;
    QMenuBar *menubar;
    QMenu *menuvdv;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 590);
        action = new QAction(MainWindow);
        action->setObjectName("action");
        action_2 = new QAction(MainWindow);
        action_2->setObjectName("action_2");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        treeWidget = new QTreeWidget(centralwidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem2);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(__qtreewidgetitem3);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem4);
        treeWidget->setObjectName("treeWidget");
        treeWidget->setGeometry(QRect(0, 0, 256, 541));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(360, 140, 81, 101));
        label->setStyleSheet(QString::fromUtf8(""));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(350, 130, 391, 251));
        textBrowser_2 = new QTextBrowser(centralwidget);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(250, 0, 561, 591));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(470, 45, 72, 24));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(280, 10, 131, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(280, 40, 211, 31));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(270, 320, 501, 91));
        label_4->setLineWidth(3);
        label_4->setWordWrap(true);
        textBrowser_3 = new QTextBrowser(centralwidget);
        textBrowser_3->setObjectName("textBrowser_3");
        textBrowser_3->setGeometry(QRect(330, 390, 411, 131));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setEnabled(true);
        lineEdit->setGeometry(QRect(470, 90, 113, 24));
        lineEdit->setTabletTracking(false);
        radioButton_10 = new QRadioButton(centralwidget);
        radioButton_10->setObjectName("radioButton_10");
        radioButton_10->setGeometry(QRect(598, 65, 43, 22));
        radioButton_9 = new QRadioButton(centralwidget);
        radioButton_9->setObjectName("radioButton_9");
        radioButton_9->setGeometry(QRect(449, 65, 43, 22));
        radioButton_11 = new QRadioButton(centralwidget);
        radioButton_11->setObjectName("radioButton_11");
        radioButton_11->setGeometry(QRect(301, 65, 43, 22));
        MainWindow->setCentralWidget(centralwidget);
        textBrowser_2->raise();
        treeWidget->raise();
        textBrowser->raise();
        label->raise();
        comboBox->raise();
        label_2->raise();
        label_3->raise();
        radioButton_10->raise();
        radioButton_9->raise();
        radioButton_11->raise();
        label_4->raise();
        textBrowser_3->raise();
        lineEdit->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuvdv = new QMenu(menubar);
        menuvdv->setObjectName("menuvdv");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::BottomToolBarArea, toolBar);

        menubar->addAction(menuvdv->menuAction());
        menuvdv->addAction(action_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\222\320\265\321\200\321\201\320\270\321\217", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\320\222\320\265\321\200\321\201\320\270\321\217", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\320\275\320\264\320\260\321\200\321\202\321\213", nullptr));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("MainWindow", "\320\241\320\242\320\221 34.101.77", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("MainWindow", "\320\245\320\265\321\210\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 (bashHash)", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("MainWindow", "\320\241\320\242\320\221 34.101.31", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem3->child(0);
        ___qtreewidgetitem4->setText(0, QCoreApplication::translate("MainWindow", "\320\245\320\265\321\210\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 (beltHash)", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem3->child(1);
        ___qtreewidgetitem5->setText(0, QCoreApplication::translate("MainWindow", "\320\222\321\213\321\200\320\276\320\261\320\276\321\202\320\272\320\260 \320\270\320\274\320\270\321\202\320\276\320\262\321\201\321\202\320\260\320\262\320\272\320\270", nullptr));
        QTreeWidgetItem *___qtreewidgetitem6 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem6->setText(0, QCoreApplication::translate("MainWindow", "\320\241\320\242\320\221 34.101.45", nullptr));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem6->child(0);
        ___qtreewidgetitem7->setText(0, QCoreApplication::translate("MainWindow", "\320\222\321\213\321\200\320\260\320\261\320\276\321\202\320\272\320\260 \320\270 \320\277\321\200\320\276\320\262\320\265\321\200\320\272\320\260 \320\255\320\246\320\237", nullptr));
        QTreeWidgetItem *___qtreewidgetitem8 = treeWidget->topLevelItem(3);
        ___qtreewidgetitem8->setText(0, QCoreApplication::translate("MainWindow", "\320\241\320\242\320\221 34.101.60", nullptr));
        QTreeWidgetItem *___qtreewidgetitem9 = ___qtreewidgetitem8->child(0);
        ___qtreewidgetitem9->setText(0, QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267\320\264\320\265\320\273\320\265\320\275\320\270\320\265 \321\201\320\265\320\272\321\200\320\265\321\202\320\260", nullptr));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem8->child(1);
        ___qtreewidgetitem10->setText(0, QCoreApplication::translate("MainWindow", "\320\222\320\276\321\201\321\201\321\202\320\260\320\262\320\275\320\276\320\262\320\273\320\265\320\275\320\270\320\265 \320\270 \320\277\321\200\320\276\320\262\320\265\321\200\320\272\320\260 \321\201\320\265\320\272\321\200\320\265\321\202\320\260", nullptr));
        QTreeWidgetItem *___qtreewidgetitem11 = treeWidget->topLevelItem(4);
        ___qtreewidgetitem11->setText(0, QCoreApplication::translate("MainWindow", "\320\241\320\242\320\221 34.101.66", nullptr));
        QTreeWidgetItem *___qtreewidgetitem12 = ___qtreewidgetitem11->child(0);
        ___qtreewidgetitem12->setText(0, QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\320\265 \320\272\320\273\321\216\321\207\320\260", nullptr));
        treeWidget->setSortingEnabled(__sortingEnabled);

        label->setText(QString());
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">                               </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:"
                        "0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">                               \320\224\320\276\320\261\321\200\320\276 \320\277\320\276\320\266\320\260\320\273\320\276\320\262\320\260\321\202\321\214 \320\262 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\203 <span style=\" font-weight:700;\">CryptoEtalon!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p s"
                        "tyle=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\224\320\273\321\217 \320\275\320\260\321\207\320\260\320\273\320\260 \321\200\320\260\320\261\320\276\321\202\321\213 \320\262\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\275\320\265\320\276\320\261\321\205\320\276\320\264\320\270\320\274\321\213\320\271 \321\201\321\202\320\260\320\275\320\264\320\260\321\200\321\202 \320\262 \320\274\320\265\320\275\321\216 <span style=\" font-weight:700;\">&quot;\320\241\321\202\320\260\320\275\320\264\320\260\321\200\321\202\321\213&quot;</span> \321\201\320\273\320\265\320\262\320\260 \320\270 \320\262 \320\262\321\213\320\277\320\260\320\264\320\260\321\216\321\211\320\265\320\274 \321\201\320\277\320\270\321\201\320\272\320\265 \320\260\320\273\320\263\320\276\321\200\320\270\321\202\320\274\320\276\320\262 \320\264\320\260\320\275\320\276\320\263\320\276 \321\201\321\202\320\260\320\275\320\264\320\260\321\200\321\202\320\260 \320\262"
                        "\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\270\320\275\321\202\320\265\321\200\320\265\321\201\321\203\320\261\321\211\320\270\320\271 \320\222\320\260\321\201.</p></body></html>", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "128", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "192", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "256", nullptr));

        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        lineEdit->setText(QString());
        radioButton_10->setText(QCoreApplication::translate("MainWindow", "384", nullptr));
        radioButton_9->setText(QCoreApplication::translate("MainWindow", "256", nullptr));
        radioButton_11->setText(QCoreApplication::translate("MainWindow", "104", nullptr));
        menuvdv->setTitle(QCoreApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\320\270", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
