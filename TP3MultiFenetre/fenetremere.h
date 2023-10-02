#ifndef FENETREMERE_H
#define FENETREMERE_H

#include <QWidget>
#include <QString>
#include "fenetrefille.h"

namespace Ui {
class FenetreMere;
}

class FenetreMere : public QWidget
{
    Q_OBJECT

public:
    explicit FenetreMere(QWidget *parent = nullptr);
    ~FenetreMere();

private slots:
    void on_pushButtonClose_clicked();
    void on_pushButtonOpen_clicked();
    void RecValeur(int valeur);

signals:
    void InitValeur(int);

private:
    Ui::FenetreMere *ui;
};

#endif // FENETREMERE_H
