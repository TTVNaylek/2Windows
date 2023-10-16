//This file is part of 2Windows
//2Windows is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
//2Windows is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
//You should have received a copy of the GNU General Public License along with 2Windows If not, see <https://www.gnu.org/licenses/>
#ifndef FENETREFILLE_H
#define FENETREFILLE_H

#include <QWidget>

namespace Ui {
class FenetreFille;
}

class FenetreFille : public QWidget
{
    Q_OBJECT

public:
    explicit FenetreFille(QWidget *parent = nullptr);
    ~FenetreFille();

signals:
    void ChangeValeur(int valeur);

private slots:
    void on_pushButtonClose_clicked();
    void on_horizontalSlider_valueChanged(int value);
    void InitVallabel(int value);

private:
    Ui::FenetreFille *ui;
};

#endif // FENETREFILLE_H
