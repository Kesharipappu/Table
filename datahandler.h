#ifndef DATAHANDLER_H
#define DATAHANDLER_H

#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QVariantList>

class DataHandler : public QObject
{
    Q_OBJECT

public:
    explicit DataHandler(QObject *parent = nullptr);
    Q_INVOKABLE QVariantList fetchData();

private:
    QSqlDatabase m_database;
};

#endif // DATAHANDLER_H
