#ifndef RECIPE1_H
#define RECIPE1_H

#include <QDialog>

namespace Ui {
class recipe1;
}

class recipe1 : public QDialog
{
    Q_OBJECT

public:
    explicit recipe1(QWidget *parent = nullptr);
    ~recipe1();

private:
    Ui::recipe1 *ui;
};

#endif // RECIPE1_H
