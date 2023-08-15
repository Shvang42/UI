#ifndef ADSSERVERSTATUS_H
#define ADSSERVERSTATUS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class ADSServerStatus; }
QT_END_NAMESPACE

class ADSServerStatus : public QMainWindow
{
    Q_OBJECT

public:
    ADSServerStatus(QWidget *parent = nullptr);
    ~ADSServerStatus();

private:
    Ui::ADSServerStatus *ui;
};
#endif // ADSSERVERSTATUS_H
