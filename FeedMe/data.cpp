#include "data.h"

Data::Data(QObject *parent) : QObject(parent)
{

}

bool Data::writeTest(QString path, int rows)
{
    QFile file(path);
    if(file.exists()) return true;

    if(!file.open(QIODevice::WriteOnly))
    {
        qCritical() << "Nie mozna odtworzyc pliku: " << path;
        qCritical() << file.errorString();
        return false;
    }

    QTextStream stream(&file);
    for(int i = 0; i < rows; i++)
    {
        QString data = QString::number(i);
        stream << data <<"\r\n";
    }

    stream.flush();
    file.close();
    qInfo() << "Stworzono: " << path;

    return true;
}

bool Data::loadTable(QString path, QStandardItemModel *model)
{
    model->clear();

    //Setup the model
    QStringList headers;
    headers.append("Składniki");

    model->setColumnCount(1);
    model->setHorizontalHeaderLabels(headers);


    QFile file(path);

    if(!file.open(QIODevice::ReadOnly))
    {
        qCritical() << "Nie mozna odczytac pliku: " << path;
        qCritical() << file.errorString();
        return false;
    }

    QTextStream stream(&file);

    while (!stream.atEnd())
    {
        QString line = stream.readLine();
        model->appendRow(new QStandardItem(line));
    }

    file.close();

    qInfo() << "Załadowany: " << path;
    qInfo() << "Wierszy: " << model->rowCount();
    return true;

}
