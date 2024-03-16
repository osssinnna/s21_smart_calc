/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionGraphic;
    QAction *actionCredit;
    QAction *actionSimple;
    QAction *actionDebit;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_2;
    QWidget *widget_button;
    QPushButton *pushButton_1;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_tan;
    QPushButton *pushButton_C;
    QPushButton *pushButton_asin;
    QPushButton *pushButton_log;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_0;
    QPushButton *pushButton_pow;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_tchk;
    QPushButton *pushButton_skobkao;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_7;
    QPushButton *pushButton_acos;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_mul;
    QPushButton *pushButton_2;
    QPushButton *pushButton_skobkaz;
    QPushButton *pushButton_6;
    QPushButton *pushButton_8;
    QPushButton *pushButton_x;
    QPushButton *pushButton_ln;
    QPushButton *pushButton_del;
    QPushButton *pushButton_mod;
    QPushButton *pushButton_div;
    QPushButton *pushButton_atan;
    QPushButton *pushButton_3;
    QPushButton *pushButton_otv;
    QPushButton *pushButton_9;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton_10;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_graph;
    QWidget *tab_2;
    QLabel *label_7;
    QLineEdit *lineEdit_6;
    QLabel *label_8;
    QPushButton *pushButton_graph_2;
    QLabel *lb_num_monthes_2;
    QLabel *lb_interest_rate_2;
    QLabel *lb_payment_type_2;
    QComboBox *ed_type_2;
    QFrame *fr_result;
    QLabel *lb_overpayment;
    QLabel *lb_total_payment;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *lb_payments;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLabel *label_19;
    QLabel *label_18;
    QFrame *line_11;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLabel *lb_payments_2;
    QLabel *lb_payments_3;
    QFrame *line_10;
    QWidget *tab_3;
    QLabel *label_54;
    QPushButton *pushButton_12;
    QLineEdit *lineEdit_14;
    QLabel *label_14;
    QLabel *label_37;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_3;
    QGridLayout *gridLayout_3;
    QLabel *label_60;
    QLabel *label_59;
    QFrame *line_9;
    QLineEdit *lineEdit_19;
    QLabel *label_24;
    QLabel *label_39;
    QCheckBox *checkBox;
    QLabel *label_13;
    QLabel *label_11;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_7;
    QGridLayout *gridLayout_7;
    QFrame *line_8;
    QLabel *label_34;
    QLabel *label_35;
    QLineEdit *lineEdit_15;
    QPushButton *pushButton_14;
    QLineEdit *lineEdit_10;
    QComboBox *comboBox_2;
    QPushButton *pushButton;
    QLabel *label_58;
    QLabel *label_64;
    QLabel *label_50;
    QLabel *label_61;
    QDateEdit *dateEdit_4;
    QLabel *label_20;
    QDateEdit *dateEdit_2;
    QLineEdit *lineEdit_12;
    QLabel *label_21;
    QLineEdit *lineEdit_18;
    QLabel *label_53;
    QLabel *label_56;
    QLabel *label_62;
    QWidget *widget_debit;
    QFrame *line_6;
    QLabel *label_55;
    QLineEdit *lineEdit_9;
    QLabel *label_49;
    QLabel *label_52;
    QLabel *label_38;
    QLineEdit *lineEdit_13;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_6;
    QGridLayout *gridLayout_6;
    QLabel *label_48;
    QLabel *label_47;
    QFrame *line_2;
    QLineEdit *lineEdit_17;
    QLabel *label_46;
    QLabel *label_36;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(700, 500);
        actionGraphic = new QAction(MainWindow);
        actionGraphic->setObjectName(QString::fromUtf8("actionGraphic"));
        actionCredit = new QAction(MainWindow);
        actionCredit->setObjectName(QString::fromUtf8("actionCredit"));
        actionSimple = new QAction(MainWindow);
        actionSimple->setObjectName(QString::fromUtf8("actionSimple"));
        actionDebit = new QAction(MainWindow);
        actionDebit->setObjectName(QString::fromUtf8("actionDebit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 700, 541));
        tabWidget->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"  background-color: #37373b;\n"
" color: white;\n"
"}\n"
"\n"
"background-color : black;"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(370, 90, 31, 21));
        QFont font;
        font.setPointSize(10);
        label_2->setFont(font);
        widget_button = new QWidget(tab);
        widget_button->setObjectName(QString::fromUtf8("widget_button"));
        widget_button->setGeometry(QRect(10, 130, 501, 341));
        pushButton_1 = new QPushButton(widget_button);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(230, 210, 61, 61));
        pushButton_1->setFont(font);
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_plus = new QPushButton(widget_button);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        pushButton_plus->setGeometry(QRect(440, 140, 61, 61));
        pushButton_plus->setFont(font);
        pushButton_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : #c7cfd1;\n"
