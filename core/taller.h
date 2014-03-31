#ifndef TALLER_H
#define TALLER_H


#include <QList>
#include "gasto.h"

class Taller
{
public:
    Taller();

    void addGasto(Gasto &);
    Gasto *getGasto(int);

private:
    QList<Gasto> gastos;
};

#endif // TALLER_H
