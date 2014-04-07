#ifndef DIALOGGASTO_H
#define DIALOGGASTO_H

#include <QDialog>
#include "core/gasto.h"

namespace Ui {
class DialogGasto;
}

class DialogGasto : public QDialog
{
    Q_OBJECT

public:
    explicit DialogGasto(QWidget *parent = 0);
    ~DialogGasto();

protected:
    void validar();
    void ask(QString);
    Gasto getGasto();

private slots:
    virtual void on_button_action_clicked() = 0;

protected:
    Ui::DialogGasto *ui;
};
 


#endif // DIALOGGASTO_H