"	 border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_tan = new QPushButton(widget_button);
        pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));
        pushButton_tan->setGeometry(QRect(140, 210, 61, 61));
        pushButton_tan->setFont(font);
        pushButton_tan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : #b6bdbf;\n"
"	 border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_C = new QPushButton(widget_button);
        pushButton_C->setObjectName(QString::fromUtf8("pushButton_C"));
        pushButton_C->setGeometry(QRect(230, 0, 61, 61));
        pushButton_C->setFont(font);
        pushButton_C->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : #c7cfd1;\n"
"	 border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_asin = new QPushButton(widget_button);
        pushButton_asin->setObjectName(QString::fromUtf8("pushButton_asin"));
        pushButton_asin->setGeometry(QRect(0, 280, 61, 61));
        pushButton_asin->setFont(font);
        pushButton_asin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : #b6bdbf;\n"
"	 border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_log = new QPushButton(widget_button);
        pushButton_log->setObjectName(QString::fromUtf8("pushButton_log"));
        pushButton_log->setGeometry(QRect(70, 140, 61, 61));
        pushButton_log->setFont(font);
        pushButton_log->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : #b6bdbf;\n"
"	 border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_cos = new QPushButton(widget_button);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
        pushButton_cos->setGeometry(QRect(70, 210, 61, 61));
        pushButton_cos->setFont(font);
        pushButton_cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : #b6bdbf;\n"
"	 border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_0 = new QPushButton(widget_button);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(230, 280, 131, 61));
        pushButton_0->setFont(font);
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_pow = new QPushButton(widget_button);
        pushButton_pow->setObjectName(QString::fromUtf8("pushButton_pow"));
        pushButton_pow->setGeometry(QRect(70, 70, 61, 61));
        pushButton_pow->setFont(font);
        pushButton_pow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : #b6bdbf;\n"
"	 border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_5 = new QPushButton(widget_button);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(300, 140, 61, 61));
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_4 = new QPushButton(widget_button);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(230, 140, 61, 61));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_sin = new QPushButton(widget_button);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        pushButton_sin->setGeometry(QRect(0, 210, 61, 61));
        pushButton_sin->setFont(font);
        pushButton_sin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : #b6bdbf;\n"
"	 border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_tchk = new QPushButton(widget_button);
        pushButton_tchk->setObjectName(QString::fromUtf8("pushButton_tchk"));
        pushButton_tchk->setGeometry(QRect(370, 280, 61, 61));
        pushButton_tchk->setFont(font);
        pushButton_tchk->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_skobkao = new QPushButton(widget_button);
        pushButton_skobkao->setObjectName(QString::fromUtf8("pushButton_skobkao"));
        pushButton_skobkao->setGeometry(QRect(70, 0, 61, 61));
        pushButton_skobkao->setFont(font);
        pushButton_skobkao->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : #b6bdbf;\n"
"	 border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_minus = new QPushButton(widget_button);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        pushButton_minus->setGeometry(QRect(440, 70, 61, 61));
        pushButton_minus->setFont(font);
        pushButton_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : #c7cfd1;\n"
"	 border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_7 = new QPushButton(widget_button);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(230, 70, 61, 61));
        pushButton_7->setFont(font);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_acos = new QPushButton(widget_button);
        pushButton_acos->setObjectName(QString::fromUtf8("pushButton_acos"));
        pushButton_acos->setGeometry(QRect(70, 280, 61, 61));
        pushButton_acos->setFont(font);
        pushButton_acos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : #b6bdbf;\n"
"	 border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_sqrt = new QPushButton(widget_button);
        pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));
        pushButton_sqrt->setGeometry(QRect(0, 140, 61, 61));
        pushButton_sqrt->setFont(font);
        pushButton_sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : #b6bdbf;\n"
"	 border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_mul = new QPushButton(widget_button);
        pushButton_mul->setObjectName(QString::fromUtf8("pushButton_mul"));
        pushButton_mul->setGeometry(QRect(370, 0, 61, 61));
        pushButton_mul->setFont(font);
        pushButton_mul->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : #c7cfd1;\n"
