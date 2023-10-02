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
