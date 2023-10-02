#include "fenetrefille.h"
#include "ui_fenetrefille.h"
#include <QString>

FenetreFille::FenetreFille(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FenetreFille)
{
    ui->setupUi(this);
    setWindowTitle("Fenetre Fille");
}

FenetreFille::~FenetreFille()
{
    delete ui;
}

void FenetreFille::on_pushButtonClose_clicked()
{
    close();
}

void FenetreFille::on_horizontalSlider_valueChanged(int value)
{
    value = ui->horizontalSlider->value();
    ui->labelValSlidFen2->setText(QString::number(value));
    emit ChangeValeur(value);
}

void FenetreFille::InitVallabel(int value)
{
    ui->labelValSlidFen2->setText(QString::number(value));
    ui->horizontalSlider->setValue(value);
}