"	 border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_2 = new QPushButton(widget_button);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 210, 61, 61));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_skobkaz = new QPushButton(widget_button);
        pushButton_skobkaz->setObjectName(QString::fromUtf8("pushButton_skobkaz"));
        pushButton_skobkaz->setGeometry(QRect(140, 0, 61, 61));
        pushButton_skobkaz->setFont(font);
        pushButton_skobkaz->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : #b6bdbf;\n"
"	 border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_6 = new QPushButton(widget_button);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(370, 140, 61, 61));
        pushButton_6->setFont(font);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_8 = new QPushButton(widget_button);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(300, 70, 61, 61));
        pushButton_8->setFont(font);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_x = new QPushButton(widget_button);
        pushButton_x->setObjectName(QString::fromUtf8("pushButton_x"));
        pushButton_x->setGeometry(QRect(0, 0, 61, 131));
        pushButton_x->setFont(font);
        pushButton_x->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : #b6bdbf;\n"
"	 border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_ln = new QPushButton(widget_button);
        pushButton_ln->setObjectName(QString::fromUtf8("pushButton_ln"));
        pushButton_ln->setGeometry(QRect(140, 140, 61, 61));
        pushButton_ln->setFont(font);
        pushButton_ln->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : #b6bdbf;\n"
"	 border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_del = new QPushButton(widget_button);
        pushButton_del->setObjectName(QString::fromUtf8("pushButton_del"));
        pushButton_del->setGeometry(QRect(440, 0, 61, 61));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        pushButton_del->setFont(font1);
        pushButton_del->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : #c7cfd1;\n"
"	 border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_mod = new QPushButton(widget_button);
        pushButton_mod->setObjectName(QString::fromUtf8("pushButton_mod"));
        pushButton_mod->setGeometry(QRect(140, 70, 61, 61));
        pushButton_mod->setFont(font);
        pushButton_mod->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : #b6bdbf;\n"
"	 border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_div = new QPushButton(widget_button);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
        pushButton_div->setGeometry(QRect(300, 0, 61, 61));
        pushButton_div->setFont(font);
        pushButton_div->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : #c7cfd1;\n"
"	 border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_atan = new QPushButton(widget_button);
        pushButton_atan->setObjectName(QString::fromUtf8("pushButton_atan"));
        pushButton_atan->setGeometry(QRect(140, 280, 61, 61));
        pushButton_atan->setFont(font);
        pushButton_atan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : #b6bdbf;\n"
"	 border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_3 = new QPushButton(widget_button);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(370, 210, 61, 61));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_otv = new QPushButton(widget_button);
        pushButton_otv->setObjectName(QString::fromUtf8("pushButton_otv"));
        pushButton_otv->setGeometry(QRect(440, 210, 61, 131));
        QFont font2;
        font2.setPointSize(12);
        pushButton_otv->setFont(font2);
        pushButton_otv->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : #db6f30;\n"
"	 border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #db6f30, stop: 1 #f08141);\n"
"}\n"
""));
        pushButton_9 = new QPushButton(widget_button);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(370, 70, 61, 61));
        pushButton_9->setFont(font);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 501, 61));
        QFont font3;
        font3.setPointSize(14);
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"  background-color: #37373b;\n"
" color: white;\n"
"}\n"
"\n"
"background-color : black;"));
        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(400, 80, 111, 41));
        lineEdit->setFont(font2);
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"  background-color: #37373b;\n"
" color: white;\n"
"}\n"
"\n"
"background-color : black;"));
        pushButton_10 = new QPushButton(tab);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(10, 80, 201, 41));
        pushButton_10->setFont(font);
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(540, 70, 51, 21));
        label_3->setFont(font);
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(540, 140, 51, 21));
        label_4->setFont(font);
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(540, 280, 51, 21));
        label_5->setFont(font);
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(540, 210, 51, 21));
        label_6->setFont(font);
        lineEdit_2 = new QLineEdit(tab);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(590, 200, 101, 41));
        lineEdit_2->setFont(font2);
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"  background-color: #37373b;\n"
" color: white;\n"
"}\n"
"\n"
"background-color : black;"));
        lineEdit_3 = new QLineEdit(tab);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(590, 270, 101, 41));
        lineEdit_3->setFont(font2);
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"  background-color: #37373b;\n"
" color: white;\n"
"}\n"
"\n"
"background-color : black;"));
        lineEdit_4 = new QLineEdit(tab);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(590, 130, 101, 41));
        lineEdit_4->setFont(font2);
        lineEdit_4->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"  background-color: #37373b;\n"
