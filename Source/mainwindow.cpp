#include "Header/mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QStandardItemModel>
#include <iostream>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->db = QSqlDatabase::addDatabase("QODBC");;
    QString connectString = "DRIVER={SQL Server};SERVER=NGUYENHUYTUONG-, 1433;DATABASE=LibraryManagement;Trusted=true;";       // Pass
    (ui->db).setDatabaseName(connectString);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnListBorrowUser_clicked()
{
    (ui->db).open();
    QSqlQuery query(ui->db);
    // Create a login user table
    query.exec("select * from  books");
    //Create model
    QStandardItemModel *model = new QStandardItemModel();;
    QStringList horizontalHeader;
    QStringList verticalHeader;
    horizontalHeader.append("ID");
    horizontalHeader.append(QString::fromUtf8("Tên sách"));
    horizontalHeader.append(QString::fromUtf8("Loại bìa"));
    horizontalHeader.append(QString::fromUtf8("Tồng cộng"));
    model->setHorizontalHeaderLabels(horizontalHeader);
    ui->tableListBookSearch->setModel(model);
    while(query.next()){
        QStandardItem *col1 = new QStandardItem(query.value(0).toString());
        QStandardItem *col2 = new QStandardItem(query.value(1).toString());
        QStandardItem *col3 = new QStandardItem(query.value(2).toString());
        QStandardItem *col4 = new QStandardItem(query.value(4).toString());
        model->appendRow( QList<QStandardItem*>() << col1 << col2 << col3 << col4);
    }
    (ui->db).close();
}
