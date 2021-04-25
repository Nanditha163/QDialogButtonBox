#include "widget.h"
#include "ui_widget.h"
#include<infodialog.h>
#include<QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_ProvideInfopushButton_clicked()
{
 InfoDialog *dialog=new InfoDialog(this);

 connect(dialog,&InfoDialog::accepted,[=]()
 {
     QString Position=dialog->getPosition();
     QString OS=dialog->getFavouriteOS();
     qDebug()<<"Dialog Accepted,Position is"<<Position<<"and favourite os is:"<<OS;
     ui->Infolabel->setText("Your position is:"+Position+"and your favourite OS is"+OS);

 });
 connect(dialog,&InfoDialog::rejected,[=](){
     QString Position=dialog->getPosition();
     QString OS=dialog->getFavouriteOS();
     qDebug()<<"Dialog ARejected,Position is"<<Position<<"and favourite os is:"<<OS;
     ui->Infolabel->setText("Your position is:"+Position+"and your favourite OS is"+OS);

 });
 dialog->show();
 dialog->raise();
 dialog->activateWindow();
}
