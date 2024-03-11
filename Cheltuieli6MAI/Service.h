//
// Created by tenni on 06/05/2023.
//

#ifndef INCERCAREPOO_6MAI_SERVICE_H
#define INCERCAREPOO_6MAI_SERVICE_H

#include "RepoCheltuieli.h"

class Service {
private:
    RepoCheltuieli *repo;

public:

    explicit Service(RepoCheltuieli &repo);

    void addCheltuiala(int z, int s, char* t);
    void stergeCheltuialaZi(int z);
    vector<Cheltuieli *> filtrareTip(char* t);
    vector<Cheltuieli *>getAll();
    void stergeCheltuialaTip(char* s);

};



#endif //INCERCAREPOO_6MAI_SERVICE_H
