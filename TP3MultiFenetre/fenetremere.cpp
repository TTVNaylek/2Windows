//This file is part of 2Windows
//2Windows is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
//2Windows is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
//You should have received a copy of the GNU General Public License along with 2Windows If not, see <https://www.gnu.org/licenses/>
#include "fenetremere.h"
#include "ui_fenetremere.h"

FenetreMere::FenetreMere(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FenetreMere)
{
    ui->setupUi(this);
    setWindowTitle("Fenetre Mere");
}

FenetreMere::~FenetreMere()
{
    delete ui;
}

void FenetreMere::on_pushButtonClose_clicked()
{
    QApplication::quit();
}

void FenetreMere::on_pushButtonOpen_clicked()
{
    //Instancie l'objet de la classe fille et l'affiche
    FenetreFille *Fenetre1 = new FenetreFille;

    //Connecte le signal de la valeur de la fenetre mere à la fenetre fille
    connect(this, SIGNAL(InitValeur(int)), Fenetre1, SLOT(InitVallabel(int)));

    //emet le signal
    QString sliderString = ui->labelValueSlider->text();
    int valeurTransmise = sliderString.toInt();
    emit InitValeur(valeurTransmise);

    //Affiche la fenetre fille
    Fenetre1->show();

    //Connecte le signal du slider au slot de la fenetre
    connect(Fenetre1, SIGNAL(ChangeValeur(int)), this, SLOT(RecValeur(int)));
}

void FenetreMere::RecValeur(int valeur)
{
    ui->labelValueSlider->setText(QString::number(valeur));
}
