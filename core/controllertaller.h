#ifndef CONTROLLERTALLER_H
#define CONTROLLERTALLER_H

#include "taller.h"
#include <QWidget>
#include "gasto.h"

class ControllerTaller
{
public:
    static ControllerTaller *getInstance();

    void setTaller(Taller *);
    void setWidget(QWidget *);

    void addGasto(Gasto);
protected:
    ControllerTaller();

private:
    static ControllerTaller *instance;
    Taller *taller;
    QWidget *widget;
};

#endif // CONTROLLERTALLER_H
