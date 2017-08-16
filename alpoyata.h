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

private:
    Ui::alpoyata *ui;
};

#endif // ALPOYATA_H
