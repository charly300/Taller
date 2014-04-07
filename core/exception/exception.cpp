#include "exception.h"


Exception::Exception()
{
    // CONSTRUCTOR VACIO
}

Exception::Exception(QString m)
{
    message = m;
}

QString Exception::getMessage()
{
    return message;
}