" color: white;\n"
"}\n"
"\n"
"background-color : black;"));
        lineEdit_5 = new QLineEdit(tab);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(590, 60, 101, 41));
        lineEdit_5->setFont(font2);
        lineEdit_5->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"  background-color: #37373b;\n"
" color: white;\n"
"}\n"
"\n"
"background-color : black;"));
        pushButton_graph = new QPushButton(tab);
        pushButton_graph->setObjectName(QString::fromUtf8("pushButton_graph"));
        pushButton_graph->setGeometry(QRect(530, 370, 151, 61));
        pushButton_graph->setFont(font2);
        pushButton_graph->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : #b6bdbf;\n"
"	 border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        tabWidget->addTab(tab, QString());
        widget_button->raise();
        label_2->raise();
        label->raise();
        lineEdit->raise();
        pushButton_10->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        lineEdit_2->raise();
        lineEdit_3->raise();
        lineEdit_4->raise();
        lineEdit_5->raise();
        pushButton_graph->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 20, 131, 21));
        label_7->setFont(font);
        lineEdit_6 = new QLineEdit(tab_2);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(180, 20, 151, 31));
        lineEdit_6->setFont(font2);
        lineEdit_6->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"  background-color: #37373b;\n"
" color: white;\n"
"}\n"
"\n"
"background-color : black;"));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 70, 51, 21));
        label_8->setFont(font2);
        pushButton_graph_2 = new QPushButton(tab_2);
        pushButton_graph_2->setObjectName(QString::fromUtf8("pushButton_graph_2"));
        pushButton_graph_2->setGeometry(QRect(10, 220, 191, 51));
        pushButton_graph_2->setFont(font2);
        pushButton_graph_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : #b6bdbf;\n"
"	 border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        lb_num_monthes_2 = new QLabel(tab_2);
        lb_num_monthes_2->setObjectName(QString::fromUtf8("lb_num_monthes_2"));
        lb_num_monthes_2->setGeometry(QRect(30, 60, 131, 21));
        lb_num_monthes_2->setFont(font);
        lb_interest_rate_2 = new QLabel(tab_2);
        lb_interest_rate_2->setObjectName(QString::fromUtf8("lb_interest_rate_2"));
        lb_interest_rate_2->setGeometry(QRect(40, 110, 121, 21));
        lb_interest_rate_2->setFont(font);
        lb_payment_type_2 = new QLabel(tab_2);
        lb_payment_type_2->setObjectName(QString::fromUtf8("lb_payment_type_2"));
        lb_payment_type_2->setGeometry(QRect(40, 140, 121, 31));
        lb_payment_type_2->setFont(font);
        ed_type_2 = new QComboBox(tab_2);
        ed_type_2->addItem(QString());
        ed_type_2->addItem(QString());
        ed_type_2->setObjectName(QString::fromUtf8("ed_type_2"));
        ed_type_2->setGeometry(QRect(180, 140, 151, 31));
        ed_type_2->setFont(font2);
        ed_type_2->setStyleSheet(QString::fromUtf8("QComboBox{\n"
" qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"  background-color: #37373b;\n"
" color: white;\n"
"}\n"
"\n"
"background-color : black;"));
        fr_result = new QFrame(tab_2);
        fr_result->setObjectName(QString::fromUtf8("fr_result"));
        fr_result->setGeometry(QRect(10, 310, 341, 131));
        fr_result->setFrameShape(QFrame::StyledPanel);
        fr_result->setFrameShadow(QFrame::Raised);
        lb_overpayment = new QLabel(fr_result);
        lb_overpayment->setObjectName(QString::fromUtf8("lb_overpayment"));
        lb_overpayment->setGeometry(QRect(30, 70, 111, 31));
        lb_overpayment->setFont(font);
        lb_total_payment = new QLabel(fr_result);
        lb_total_payment->setObjectName(QString::fromUtf8("lb_total_payment"));
        lb_total_payment->setGeometry(QRect(30, 20, 111, 21));
        lb_total_payment->setFont(font);
        label_9 = new QLabel(fr_result);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(140, 20, 191, 31));
        label_9->setFont(font3);
        label_9->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"  background-color: #37373b;\n"
" color: white;\n"
"}\n"
"\n"
"background-color : black;"));
        label_10 = new QLabel(fr_result);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(140, 70, 191, 31));
        label_10->setFont(font3);
        label_10->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"  background-color: #37373b;\n"
