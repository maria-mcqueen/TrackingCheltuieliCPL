//
// Created by tenni on 06/05/2023.
//

#ifndef INCERCAREPOO_6MAI_CHELTUIELI_H
#define INCERCAREPOO_6MAI_CHELTUIELI_H


#include <iostream>
using namespace std;

class Cheltuieli {
private:
    int ziua;
    int suma;
    char* tip;
public:
    Cheltuieli();
    Cheltuieli(int z, int s, char* t);
    Cheltuieli(Cheltuieli &otherCheltuieli);
    ~Cheltuieli();
    int getZiua();
    int getSuma();
    char* getTipul();
    void setZiua(int z);
    void setSuma(int s);
    void setTipul(char* t);
};


#endif //INCERCAREPOO_6MAI_CHELTUIELI_H
