#include "controllertaller.h"


ControllerTaller::ControllerTaller()
{
}

ControllerTaller *ControllerTaller::getInstance()
{
    if(instance == 0)
        instance = new ControllerTaller();

    return instance;
}

ControllerTaller* ControllerTaller::instance = 0;

void ControllerTaller::setTaller(Taller *unTaller){taller = unTaller;}
void ControllerTaller::setWidget(QWidget *w){ widget = w;}

// ACCIONES

void ControllerTaller::addGasto(Gasto unGasto)
{
    //INSERTAR EN DB
    taller->addGasto(unGasto);
}




