#include "infodialog.h"
#include "ui_infodialog.h"

InfoDialog::InfoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InfoDialog)
{
    ui->setupUi(this);
}

InfoDialog::~InfoDialog()
{
    delete ui;
}

void InfoDialog::on_buttonBox_clicked(QAbstractButton *button)
{
    QDialogButtonBox::StandardButton stdButton=ui->buttonBox->standardButton(button);
    if(stdButton==QDialogButtonBox::Ok)
    {
       accept();
       qDebug()<<"Ok button clicked";
    }
    if(stdButton==QDialogButtonBox::Yes)
    {
       accept();
       qDebug()<<"Yes button clicked";
    }
    if(stdButton==QDialogButtonBox::Save)
    {
       accept();
       qDebug()<<"save button clicked";
    }
    if(stdButton==QDialogButtonBox::SaveAll)
    {
       accept();
       qDebug()<<"Save All button clicked";
    }
    if(stdButton==QDialogButtonBox::Open)
    {
       open();
       qDebug()<<"Open button clicked";
    }
    if(stdButton==QDialogButtonBox::No)
    {
       reject();
       qDebug()<<"No button clicked";
    }
    if(stdButton==QDialogButtonBox::Cancel)
    {
       reject();
       qDebug()<<"cancel button clicked";
    }
}
