#include "mainwindow.h"

#include <QDate>
#include <QDateTime>

#include "ui_mainwindow.h"

typedef struct deposit_date {
  double summ = 0;
  QDate date;
  int endSimvol = 0;
} depos_data;

depos_data massInput[1024];
depos_data massOutput[1024];

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  massInput[0].endSimvol = -1;
  massOutput[0].endSimvol = -1;
  ui->setupUi(this);
  resize(530, 500);
  ui->tabWidget->resize(530, 500);
  ui->label_3->hide();
  ui->label_4->hide();
  ui->label_5->hide();
  ui->label_6->hide();
  ui->lineEdit_2->hide();
  ui->lineEdit_3->hide();
  ui->lineEdit_4->hide();
  ui->lineEdit_5->hide();
  ui->pushButton_graph->hide();
  ui->fr_result->hide();
  ui->scrollArea->hide();
  ui->lb_payments->hide();
  ui->lb_payments_3->hide();
  ui->lb_payments_2->hide();
  ui->line_10->hide();
  ui->widget_debit->hide();
  connect(ui->pushButton_0, SIGNAL(clicked()), this, SLOT(simple_func()));
  connect(ui->pushButton_1, SIGNAL(clicked()), this, SLOT(simple_func()));
  connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(simple_func()));
  connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(simple_func()));
  connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(simple_func()));
  connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(simple_func()));
  connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(simple_func()));
  connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(simple_func()));
  connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(simple_func()));
  connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(simple_func()));
  connect(ui->pushButton_tchk, SIGNAL(clicked()), this, SLOT(simple_func()));
  connect(ui->pushButton_plus, SIGNAL(clicked()), this, SLOT(simple_func()));
  connect(ui->pushButton_minus, SIGNAL(clicked()), this, SLOT(simple_func()));
  connect(ui->pushButton_mul, SIGNAL(clicked()), this, SLOT(simple_func()));
  connect(ui->pushButton_pow, SIGNAL(clicked()), this, SLOT(simple_func()));
  connect(ui->pushButton_x, SIGNAL(clicked()), this, SLOT(simple_func()));
  connect(ui->pushButton_skobkao, SIGNAL(clicked()), this, SLOT(simple_func()));
  connect(ui->pushButton_skobkaz, SIGNAL(clicked()), this, SLOT(simple_func()));
  connect(ui->pushButton_mod, SIGNAL(clicked()), this, SLOT(simple_func()));
  connect(ui->pushButton_ln, SIGNAL(clicked()), this, SLOT(simple_func()));
  connect(ui->pushButton_log, SIGNAL(clicked()), this, SLOT(simple_func()));
  connect(ui->pushButton_sqrt, SIGNAL(clicked()), this, SLOT(simple_func()));
  connect(ui->pushButton_sin, SIGNAL(clicked()), this, SLOT(simple_func()));
  connect(ui->pushButton_cos, SIGNAL(clicked()), this, SLOT(simple_func()));
  connect(ui->pushButton_tan, SIGNAL(clicked()), this, SLOT(simple_func()));
  connect(ui->pushButton_asin, SIGNAL(clicked()), this, SLOT(simple_func()));
  connect(ui->pushButton_acos, SIGNAL(clicked()), this, SLOT(simple_func()));
  connect(ui->pushButton_atan, SIGNAL(clicked()), this, SLOT(simple_func()));
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::simple_func() {
  // if(ui->label->text()=="error")on_pushButton_C_clicked();
  QString button = (dynamic_cast<QPushButton *>(sender()))->text();
  ui->label->setText(ui->label->text() + button);
}

void MainWindow::on_pushButton_div_clicked() {
  ui->label->setText(ui->label->text() + '/');
}

void MainWindow::on_pushButton_C_clicked() { ui->label->setText(" "); }

void MainWindow::on_pushButton_del_clicked() {
  QString new_text = ui->label->text();
  new_text.chop(1);
  ui->label->setText(new_text);
  // resize(500,700);
}

