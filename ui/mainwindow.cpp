#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "core/controllertaller.h"
#include "ui/gastos/dialognewgasto.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ControllerTaller::getInstance()->setTaller(new Taller);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_button_gastos_clicked()
{
    DialogNewGasto *d = new DialogNewGasto(this);
    ControllerTaller::getInstance()->setWidget(d);
    d->exec();
}
