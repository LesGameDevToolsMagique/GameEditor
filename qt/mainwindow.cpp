#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    addUi = new AddWindow(this);

    connect(addUi, SIGNAL(callAddGrid(QString,QString)), this, SLOT(addGrid(QString, QString)));
}

MainWindow::~MainWindow()
{
    delete addUi;
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    addUi->open();
}

void MainWindow::on_pushButton_3_clicked()
{
    QCoreApplication::quit();
}

void MainWindow::addGrid(QString command, QString response)
{
    QTableWidget    *tw = ui->tableWidget;
    int             rc = tw->rowCount();

    tw->insertRow(rc);
    tw->setItem(rc, 0, new QTableWidgetItem(command));
    tw->setItem(rc, 1, new QTableWidgetItem(response));
}


void MainWindow::on_pushButton_4_clicked()
{

}

void MainWindow::on_pushButton_2_clicked()
{
    QList<QTableWidgetItem*> selectionRangeList = this->ui->tableWidget->selectedItems();
    int rowIndex;
    QListIterator<QTableWidgetItem*> selectionRangeListIter(selectionRangeList);

    while(selectionRangeListIter.hasNext())
    {
        rowIndex = ((int)((QTableWidgetItem*)selectionRangeListIter.next())->row());
        this->ui->tableWidget->removeRow(rowIndex);
    }
}
//this->update();
