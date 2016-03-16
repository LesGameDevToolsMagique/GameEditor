#ifndef ADDWINDOW_H
#define ADDWINDOW_H

#include <QDialog>

namespace Ui {
class AddWindow;
}

class AddWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AddWindow(QWidget *parent = 0);
    ~AddWindow();

    void clearText();

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();

signals:
    void callAddGrid(QString, QString);

private:
    Ui::AddWindow *ui;
};

#endif // ADDWINDOW_H