" color: white;\n"
"}\n"
"\n"
"background-color : black;"));
        lb_payments = new QLabel(tab_2);
        lb_payments->setObjectName(QString::fromUtf8("lb_payments"));
        lb_payments->setGeometry(QRect(420, 10, 211, 21));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        lb_payments->setFont(font4);
        lb_payments->setAlignment(Qt::AlignCenter);
        scrollArea = new QScrollArea(tab_2);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(390, 70, 291, 391));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 274, 389));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_19 = new QLabel(scrollAreaWidgetContents);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setMinimumSize(QSize(150, 0));
        label_19->setFont(font2);

        gridLayout->addWidget(label_19, 0, 3, 1, 1);

        label_18 = new QLabel(scrollAreaWidgetContents);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font2);

        gridLayout->addWidget(label_18, 0, 1, 1, 1);

        line_11 = new QFrame(scrollAreaWidgetContents);
        line_11->setObjectName(QString::fromUtf8("line_11"));
        line_11->setFrameShape(QFrame::VLine);
        line_11->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_11, 0, 2, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);
        lineEdit_7 = new QLineEdit(tab_2);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(180, 60, 151, 31));
        lineEdit_7->setFont(font2);
        lineEdit_7->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"  background-color: #37373b;\n"
" color: white;\n"
"}\n"
"\n"
"background-color : black;"));
        lineEdit_8 = new QLineEdit(tab_2);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(180, 100, 151, 31));
        lineEdit_8->setFont(font2);
        lineEdit_8->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"  background-color: #37373b;\n"
" color: white;\n"
"}\n"
"\n"
"background-color : black;"));
        lb_payments_2 = new QLabel(tab_2);
        lb_payments_2->setObjectName(QString::fromUtf8("lb_payments_2"));
        lb_payments_2->setGeometry(QRect(390, 40, 111, 21));
        lb_payments_2->setFont(font);
        lb_payments_2->setAlignment(Qt::AlignCenter);
        lb_payments_3 = new QLabel(tab_2);
        lb_payments_3->setObjectName(QString::fromUtf8("lb_payments_3"));
        lb_payments_3->setGeometry(QRect(520, 40, 141, 21));
        lb_payments_3->setFont(font);
        lb_payments_3->setAlignment(Qt::AlignCenter);
        line_10 = new QFrame(tab_2);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setGeometry(QRect(360, 0, 20, 610));
        line_10->setFrameShape(QFrame::VLine);
        line_10->setFrameShadow(QFrame::Sunken);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label_54 = new QLabel(tab_3);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        label_54->setGeometry(QRect(20, 90, 161, 21));
        label_54->setFont(font);
        pushButton_12 = new QPushButton(tab_3);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(0, 200, 181, 41));
        pushButton_12->setFont(font2);
        pushButton_12->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : #b6bdbf;\n"
"	 border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        lineEdit_14 = new QLineEdit(tab_3);
        lineEdit_14->setObjectName(QString::fromUtf8("lineEdit_14"));
        lineEdit_14->setGeometry(QRect(190, 50, 181, 31));
        lineEdit_14->setFont(font2);
        lineEdit_14->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"  background-color: #37373b;\n"
" color: white;\n"
"}\n"
"\n"
"background-color : black;"));
        label_14 = new QLabel(tab_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(20, 10, 151, 21));
        label_14->setFont(font);
        label_37 = new QLabel(tab_3);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(705, 90, 21, 21));
        scrollArea_4 = new QScrollArea(tab_3);
        scrollArea_4->setObjectName(QString::fromUtf8("scrollArea_4"));
        scrollArea_4->setGeometry(QRect(10, 370, 170, 101));
        scrollArea_4->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea_4->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 153, 99));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_60 = new QLabel(scrollAreaWidgetContents_3);
        label_60->setObjectName(QString::fromUtf8("label_60"));
        label_60->setMinimumSize(QSize(65, 0));
        label_60->setMaximumSize(QSize(65, 16777215));
        QFont font5;
        font5.setPointSize(8);
        label_60->setFont(font5);

        gridLayout_3->addWidget(label_60, 0, 2, 1, 1);

        label_59 = new QLabel(scrollAreaWidgetContents_3);
        label_59->setObjectName(QString::fromUtf8("label_59"));
        label_59->setFont(font5);

        gridLayout_3->addWidget(label_59, 0, 0, 1, 1);

        line_9 = new QFrame(scrollAreaWidgetContents_3);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setFrameShape(QFrame::VLine);
        line_9->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_9, 0, 1, 1, 1);

        scrollArea_4->setWidget(scrollAreaWidgetContents_3);
        lineEdit_19 = new QLineEdit(tab_3);
        lineEdit_19->setObjectName(QString::fromUtf8("lineEdit_19"));
        lineEdit_19->setGeometry(QRect(190, 170, 181, 31));
        lineEdit_19->setFont(font2);
        lineEdit_19->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"  background-color: #37373b;\n"
