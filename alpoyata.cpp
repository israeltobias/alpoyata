#include "alpoyata.h"
#include "ui_alpoyata.h"

alpoyata::alpoyata(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::alpoyata)
{
    ui->setupUi(this);
}

alpoyata::~alpoyata()
{
    delete ui;
}
