#ifndef DIALOGLOGIN_H
#define DIALOGLOGIN_H

#include <QDialog>
#include <QtSql/QSqlError>

namespace Ui {
class DialogLogin;
}

class DialogLogin : public QDialog
{
    Q_OBJECT

public:
    explicit DialogLogin(QWidget *parent = 0);
    ~DialogLogin();

private:
    void iniciarSesion();
    void validar();
    void openMainWindow();
    void showErrorLogin(QSqlError &);
private slots:
    void on_pushButton_clicked();

private:
    Ui::DialogLogin *ui;
};

#endif // DIALOGLOGIN_H
