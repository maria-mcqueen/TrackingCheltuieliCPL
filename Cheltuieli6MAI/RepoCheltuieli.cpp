//
// Created by tenni on 06/05/2023.
//

#include "RepoCheltuieli.h"
#include <vector>
#include <cstring>


using namespace std;

RepoCheltuieli::RepoCheltuieli(){}

RepoCheltuieli::~RepoCheltuieli(){}

void RepoCheltuieli::addCheltuieli(int z, int s, char* t) {
    Cheltuieli *cheltuieli = new Cheltuieli(z, s, t);
    this->cheltuiala.push_back(cheltuieli);
}
int RepoCheltuieli::getSize() {
    return this->cheltuiala.size();
}
vector<Cheltuieli *> RepoCheltuieli::getAll() {
    return this->cheltuiala;
}

void RepoCheltuieli::stergeCheltuialaZi(int z) {
    int d=this->getSize();
    int i;
    for(i=0;i< d;i++){
        if(cheltuiala[i]->getZiua()==z){
            delete cheltuiala[i];
            cheltuiala.erase(cheltuiala.begin() + i);
            i=i-1;
            d=d-1;
            continue;
        }
        else break;
    }
}

void RepoCheltuieli::stergeCheltuialaTip(char* t) {
    int d=this->getSize();
    int i;
    for(i=0;i< d;i++){
        if(cheltuiala[i]->getTipul()==t){
            delete cheltuiala[i];
            cheltuiala.erase(cheltuiala.begin() + i);
            i=i-1;
            d=d-1;
            continue;
        }
        else break;
    }
}

int RepoCheltuieli::sumaMancare(char* t){
    int d = this->getSize();
    int i;
    int s=0;
    for(i=0;i<d;i++){
        if(cheltuiala[i]->getTipul() == t){
            s=s+cheltuiala[i]->getSuma();
            continue;
        }
    }
    return s;
}

void RepoCheltuieli::filtrareMancare(char *t) {
    int d=this->getSize();
    int i;
    for(i=0;i< d;i++){
        if(cheltuiala[i]->getTipul()!=t){
            delete cheltuiala[i];
            cheltuiala.erase(cheltuiala.begin() + i);
            i=i-1;
            d=d-1;
            continue;
        }
        else break;
    }
}

int RepoCheltuieli::sumaTipR(char *t) {
    //char* t = new char[10];
    int s=0;
    int k=0;
    int d=this->getSize();
    int i;
    for(i=0;i< d;i++){
        if(strcmp(cheltuiala[i]->getTipul(), t) == 0){
            s=s+cheltuiala[i]->getSuma();
            k=k+1;
        }
    }
    delete[] t;
    return k;
}