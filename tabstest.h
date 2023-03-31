#ifndef TABSTEST_H
#define TABSTEST_H

#include <QDialog>

namespace Ui {
class tabstest;
}

class tabstest : public QDialog
{
    Q_OBJECT

public:
    explicit tabstest(QWidget *parent = nullptr);
    ~tabstest();

private:
    Ui::tabstest *ui;
};

#endif // TABSTEST_H
