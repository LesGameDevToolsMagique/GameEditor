#include "addwindow.h"
#include "ui_addwindow.h"

AddWindow::AddWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddWindow)
{
    ui->setupUi(this);
}

AddWindow::~AddWindow()
{
    delete ui;
}

void AddWindow::clearText()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    this->close();
}

void AddWindow::on_pushButton_2_clicked()
{
    clearText();
}

void AddWindow::on_pushButton_clicked()
{
    emit callAddGrid(ui->lineEdit_2->text(),ui->lineEdit->text());
    clearText();
}
