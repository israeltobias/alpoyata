#include "alpoyata.h"
#include "ui_alpoyata.h"
#include <QDebug>
#include <QString>
#include <QVariant>
#include <QMessageBox>
#include <QDir>

alpoyata::alpoyata(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::alpoyata)
{
    ui->setupUi(this);
    this->ui->cmboxQuality->setCurrentIndex(5);
    this->ui->cmboxAudio->setCurrentText("mp3");
    this->ui->lnEdName->setText(QDir::homePath());
}

alpoyata::~alpoyata()
{
    delete ui;
}

void alpoyata::on_btnConvertAudio_clicked()
{
        if(this->ui->lnEdVideoInput->text() != ""){
            qDebug() << this->ui->cmboxAudio->currentText();
            qDebug() << QString::number(this->ui->cmboxAudio->currentIndex());
            qDebug() << this->ui->cmboxQuality->currentText();
            qDebug() << QString::number(this->ui->cmboxQuality->currentIndex());
            qDebug() << this->ui->lnEdVideoInput->text();
        } else {
            QMessageBox::warning(this,"Error","Debes introducir un video a convertir.");
        }
}

void alpoyata::on_lnEdVideoInput_editingFinished()
{
    this->ui->lnEdVideoInput->setText(this->ui->lnEdVideoInput->text().replace(" ",""));
}
