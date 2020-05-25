#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "typedef.h"

class Form;


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void paintEvent(QPaintEvent *event);

private slots:
    void on_BT_selectFile_clicked();

private:
    Ui::MainWindow *ui;

    QString btText;
    QFile *dataFile;
    QString fileName;

    coordinateData allData;

    Form *form1;
};


#endif // MAINWINDOW_H
