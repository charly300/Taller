#include "gasto.h"

Gasto::Gasto()
{
}
int Gasto::getId()
{
    return id;
}

void Gasto::setId(int value)
{
    id = value;
}
QDate Gasto::getFecha()
{
    return fecha;
}

void Gasto::setFecha(const QDate &value)
{
    fecha = value;
}
QString Gasto::getDescripcion()
{
    return descripcion;
}

void Gasto::setDescripcion(const QString &value)
{
    descripcion = value;
}
double Gasto::getMonto()
{
    return monto;
}

void Gasto::setMonto(double value)
{
    monto = value;
}





