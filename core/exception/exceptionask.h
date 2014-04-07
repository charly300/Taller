#ifndef EXCEPTIONASK_H
#define EXCEPTIONASK_H

#include "exception.h"

class ExceptionAsk : public Exception
{
public:
    ExceptionAsk();
    ExceptionAsk(QString);
};

#endif // EXCEPTIONASK_H
