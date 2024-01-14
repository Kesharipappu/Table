#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "DataHandler.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    DataHandler dataHandler; // Create an instance of the DataHandler
    engine.rootContext()->setContextProperty("dataHandler", &dataHandler);

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
