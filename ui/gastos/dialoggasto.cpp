#include "dialoggasto.h"
#include "ui_dialoggasto.h"
#include "core/exception/exceptionvalidator.h"
#include "core/exception/exceptionask.h"
#include <QMessageBox>

DialogGasto::DialogGasto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogGasto)
{
    ui->setupUi(this);
}

DialogGasto::~DialogGasto()
{
    delete ui;
}

void DialogGasto::validar()
{
    if(ui->lineEdit_descripcion->text().size() == 0)
        throw new ExceptionValidator("Debe ingresar una descripción");
    if(ui->doubleSpinBox_monto->value() <= 0.0)
        throw new ExceptionValidator("Debe ingresar un monto mayor a cero");
}

void DialogGasto::ask(QString m)
{
    if (QMessageBox::No== QMessageBox::question(this, "Gasto", m))
        throw new ExceptionAsk;
}

Gasto DialogGasto::getGasto()
{
    Gasto g;

    g.setFecha(ui->dateEdit_fecha->date());
    g.setDescripcion(ui->lineEdit_descripcion->text());
    g.setMonto(ui->doubleSpinBox_monto->value());

    return g;
}

