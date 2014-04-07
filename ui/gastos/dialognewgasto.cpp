#include "dialognewgasto.h"
#include "ui_dialoggasto.h"
#include <QMessageBox>
#include "core/controllertaller.h"
#include "core/exception/exceptionvalidator.h"
#include "core/exception/exceptionask.h"

DialogNewGasto::DialogNewGasto(QWidget *parent) : DialogGasto(parent)
{
    ui->button_action->setText("Nuevo\ngasto");
}


void DialogNewGasto::on_button_action_clicked()
{
    try{
        validar();
        ask("¿Esta seguro que desea ingresar el gasto?");

        ControllerTaller::getInstance()->addGasto(this->getGasto());

        QMessageBox::about(this, "Exito", "Se ha insertado el gasto con éxito");
        this->close();
    }
    catch(ExceptionValidator *e){
        QMessageBox::warning(this, "Error", e->getMessage());
        delete e;
    }
    catch(ExceptionAsk *e){
        delete e;
        this->close();
    }
}