" color: white;\n"
"}\n"
"\n"
"background-color : black;"));
        label_24 = new QLabel(tab_3);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(20, 50, 161, 21));
        label_24->setFont(font);
        label_39 = new QLabel(tab_3);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(705, 130, 21, 21));
        checkBox = new QCheckBox(tab_3);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(220, 210, 141, 23));
        checkBox->setFont(font);
        checkBox->setLayoutDirection(Qt::RightToLeft);
        label_13 = new QLabel(tab_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(30, 130, 131, 21));
        label_13->setFont(font);
        label_11 = new QLabel(tab_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(40, 170, 141, 21));
        label_11->setFont(font);
        scrollArea_2 = new QScrollArea(tab_3);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(200, 370, 170, 101));
        scrollArea_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_7 = new QWidget();
        scrollAreaWidgetContents_7->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_7"));
        scrollAreaWidgetContents_7->setGeometry(QRect(0, 0, 153, 99));
        gridLayout_7 = new QGridLayout(scrollAreaWidgetContents_7);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        line_8 = new QFrame(scrollAreaWidgetContents_7);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);

        gridLayout_7->addWidget(line_8, 0, 1, 1, 1);

        label_34 = new QLabel(scrollAreaWidgetContents_7);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setFont(font5);

        gridLayout_7->addWidget(label_34, 0, 0, 1, 1);

        label_35 = new QLabel(scrollAreaWidgetContents_7);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setMinimumSize(QSize(65, 0));
        label_35->setMaximumSize(QSize(65, 16777215));
        label_35->setFont(font5);

        gridLayout_7->addWidget(label_35, 0, 3, 1, 1);

        scrollArea_2->setWidget(scrollAreaWidgetContents_7);
        lineEdit_15 = new QLineEdit(tab_3);
        lineEdit_15->setObjectName(QString::fromUtf8("lineEdit_15"));
        lineEdit_15->setGeometry(QRect(190, 130, 181, 31));
        lineEdit_15->setFont(font2);
        lineEdit_15->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"  background-color: #37373b;\n"
" color: white;\n"
"}\n"
"\n"
"background-color : black;"));
        pushButton_14 = new QPushButton(tab_3);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(200, 250, 171, 31));
        pushButton_14->setFont(font);
        pushButton_14->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        lineEdit_10 = new QLineEdit(tab_3);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(190, 10, 181, 31));
        lineEdit_10->setFont(font2);
        lineEdit_10->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"  background-color: #37373b;\n"
" color: white;\n"
"}\n"
"\n"
"background-color : black;"));
        comboBox_2 = new QComboBox(tab_3);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(190, 90, 181, 31));
        comboBox_2->setFont(font2);
        comboBox_2->setStyleSheet(QString::fromUtf8("QComboBox{\n"
" qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"  background-color: #37373b;\n"
" color: white;\n"
"}\n"
"\n"
"background-color : black;"));
        pushButton = new QPushButton(tab_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 250, 171, 31));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        label_58 = new QLabel(tab_3);
        label_58->setObjectName(QString::fromUtf8("label_58"));
        label_58->setGeometry(QRect(705, 50, 21, 21));
        label_64 = new QLabel(tab_3);
        label_64->setObjectName(QString::fromUtf8("label_64"));
        label_64->setGeometry(QRect(30, 350, 41, 17));
        label_50 = new QLabel(tab_3);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setGeometry(QRect(110, 350, 50, 17));
        label_61 = new QLabel(tab_3);
        label_61->setObjectName(QString::fromUtf8("label_61"));
        label_61->setGeometry(QRect(200, 290, 41, 21));
        dateEdit_4 = new QDateEdit(tab_3);
        dateEdit_4->setObjectName(QString::fromUtf8("dateEdit_4"));
        dateEdit_4->setGeometry(QRect(250, 290, 117, 25));
        dateEdit_4->setFont(font);
        dateEdit_4->setStyleSheet(QString::fromUtf8("QDateEdit {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"  background-color: #37373b;\n"
" color: white;\n"
"}\n"
"\n"
"background-color : black;"));
        dateEdit_4->setDateTime(QDateTime(QDate(2023, 7, 1), QTime(0, 0, 0)));
        label_20 = new QLabel(tab_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(10, 290, 41, 21));
        dateEdit_2 = new QDateEdit(tab_3);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(60, 290, 121, 25));
        dateEdit_2->setFont(font);
        dateEdit_2->setStyleSheet(QString::fromUtf8("QDateEdit {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"  background-color: #37373b;\n"
" color: white;\n"
"}\n"
"\n"
"background-color : black;"));
        dateEdit_2->setDateTime(QDateTime(QDate(2023, 7, 1), QTime(0, 0, 0)));
        lineEdit_12 = new QLineEdit(tab_3);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(80, 320, 101, 25));
        lineEdit_12->setFont(font);
        lineEdit_12->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"  background-color: #37373b;\n"
