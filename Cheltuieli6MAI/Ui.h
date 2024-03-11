//
// Created by tenni on 06/05/2023.
//

#ifndef INCERCAREPOO_6MAI_UI_H
#define INCERCAREPOO_6MAI_UI_H

#include "Service.h"

class Ui {
private:
    Service *service;
    void printMeniu();
    void afisareCheltuieli();
    void afisareZiua();


public:
    Ui(Service &service);

    void sumaTip();
    void filtrareTip();
    int Meniu();
    void addCheltuieli();
    void stergeTip();

};


#endif //INCERCAREPOO_6MAI_UI_H
