//
// Created by tenni on 06/05/2023.
//

#include "Service.h"
#include <cstring>
#include <vector>


Service::Service(RepoCheltuieli &repo) {
    this->repo = &repo;
}

void Service::addCheltuiala(int z, int s, char *t) {
    this->repo->addCheltuieli(z, s, t);
}

void Service::stergeCheltuialaZi(int z) {
    this->repo->stergeCheltuialaZi(z);
}


vector<Cheltuieli *> Service::getAll() {
    return this->repo->getAll();
}

void Service::stergeCheltuialaTip(char* t) {
    this->repo->stergeCheltuialaTip(t);
}


vector<Cheltuieli*> Service::filtrareTip(char* t) {
    vector<Cheltuieli*> cheltuieli = this->repo->getAll();
    vector<Cheltuieli*> cheltuieli_t;
    int d = this->repo->getSize();
    char* z;
    for(int i = 0; i < d; ++i){
        Cheltuieli *cheltuiala = cheltuieli.at(i);
        z = cheltuiala->getTipul();
        if(strcmp(z, t) == 0) {
            cheltuieli_t.push_back(cheltuiala);
        }
        else{
            //
        }
    }
    return  cheltuieli_t;
}