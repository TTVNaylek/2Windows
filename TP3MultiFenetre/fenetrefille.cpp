//This file is part of 2Windows
//2Windows is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
//2Windows is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
//You should have received a copy of the GNU General Public License along with 2Windows If not, see <https://www.gnu.org/licenses/>
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
