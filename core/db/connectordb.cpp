#include "connectordb.h"
#include <exception>
#include <QtSql/QtSql>
#include <QtSql/qsqldatabase.h>


ConnectorDB::ConnectorDB()
{
    status = false;

    db = QSqlDatabase::addDatabase("QMYSQL");

    db.setHostName("localhost");
    db.setDatabaseName("taller");
}

ConnectorDB* ConnectorDB::instance = 0;

ConnectorDB* ConnectorDB::getInstance()
{
    if(instance == 0)
        instance = new ConnectorDB;

    return instance;
}

bool ConnectorDB::isConnected()
{
    return status;
}

void ConnectorDB::connectDB(const QString user, const QString password)
{
    if(!status)
    {
        db.setUserName(user);
        db.setPassword(password);

        if(!db.open())
            throw db.lastError();

        status = true;
    }

}


void ConnectorDB::disconnect()
{
    if(status)
        db.close();
    status = false;
}
