#include "dialoglogin.h"
#include "ui_dialoglogin.h"
#include <QMessageBox>
#include "core/db/connectordb.h"
#include "core/exception/exceptionvalidator.h"
#include "ui/mainwindow.h"

DialogLogin::DialogLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogLogin)
{
    ui->setupUi(this);

    ui->lineEdit_user->setText("root");
}

DialogLogin::~DialogLogin()
{
    delete ui;
}

void DialogLogin::iniciarSesion()
{
    try{
        this->validar();
        ConnectorDB::getInstance()->connectDB(ui->lineEdit_user->text(), ui->lineEdit_pass->text());
        this->openMainWindow();
        this->close();
    }
    catch(QSqlError &e){
        this->showErrorLogin(e);
        this->clearPassword();
    }
    catch(ExceptionValidator *e){
        QMessageBox::warning(this, "Sesión", e->getMessage());
        delete e;
    }
}

void DialogLogin::validar()
{
    if(ui->lineEdit_user->text().size() == 0)
        throw new ExceptionValidator("Debe ingresar un usuario");
    if(ui->lineEdit_pass->text().size() == 0)
        throw new ExceptionValidator("Debe ingresar una contraseña");
}

void DialogLogin::openMainWindow()
{
    MainWindow *w = new MainWindow();
    w->show();
}

void DialogLogin::showErrorLogin(QSqlError &e)
{
    QMessageBox m(this);
    m.setIcon(QMessageBox::Critical);
    m.setWindowTitle("Error");
    m.setText("Usuario y/o contraseña incorrectos");
    m.setDetailedText(e.text());
    m.exec();
}

void DialogLogin::clearPassword()
{
    ui->lineEdit_pass->clear();
}


//SLOT
void DialogLogin::on_pushButton_clicked()
{
    this->iniciarSesion();
}
