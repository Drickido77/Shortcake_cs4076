#ifndef SAVER_H
#define SAVER_H

#include <QDialog>

namespace Ui {
class saver;
}

class saver : public QDialog
{
    Q_OBJECT

public:
    explicit saver(QWidget *parent = nullptr);
    ~saver();

private:
    Ui::saver *ui;
};

#endif // SAVER_H