void MainWindow::on_pushButton_otv_clicked() {
  double res = 0;
  // const char x[1000]="123";
  int error = 0;
  int error_numb = 0;
  QString text = ui->label->text();
  QString x = ui->lineEdit->text();
  error_numb = error_number(x.toStdString().c_str());
  error = calc(text.toStdString().c_str(), &res, x.toStdString().c_str());
  // error = calc(text.toStdString().c_str(), &res, x);
  if (error == 1 || error_numb == 1) {
    form.show();
    // ui->label->setText("error");
  } else {
    ui->label->setText(QString::number(res));
  }
}

// void MainWindow::on_pushButton_x_clicked()
//{
//     //resize(700,430);
//     resize(525,500);
//     //ui->widget_button->move(x(), y()-20);
//     QString x = ui->label_2->text();
//     const char *buff=x.toUtf8().constData();
//     if((x>47 && x<58) || x==46){

//  //  }

//}

void MainWindow::on_pushButton_10_clicked() {
  resize(700, 500);
  ui->tabWidget->resize(700, 500);
  ui->label_3->show();
  ui->label_4->show();
  ui->label_5->show();
  ui->label_6->show();
  ui->lineEdit_2->show();
  ui->lineEdit_3->show();
  ui->lineEdit_4->show();
  ui->lineEdit_5->show();
  ui->pushButton_graph->show();
}

void MainWindow::on_tabWidget_currentChanged(int index) {
  (void)index;
  resize(530, 500);
  ui->tabWidget->resize(530, 500);
  ui->fr_result->hide();
  ui->scrollArea->hide();
  ui->lb_payments->hide();
  ui->label_3->hide();
  ui->label_4->hide();
  ui->label_5->hide();
  ui->label_6->hide();
  ui->lineEdit_2->hide();
  ui->lineEdit_3->hide();
  ui->lineEdit_4->hide();
  ui->lineEdit_5->hide();
  ui->lb_payments_3->hide();
  ui->lb_payments_2->hide();
  ui->pushButton_graph->hide();
  ui->line_10->hide();
  ui->widget_debit->hide();
  ui->label_59->setText("");
  ui->label_60->setText("");
  ui->label_34->setText("");
  ui->label_35->setText("");
}

void MainWindow::on_pushButton_graph_clicked() {
  QString o = ui->lineEdit_5->text();
  QString k = ui->lineEdit_4->text();
  QString d = ui->lineEdit_2->text();
  QString t = ui->lineEdit_3->text();
  int error_a = 0, error_b = 0, error_minY = 0, error_maxY = 0;
  error_a = error_number(o.toStdString().c_str());
  error_b = error_number(k.toStdString().c_str());
  error_minY = error_number(d.toStdString().c_str());
  error_maxY = error_number(t.toStdString().c_str());
  if (error_a == 0 && error_b == 0 && error_minY == 0 && error_maxY == 0) {
    double a = ui->lineEdit_5->text().toDouble();
    double b = ui->lineEdit_4->text().toDouble();
    ;
    double minY = ui->lineEdit_2->text().toDouble();
    double maxY = ui->lineEdit_3->text().toDouble();
    if (a < b && minY < maxY) {
      int N = 1000;
      double h = (b - a) / (N + 2);
      QVector<double> x(N + 10), y(N + 10);  //Массивы координат точек
      int i = 0;
      int err = 0;
      for (double X = a; X <= b; X += h) {
        double res = 0;
        char xmin[100] = {0};
        QString text = ui->label->text();
        sprintf(xmin, "%f", X);
        err = calc(text.toStdString().c_str(), &res, xmin);
        if (res > minY && res < maxY && err == 0) {
          x[i] = X;
          y[i] = res;  //Формула нашей функции
          i++;
        }
      }
      if (err != 1) {
        form2.x = x;
        form2.y = y;
        form2.a = a;
        form2.b = b;
        form2.minY = minY;
        form2.maxY = maxY;
        form2.N = N;
        form2.draw();
        form2.show();
      } else {
        form.show();
      }
    } else {
      form.show();
    }
  } else {
    form.show();
  }
}

