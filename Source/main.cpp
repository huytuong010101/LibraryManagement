#include "Header/mainwindow.h"
#include <QApplication>
#include <iostream>
#include <QVariant>

using namespace std;

int main(int argc, char *argv[])
{
    /*
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");;
    QString connectString = "DRIVER={SQL Server};SERVER=NGUYENHUYTUONG-, 1433;DATABASE=LibraryManagement;Trusted=true;";       // Pass
    db.setDatabaseName(connectString);

    if(db.open())
    {
        cout << "Connected" << endl;
        QSqlQuery query(db);
        // Create a login user table
        query.exec("select * from  books");
        int dem = 0;
        while(query.next()){
            cout << query.value(0).toString().toStdString() << " " << query.value(1).toString().toStdString() << endl;
        }

    }
    else
    {
        cout << "Not Connected" << endl;
    }
    db.close();
    */
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
