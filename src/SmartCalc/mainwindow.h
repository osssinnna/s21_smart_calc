#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <stdio.h>

#include <QMainWindow>

#include "../lib_C/header_C.h"
#include "error.h"
#include "graph.h"
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

 private:
  Ui::MainWindow *ui;
  Error form;
  Graph form2;

 private slots:
  void simple_func();
  void on_pushButton_div_clicked();
  void on_pushButton_C_clicked();
  void on_pushButton_del_clicked();
  void on_pushButton_otv_clicked();
  void on_pushButton_10_clicked();
  void on_tabWidget_currentChanged(int index);
  void on_pushButton_graph_clicked();
  void on_pushButton_graph_2_clicked();
  void on_pushButton_12_clicked();
  void on_pushButton_14_clicked();
  void on_pushButton_clicked();
};
#endif  // MAINWINDOW_H
