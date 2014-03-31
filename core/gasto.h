#ifndef GASTO_H
#define GASTO_H

#include <QDate>
#include <QString>


class Gasto
{
public:
    Gasto();

    int getId();
    void setId(int value);

    QDate getFecha();
    void setFecha(const QDate &value);

    QString getDescripcion();
    void setDescripcion(const QString &value);

    double getMonto();
    void setMonto(double value);

private:
    int id;
    QDate fecha;
    QString descripcion;
    double monto;
};

#endif // GASTO_H
