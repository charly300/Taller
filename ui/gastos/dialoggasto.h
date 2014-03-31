#ifndef DIALOGGASTO_H
#define DIALOGGASTO_H

#include <QDialog>

namespace Ui {
class DialogGasto;
}

class DialogGasto : public QDialog
{
    Q_OBJECT

public:
    explicit DialogGasto(QWidget *parent = 0);
    ~DialogGasto();

private slots:
    void on_button_action_clicked();

private:
    Ui::DialogGasto *ui;
};

#endif // DIALOGGASTO_H
