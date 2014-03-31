#include "dialoggasto.h"
#include "ui_dialoggasto.h"

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

void DialogGasto::on_button_action_clicked()
{

}