void MainWindow::on_pushButton_graph_2_clicked() {
  int bag = 0;
  QString l = ui->lineEdit_6->text();
  QString u = ui->lineEdit_7->text();
  QString w = ui->lineEdit_8->text();
  int error_1 = 0, error_2 = 0, error_3 = 0;
  error_1 = error_number(l.toStdString().c_str());
  error_2 = error_number(u.toStdString().c_str());
  error_3 = error_number(w.toStdString().c_str());
  if (error_1 != 1 && error_2 != 1 && error_3 != 1) {
    double summCredit = 0, monthReturn = 0, prosent = 0, monthSell = 0;
    summCredit = ui->lineEdit_6->text().toDouble();
    monthReturn = ui->lineEdit_7->text().toDouble();
    prosent = ui->lineEdit_8->text().toDouble();
    if (prosent < 0 || summCredit < 0 || monthReturn < 0) bag = 1;
    if (bag == 0) {
      int n = ui->ed_type_2->currentIndex();
      if (n == 0) {  //постоянный платеж
        ui->label_18->clear();
        ui->label_19->clear();
        monthSell =
            summCredit *
            (prosent / 12 / 100 * pow((1 + prosent / 12 / 100), monthReturn) /
             (pow(1 + prosent / 12 / 100, monthReturn) - 1));
        //   qDebug() << monthSell;
        //    qDebug() << prosent;
        //    qDebug() << summCredit;
        ui->label_9->setText(QString::number(monthSell * monthReturn, 'g', 10));
        ui->label_10->setText(
            QString::number(monthSell * monthReturn - summCredit, 'g', 10));
        for (int i = 0; i < monthReturn; i++) {
          ui->label_18->setText(ui->label_18->text() + '\n' +
                                QString::number(i + 1, 'g', 10));
          ui->label_19->setText(ui->label_19->text() + '\n' +
                                QString::number(monthSell, 'g', 10));
        }
      } else if (n == 1) {
        ui->label_18->clear();
        ui->label_19->clear();
        double roundSell = 0;
        int monthDub = monthReturn;
        for (int i = 0, ostatokDolga = summCredit; i < monthReturn; i++) {
          double sell =
              summCredit / monthReturn + (ostatokDolga * (prosent / 100)) / 12;

          ui->label_18->setText(ui->label_18->text() + '\n' +
                                QString::number(i + 1, 'g', 10));
          ui->label_19->setText(ui->label_19->text() + '\n' +
                                QString::number(sell, 'g', 10));
          ostatokDolga -= summCredit / monthReturn;
          roundSell += sell;
          monthDub--;
        }
        ui->label_10->setText(QString::number(roundSell - summCredit, 'g', 10));
        ui->label_9->setText(QString::number(roundSell, 'g', 10));
      }

    } else {
      form.show();
    }

    resize(700, 500);
    ui->tabWidget->resize(700, 500);
    ui->lb_payments->show();
    ui->lb_payments_3->show();
    ui->lb_payments_2->show();
    ui->fr_result->show();
    ui->scrollArea->show();
    ui->line_10->show();
  } else {
    form.show();
  }
}

void MainWindow::on_pushButton_14_clicked() {
  int count = 0;
  int error_10 = 0;
  double result = 0;
  QString text_p = ui->lineEdit_18->text();
  error_10 = error_number(text_p.toStdString().c_str());
  result = ui->lineEdit_18->text().toDouble();
  //    check_and_convert_single_number(
  //        (char *)ui->lineEdit_7->text().toStdString().c_str(), &result);
  if (error_10 != 1) {
    if (!(QDate::currentDate() >= (ui->dateEdit_4->date()) || result <= 0)) {
      for (; massOutput[count].endSimvol != -1; count++)
        ;
      massOutput[count].date = ui->dateEdit_4->date();
      massOutput[count].summ = result;
      massOutput[count].endSimvol = 0;
      massOutput[count + 1].endSimvol = -1;
      ui->label_34->setText(
          QString(massOutput[count].date.toString("dd.MM.yyyy")) + "\n" +
          QString(ui->label_34->text()));
      ui->label_35->setText(QString::number(result, 'g', 10) + "\n" +
                            QString(ui->label_35->text()));
    }
  } else {
    form.show();
  }
}

