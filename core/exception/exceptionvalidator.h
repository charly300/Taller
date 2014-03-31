#ifndef EXCEPTIONVALIDATOR_H
#define EXCEPTIONVALIDATOR_H

#include "exception.h"

class ExceptionValidator : public Exception
{
public:
    ExceptionValidator(QString);
};

#endif // EXCEPTIONVALIDATOR_H
