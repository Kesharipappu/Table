#include "DataHandler.h"
#include <QDebug>

DataHandler::DataHandler(QObject *parent) : QObject(parent)
{
    // Set up the database connection
    m_database = QSqlDatabase::addDatabase("QSQLITE");
    m_database.setDatabaseName("your_database_file_name.db");

    if (!m_database.open()) {
        qDebug() << "Error opening the database:" << m_database.lastError().text();
    }
}

QVariantList DataHandler::fetchData()
{
    QVariantList result;

    QSqlQuery query("SELECT * FROM your_table_name");
    while (query.next()) {
        // Assuming you have three columns: id, name, and age
        int id = query.value(0).toInt();
        QString name = query.value(1).toString();
        int age = query.value(2).toInt();

        QVariantMap data;
        data["id"] = id;
        data["name"] = name;
        data["age"] = age;

        result.append(data);
    }

    return result;
}
