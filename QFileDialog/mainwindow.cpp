#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFileDialog>
#include<QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
  /*  QString dir = QFileDialog::getExistingDirectory(this,tr("Open Directory"),"C://",QFileDialog::ShowDirsOnly| QFileDialog::DontResolveSymlinks);

    qDebug()<<"Your choosen Directory is:"<<dir;


    QString filename = QFileDialog::getOpenFileName(this,tr("Open File"),"/nanditha",tr("Images (*.png *.xpm *.jpg"));
    qDebug()<<"Your choosen File is:"<<filename;


    QStringList files = QFileDialog::getOpenFileNames(this,"Select one or more files to open",
                                                      "/Downloads","Images(*.png *.xpm *.jpg);;TextFiles(*.txt);;XML files (*.xml)");
    qDebug()<<"Your choosen Files are:"<<files;
*/
    QString filesave=QFileDialog::getSaveFileName(this,tr("save File"),"/D:/nanditha/C++Assignment.jpg",
                                                  tr("Images (*.png *.xpm *.jpg);;Text files(*.txt);;XML files(*>xml)"));
            qDebug()<<"Your choosen Saved Files:"<<filesave;
}
