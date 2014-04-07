#ifndef DIALOGNEWGASTO_H
#define DIALOGNEWGASTO_H

#include "dialoggasto.h"


class DialogNewGasto : public DialogGasto
{
public:
    DialogNewGasto(QWidget *parent = 0);

protected:
    void on_button_action_clicked();
};

#endif // DIALOGNEWGASTO_H
