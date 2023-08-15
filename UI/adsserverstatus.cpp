#include "adsserverstatus.h"
#include "./ui_adsserverstatus.h"

ADSServerStatus::ADSServerStatus(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ADSServerStatus)
{
    ui->setupUi(this);
}

ADSServerStatus::~ADSServerStatus()
{
    delete ui;
}

