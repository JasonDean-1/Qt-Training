#ifndef CONNECTION_H
#define CONNECTION_H


#include <QtSql>
#include <QDebug>
#include "qdom.h"


static bool createConnection()
{
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLLITE");

    db.setHostName("easybook-3313b0");
    db.setDatabaseName("data.db");
    db.setUserName("dingzhicheng");
    db.setPassword("996633");
    if(!db.open())
    {
        return false;
    }

    QSqlQuery query;
    query.exec("create table factory(id varchar primay key,name varchar)");
    query.exec(QString("insert into factory values('0','请选择厂家')"));
    query.exec(QString("insert into factory values('01','一汽大众')"));
    query.exec(QString("insert into factory values('02','二汽神龙')"));
    query.exec(QString("insert into factory values('03','上海大众')"));

    query.exec("create table brand(id varchar primay key,name varchar,price int,sum int,sell int,last int)");
    query.exec(QString("insert into brand values('01','奥迪A6','一汽大众',36,50,10,40)"));
    query.exec(QString("insert into brand values('02','捷达','一汽大众',34,20,5,15)"));
    query.exec(QString("insert into brand values('03','宝来','一汽大众',41,80,20,60)"));
    query.exec(QString("insert into brand values('04','奔驰','一汽大众',83,40,15,25)"));
    query.exec(QString("insert into brand values('05','毕加索','二汽神龙',39,50,15,25)"));
    query.exec(QString("insert into brand values('06','富康','二汽神龙',28,60,10,50)"));
    query.exec(QString("insert into brand values('07','标致307','二汽神龙',27,70,20,50)"));
    query.exec(QString("insert into brand values('08','桑塔纳','上海大众',25,75,25,50)"));
    query.exec(QString("insert into brand values('09','帕萨特','上海大众',27,65,20,45)"));


    return true;
}
#endif // CONNECTION_H



