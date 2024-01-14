import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 800
    height: 600

    TableView {
        anchors.fill: parent

        ListModel {
            id: myModel
            ListElement { id: _1; name: "John"; age: 25 }
            ListElement { id: _2; name: "Jane"; age: 30 }
            // ...
        }

        model: myModel

        TableViewColumn {
            role: "name"
            title: "Name"
            width: 200
        }

        TableViewColumn {
            role: "age"
            title: "Age"
            width: 50
        }
    }
}
