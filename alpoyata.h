#ifndef ALPOYATA_H
#define ALPOYATA_H

#include <QMainWindow>

namespace Ui {
class alpoyata;
}

class alpoyata : public QMainWindow
{
    Q_OBJECT

public:
    explicit alpoyata(QWidget *parent = 0);
    ~alpoyata();

private slots:
    void on_btnConvertAudio_clicked();

    void on_lnEdVideoInput_editingFinished();

private:
    Ui::alpoyata *ui;
};

#endif // ALPOYATA_H
