#ifndef GRAPH_H
#define GRAPH_H

#include <QWidget>

namespace Ui {
class Graph;
}

class Graph : public QWidget {
  Q_OBJECT

 public:
  explicit Graph(QWidget *parent = nullptr);
  ~Graph();
  void draw();
  QVector<double> x;
  QVector<double> y;
  double a;
  double b;
  double minY;
  double maxY;
  int N;

 private:
  Ui::Graph *ui;
};

#endif  // GRAPH_H