" color: white;\n"
"}\n"
"\n"
"background-color : black;"));
        label_21 = new QLabel(tab_3);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(0, 320, 71, 20));
        lineEdit_18 = new QLineEdit(tab_3);
        lineEdit_18->setObjectName(QString::fromUtf8("lineEdit_18"));
        lineEdit_18->setGeometry(QRect(266, 320, 101, 25));
        lineEdit_18->setFont(font);
        lineEdit_18->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"  background-color: #37373b;\n"
" color: white;\n"
"}\n"
"\n"
"background-color : black;"));
        label_53 = new QLabel(tab_3);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        label_53->setGeometry(QRect(300, 350, 50, 17));
        label_56 = new QLabel(tab_3);
        label_56->setObjectName(QString::fromUtf8("label_56"));
        label_56->setGeometry(QRect(220, 350, 41, 17));
        label_62 = new QLabel(tab_3);
        label_62->setObjectName(QString::fromUtf8("label_62"));
        label_62->setGeometry(QRect(190, 320, 71, 20));
        widget_debit = new QWidget(tab_3);
        widget_debit->setObjectName(QString::fromUtf8("widget_debit"));
        widget_debit->setGeometry(QRect(370, 0, 321, 471));
        line_6 = new QFrame(widget_debit);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(0, -10, 20, 610));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);
        label_55 = new QLabel(widget_debit);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setGeometry(QRect(25, 10, 111, 20));
        label_55->setFont(font);
        lineEdit_9 = new QLineEdit(widget_debit);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(145, 10, 171, 31));
        lineEdit_9->setFont(font2);
        lineEdit_9->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"  background-color: #37373b;\n"
" color: white;\n"
"}\n"
"\n"
"background-color : black;"));
        label_49 = new QLabel(widget_debit);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setGeometry(QRect(85, 130, 181, 20));
        label_49->setFont(font4);
        label_52 = new QLabel(widget_debit);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        label_52->setGeometry(QRect(55, 150, 41, 17));
        label_52->setFont(font);
        label_38 = new QLabel(widget_debit);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(25, 90, 111, 20));
        label_38->setFont(font);
        lineEdit_13 = new QLineEdit(widget_debit);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));
        lineEdit_13->setGeometry(QRect(145, 90, 171, 31));
        lineEdit_13->setFont(font2);
        lineEdit_13->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"  background-color: #37373b;\n"
" color: white;\n"
"}\n"
"\n"
"background-color : black;"));
        scrollArea_3 = new QScrollArea(widget_debit);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setGeometry(QRect(25, 170, 291, 301));
        scrollArea_3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea_3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 274, 299));
        gridLayout_6 = new QGridLayout(scrollAreaWidgetContents_6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_48 = new QLabel(scrollAreaWidgetContents_6);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_48->sizePolicy().hasHeightForWidth());
        label_48->setSizePolicy(sizePolicy);
        label_48->setMinimumSize(QSize(185, 0));

        gridLayout_6->addWidget(label_48, 0, 3, 1, 1);

        label_47 = new QLabel(scrollAreaWidgetContents_6);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        sizePolicy.setHeightForWidth(label_47->sizePolicy().hasHeightForWidth());
        label_47->setSizePolicy(sizePolicy);

        gridLayout_6->addWidget(label_47, 0, 0, 1, 1);

        line_2 = new QFrame(scrollAreaWidgetContents_6);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_6->addWidget(line_2, 0, 1, 1, 1);

        scrollArea_3->setWidget(scrollAreaWidgetContents_6);
        lineEdit_17 = new QLineEdit(widget_debit);
        lineEdit_17->setObjectName(QString::fromUtf8("lineEdit_17"));
        lineEdit_17->setGeometry(QRect(145, 50, 171, 31));
        lineEdit_17->setFont(font2);
        lineEdit_17->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"  background-color: #37373b;\n"
