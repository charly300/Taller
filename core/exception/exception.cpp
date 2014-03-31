#include "exception.h"


Exception::Exception(QString m)
{
    message = m;
}

QString Exception::getMessage()
{
    return message;
}
