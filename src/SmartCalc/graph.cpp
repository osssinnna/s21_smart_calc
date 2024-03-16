#include "graph.h"

#include "ui_graph.h"

Graph::Graph(QWidget *parent) : QWidget(parent), ui(new Ui::Graph) {
  ui->setupUi(this);
}

Graph::~Graph() { delete ui; }

void Graph::draw() {
  ui->widget_2->clearGraphs();  //Если нужно, но очищаем все графики

  //Добавляем один график в widget
  ui->widget_2->addGraph();

  //Говорим, что отрисовать нужно график по нашим двум массивам x и y
  ui->widget_2->graph(0)->setData(x, y);

  //Подписываем оси Ox и Oy
  ui->widget_2->xAxis->setLabel("x");
  ui->widget_2->yAxis->setLabel("y");

  //Установим область, которая будет показываться на графике
  ui->widget_2->xAxis->setRange(a, b);  //Для оси Ox

  //Для показа границ по оси Oy сложнее, так как надо по правильному
  //вычислить минимальное и максимальное значение в векторах
  // double minY = y[0], maxY = y[0];
  for (int i = 1; i < N; i++) {
    if (y[i] < minY) minY = y[i];
    if (y[i] > maxY) maxY = y[i];
  }
  ui->widget_2->yAxis->setRange(minY, maxY);  //Для оси Oy
  ui->widget_2->graph(0)->setPen(QColor(50, 50, 50, 255));
  ui->widget_2->graph(0)->setLineStyle(QCPGraph::lsNone);
  ui->widget_2->graph(0)->setScatterStyle(
      QCPScatterStyle(QCPScatterStyle::ssCircle, 1));

  //И перерисуем график на нашем widget
  ui->widget_2->replot();
}