" color: white;\n"
"}\n"
"\n"
"background-color : black;"));
        label_46 = new QLabel(widget_debit);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setGeometry(QRect(195, 150, 50, 17));
        label_46->setFont(font);
        label_36 = new QLabel(widget_debit);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(15, 50, 121, 20));
        label_36->setFont(font);
        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionGraphic->setText(QCoreApplication::translate("MainWindow", "Graphic", nullptr));
        actionCredit->setText(QCoreApplication::translate("MainWindow", "Credit", nullptr));
        actionSimple->setText(QCoreApplication::translate("MainWindow", "Simple", nullptr));
        actionDebit->setText(QCoreApplication::translate("MainWindow", "Debit", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "x =", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        pushButton_C->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pushButton_asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        pushButton_log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        pushButton_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_pow->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        pushButton_tchk->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_skobkao->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        pushButton_mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_skobkaz->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_x->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        pushButton_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        pushButton_del->setText(QCoreApplication::translate("MainWindow", "\342\206\220", nullptr));
        pushButton_mod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        pushButton_div->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        pushButton_atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_otv->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        label->setText(QString());
        lineEdit->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Graphic", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "x min =", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "x max =", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "y max = ", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "y min =", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_graph->setText(QCoreApplication::translate("MainWindow", "Build", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Simple", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Loan amount, rubles", nullptr));
        lineEdit_6->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_8->setText(QString());
        pushButton_graph_2->setText(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
        lb_num_monthes_2->setText(QCoreApplication::translate("MainWindow", "Loan term, monthes", nullptr));
        lb_interest_rate_2->setText(QCoreApplication::translate("MainWindow", "Interest rate, %", nullptr));
        lb_payment_type_2->setText(QCoreApplication::translate("MainWindow", "Type of payment", nullptr));
        ed_type_2->setItemText(0, QCoreApplication::translate("MainWindow", "Annuity", nullptr));
        ed_type_2->setItemText(1, QCoreApplication::translate("MainWindow", "Differentiated", nullptr));

        lb_overpayment->setText(QCoreApplication::translate("MainWindow", "Overpayment:", nullptr));
        lb_total_payment->setText(QCoreApplication::translate("MainWindow", "Total payment:", nullptr));
        label_9->setText(QString());
        label_10->setText(QString());
        lb_payments->setText(QCoreApplication::translate("MainWindow", "Payments schedule", nullptr));
        label_19->setText(QString());
        label_18->setText(QString());
        lineEdit_7->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lineEdit_8->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lb_payments_2->setText(QCoreApplication::translate("MainWindow", "Month", nullptr));
        lb_payments_3->setText(QCoreApplication::translate("MainWindow", "Payment", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Credit", nullptr));
        label_54->setText(QCoreApplication::translate("MainWindow", "Periodicity of payments", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
        lineEdit_14->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Deposit amount, rubles", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "\342\202\275", nullptr));
        label_60->setText(QString());
        label_59->setText(QString());
        lineEdit_19->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Deposit term, months", nullptr));
        label_39->setText(QCoreApplication::translate("MainWindow", "\342\202\275", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "Interest capitalization", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Interest rate, %", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Key rate, %", nullptr));
        label_34->setText(QString());
        label_35->setText(QString());
        lineEdit_15->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "Add withdrawal", nullptr));
        lineEdit_10->setText(QCoreApplication::translate("MainWindow", "10000", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "Every day", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "Every month", nullptr));

        pushButton->setText(QCoreApplication::translate("MainWindow", "Add replenishment", nullptr));
        label_58->setText(QCoreApplication::translate("MainWindow", "\342\202\275", nullptr));
        label_64->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        label_50->setText(QCoreApplication::translate("MainWindow", "Sum", nullptr));
        label_61->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Sum, rubles", nullptr));
        label_53->setText(QCoreApplication::translate("MainWindow", "Sum", nullptr));
        label_56->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        label_62->setText(QCoreApplication::translate("MainWindow", "Sum, rubles", nullptr));
        label_55->setText(QCoreApplication::translate("MainWindow", "Grand total, rubles", nullptr));
        label_49->setText(QCoreApplication::translate("MainWindow", "Deposit movement", nullptr));
        label_52->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        label_38->setText(QCoreApplication::translate("MainWindow", "Tax paid, rubles", nullptr));
        label_48->setText(QString());
        label_47->setText(QString());
        label_46->setText(QCoreApplication::translate("MainWindow", "Sum", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "Accrued interest, rubles", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Debit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
