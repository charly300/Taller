#ifndef CONNECTORDB_H
#define CONNECTORDB_H

#include <QtSql/QtSql>

class ConnectorDB
{
public:
    static ConnectorDB* getInstance();
    void connectDB(const QString user, const QString password);
    void disconnect();
    bool isConnected();
protected:
    ConnectorDB();
private:
    static ConnectorDB* instance;
    bool status;
    QString user, password;
    QSqlDatabase db;
};

#endif // CONNECTORDB_H