void MainWindow::on_pushButton_clicked() {
  int count = 0;
  double result = 0;
  int error_11 = 0;
  QString text_s = ui->lineEdit_18->text();
  error_11 = error_number(text_s.toStdString().c_str());
  result = ui->lineEdit_12->text().toDouble();
  if (error_11 != 1) {
    //    check_and_convert_single_number(
    //        (char *)ui->lineEdit_5->text().toStdString().c_str(), &result);
    if (!(QDate::currentDate() >= (ui->dateEdit_2->date()) || result <= 0)) {
      for (; massInput[count].endSimvol != -1; count++)
        ;
      massInput[count].date = ui->dateEdit_2->date();
      massInput[count].summ = result;
      massInput[count].endSimvol = 0;
      massInput[count + 1].endSimvol = -1;
      ui->label_59->setText(
          QString(massInput[count].date.toString("dd.MM.yyyy")) + "\n" +
          QString(ui->label_59->text()));
      ui->label_60->setText(QString::number(result, 'g', 10) + "\n" +
                            QString(ui->label_60->text()));
    }
  } else {
    form.show();
  }
}

void MainWindow::on_pushButton_12_clicked() {
  resize(700, 500);
  ui->tabWidget->resize(700, 500);

  ui->label_47->setText("");
  ui->label_48->setText("");
  ui->widget_debit->show();

  QDate startDays = QDate::currentDate().addDays(1);
  int bag = 0, monthReturn = 0;
  double summVnos = 0, timeReturn = 0, prosent = 0, nalog = 0, summDohod = 0,
         vnosUpdate = 0, dohodPrevNalog = 0, summNalog = 0, dohodMonth = 0;

  int error_12 = 0, error_13 = 0, error_14 = 0, error_15 = 0;
  QString line_1 = ui->lineEdit_10->text();
  QString line_2 = ui->lineEdit_14->text();
  QString line_3 = ui->lineEdit_15->text();
  QString line_4 = ui->lineEdit_19->text();
  error_12 = error_number(line_1.toStdString().c_str());
  error_13 = error_number(line_2.toStdString().c_str());
  error_14 = error_number(line_3.toStdString().c_str());
  error_15 = error_number(line_4.toStdString().c_str());

  summVnos = ui->lineEdit_10->text().toDouble();
  timeReturn = ui->lineEdit_14->text().toDouble();
  prosent = ui->lineEdit_15->text().toDouble();
  nalog = ui->lineEdit_19->text().toDouble();
  //    bag += check_and_convert_single_number(
  //        (char *)ui->lineEdit->text().toStdString().c_str(), &summVnos);
  //    bag += check_and_convert_single_number(
  //        (char *)ui->lineEdit_2->text().toStdString().c_str(), &timeReturn);
  //    bag += check_and_convert_single_number(
  //        (char *)ui->lineEdit_3->text().toStdString().c_str(), &prosent);
  //    bag += check_and_convert_single_number(
  //        (char *)ui->lineEdit_4->text().toStdString().c_str(), &nalog);
  if (summVnos < 0 || timeReturn < 0 || prosent < 0 || nalog < 0 ||
      error_12 == 1 || error_13 == 1 || error_14 == 1 || error_15 == 1)
    bag = 1;

  if (!bag) {
    nalog = 1000000 * nalog / 100;
    monthReturn = timeReturn;
    QDate endDays = startDays.addMonths(monthReturn);

    if (!bag) {
      ui->label_47->setText(
          QString(startDays.addDays(-1).toString("dd.MM.yyyy")) + "\n");
      ui->label_48->setText("+" + QString::number(summVnos, 'g', 10) + "\n");
      if (ui->comboBox_2->currentText() == "Every day") {
        QDate everyDays = startDays, everyMonth = startDays.addDays(-1);
        vnosUpdate = summVnos;
        for (int i = 0; i < startDays.daysTo(endDays) && bag == 0; i++) {
          double dopVnos = 0;
          double prosentInMonth =
              prosent / 12 / (everyMonth.daysTo(everyMonth.addMonths(1)));

          for (int j = 0; massInput[j].endSimvol != -1; j++)
            if (everyDays == (massInput[j].date)) {
              dopVnos += massInput[j].summ;
              if (!(ui->checkBox->isChecked())) {
                ui->label_47->setText(
                    QString(everyDays.toString("dd.MM.yyyy")) + "\n" +
                    QString(ui->label_47->text()));
                ui->label_48->setText(
                    "+" + QString::number(massInput[j].summ, 'g', 10) + "\n" +
                    QString(ui->label_48->text()));
              }
            }

          for (int j = 0; massOutput[j].endSimvol != -1; j++)
            if (everyDays == (massOutput[j].date)) {
              dopVnos -= massOutput[j].summ;
              if (!(ui->checkBox->isChecked())) {
                ui->label_47->setText(
                    QString(everyDays.toString("dd.MM.yyyy")) + "\n" +
                    QString(ui->label_47->text()));
                ui->label_48->setText(
                    "-" + QString::number(massOutput[j].summ, 'g', 10) + "\n" +
                    QString(ui->label_48->text()));
              }
            }

          if (ui->checkBox->isChecked()) {
            ui->label_47->setText(QString(everyDays.toString("dd.MM.yyyy")) +
                                  "\n" + QString(ui->label_47->text()));
            if (vnosUpdate * prosentInMonth / 100 + dopVnos >= 0)
              ui->label_48->setText(
                  "+" +
                  QString::number(vnosUpdate * prosentInMonth / 100 + dopVnos,
                                  'g', 10) +
                  "\n" + QString(ui->label_48->text()));
            if (vnosUpdate * prosentInMonth / 100 + dopVnos < 0)
              ui->label_48->setText(
                  QString::number(vnosUpdate * prosentInMonth / 100 + dopVnos,
                                  'g', 10) +
                  "\n" + QString(ui->label_48->text()));
            vnosUpdate += vnosUpdate * prosentInMonth / 100;
          }
          summDohod += vnosUpdate * prosentInMonth / 100;
          dohodPrevNalog += vnosUpdate * prosentInMonth / 100;
          vnosUpdate += dopVnos;
          if (vnosUpdate <= 0) {
            bag = 1;
            break;
          }
          if (everyDays.day() == 31 && everyDays.month() == 12 &&
              dohodPrevNalog > nalog) {
            summDohod = summDohod - (dohodPrevNalog - nalog) * 0.13;
            vnosUpdate -= (dohodPrevNalog - nalog) * 0.13;
            summNalog += (dohodPrevNalog - nalog) * 0.13;
            ui->label_47->setText(QString(everyDays.toString("dd.MM.yyyy")) +
                                  "\n" + QString(ui->label_47->text()));
            ui->label_48->setText(
                "- " +
                QString::number((dohodPrevNalog - nalog) * 0.13, 'g', 10) +
                "\n" + QString(ui->label_48->text()));
            dohodPrevNalog = 0;
          }
          if (everyDays.day() == everyMonth.day())
            everyMonth = everyMonth.addMonths(1);
          everyDays = everyDays.addDays(1);
        }
        if (!bag) {
          if (ui->checkBox->isChecked()) {
            ui->lineEdit_9->setText(QString::number(vnosUpdate, 'g', 10));
          } else {
            ui->lineEdit_9->setText(
                QString::number(vnosUpdate + summDohod, 'g', 10));
          }
          ui->lineEdit_17->setText(QString::number(summDohod, 'g', 10));
          ui->lineEdit_13->setText(QString::number(summNalog, 'g', 10));
        }
      }
      if (ui->comboBox_2->currentText() == "Every month") {
        QDate everyDays = startDays, everyMonth = startDays.addDays(-1);
        vnosUpdate = summVnos;
        for (int i = 0; i < startDays.daysTo(endDays) && bag == 0; i++) {
          double dopVnos = 0;
          double prosentInMonth =
              prosent / 12 / (everyMonth.daysTo(everyMonth.addMonths(1)));

          for (int j = 0; massInput[j].endSimvol != -1; j++)
            if (everyDays == (massInput[j].date)) {
              dopVnos += massInput[j].summ;
              if (!(ui->checkBox->isChecked())) {
                ui->label_47->setText(
                    QString(everyDays.toString("dd.MM.yyyy")) + "\n" +
                    QString(ui->label_47->text()));
                ui->label_48->setText(
                    "+" + QString::number(massInput[j].summ, 'g', 10) + "\n" +
                    QString(ui->label_48->text()));
              }
            }
          for (int j = 0; massOutput[j].endSimvol != -1; j++)
            if (everyDays == (massOutput[j].date)) {
              dopVnos -= massOutput[j].summ;
              if (!(ui->checkBox->isChecked())) {
                ui->label_47->setText(
                    QString(everyDays.toString("dd.MM.yyyy")) + "\n" +
                    QString(ui->label_47->text()));
                ui->label_48->setText(
                    "-" + QString::number(massOutput[j].summ, 'g', 10) + "\n" +
                    QString(ui->label_48->text()));
              }
            }
          if (ui->checkBox->isChecked()) {
            if (everyDays.day() == everyMonth.day()) {
              vnosUpdate += dohodMonth;
              ui->label_47->setText(QString(everyDays.toString("dd.MM.yyyy")) +
                                    "\n" + QString(ui->label_47->text()));
              if (vnosUpdate * prosentInMonth / 100 + dopVnos >= 0)
                ui->label_48->setText(
                    "+" + QString::number(dohodMonth + dopVnos, 'g', 10) +
                    "\n" + QString(ui->label_48->text()));
              if (vnosUpdate * prosentInMonth / 100 + dopVnos < 0)
                ui->label_48->setText(
                    QString::number(dohodMonth + dopVnos, 'g', 10) + "\n" +
                    QString(ui->label_48->text()));
              dohodMonth = 0;
            }
            dohodMonth += vnosUpdate * prosentInMonth / 100;
          }
          summDohod += vnosUpdate * prosentInMonth / 100;
          dohodPrevNalog += vnosUpdate * prosentInMonth / 100;
          vnosUpdate += dopVnos;
          dopVnos = 0;
          if (vnosUpdate <= 0) {
            bag = 1;
            break;
          }
          if (everyDays.day() == 31 && everyDays.month() == 12 &&
              dohodPrevNalog > nalog) {
            summDohod = summDohod - (dohodPrevNalog - nalog) * 0.13;
            vnosUpdate -= (dohodPrevNalog - nalog) * 0.13;
            summNalog += (dohodPrevNalog - nalog) * 0.13;
            ui->label_47->setText(QString(everyDays.toString("dd.MM.yyyy")) +
                                  "\n" + QString(ui->label_47->text()));
            ui->label_48->setText(
                "- " +
                QString::number((dohodPrevNalog - nalog) * 0.13, 'g', 10) +
                "\n" + QString(ui->label_48->text()));
            dohodPrevNalog = 0;
          }
          everyDays = everyDays.addDays(1);
          if (everyDays.day() == everyMonth.day())
            everyMonth = everyMonth.addMonths(1);
        }
        if (!bag) {
          if (ui->checkBox->isChecked()) {
            ui->lineEdit_9->setText(QString::number(vnosUpdate, 'g', 10));
          } else {
            ui->lineEdit_9->setText(
                QString::number(vnosUpdate + summDohod, 'g', 10));
          }
          ui->lineEdit_17->setText(QString::number(summDohod, 'g', 10));
          ui->lineEdit_13->setText(QString::number(summNalog, 'g', 10));
        }
      }
    }
  }
  if (bag) {
    form.show();
    ui->lineEdit_9->setText("Error");
    ui->lineEdit_17->setText("Error");
    ui->lineEdit_13->setText("Error");
    ui->label_47->setText("");
    ui->label_48->setText("");
  }
}
