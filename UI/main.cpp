#include "adsserverstatus.h"

#include <QFile>
#include <QTextStream>
#include <QMap>
#include <QApplication>

int main(int argc, char *argv[])
{
    // Load the config file
    QMap<QString, QString> config;
    QFile file("/home/shiv/UI/config.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file);
        while (!in.atEnd())
        {
            QString line = in.readLine();
            QStringList parts = line.split("=");
            if (parts.size() == 2)
                config[parts[0].trimmed()] = parts[1].trimmed();
        }
    }
    /*
    else
    {
        qDebug() << "Could not open config file";
        // handle error here
    }
*/

    QFile css(config.value("stylesheet", ":/css/stylesheetShivang.css"));
    css.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(css.readAll());

    qApp->setStyleSheet(styleSheet);

    QApplication a(argc, argv);
    ADSServerStatus w;
    w.show();
    return a.exec();
}
