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

void InfoDialog::on_OKpushButton_clicked()
{
    QString UserPosition=ui->PositionlineEdit->text();
    if(!UserPosition.isEmpty())
    {
        Position=UserPosition;
        if(ui->WindowsradioButton->isChecked())
        {
            FavouriteOS="Windows";
        }
        if(ui->MacradioButton->isChecked())
        {
            FavouriteOS="Mac";
        }
        if(ui->LinuxradioButton->isChecked())
        {
            FavouriteOS="Linux";
        }
    }
    accept();
}

void InfoDialog::on_CancelpushButton_clicked()
{
  reject();
}

QString InfoDialog::getPosition() const
{
    return Position;
}

QString InfoDialog::getFavouriteOS() const
{
    return FavouriteOS;
}
