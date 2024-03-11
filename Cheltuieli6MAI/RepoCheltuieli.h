//
// Created by tenni on 06/05/2023.
//

#ifndef INCERCAREPOO_6MAI_REPOCHELTUIELI_H
#define INCERCAREPOO_6MAI_REPOCHELTUIELI_H


#include "Cheltuieli.h"
#include <vector>
using namespace std;

class RepoCheltuieli {
private:
    vector<Cheltuieli *> cheltuiala;
public:
    RepoCheltuieli();
    ~RepoCheltuieli();
    void addCheltuieli(int z, int s, char* t);
    vector<Cheltuieli *>getAll();
    int getSize();
    void stergeCheltuialaZi(int z);
    int sumaMancare(char* t);
    void stergeCheltuialaTip(char* t);
    void filtrareMancare(char* t);
    int sumaTipR(char* t);
};


#endif //INCERCAREPOO_6MAI_REPOCHELTUIELI_H
