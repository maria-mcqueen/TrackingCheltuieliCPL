//
// Created by tenni on 06/05/2023.
//

#include "Cheltuieli.h"
#include <cstring>

Cheltuieli::Cheltuieli() {
    //constructor
    this->ziua = 0;
    this->suma = 0;
    this->tip = nullptr;
}
Cheltuieli::Cheltuieli(int z, int s, char *t) {
    //Constructor cu parametri
    this->ziua = z;
    this->suma = s;
    this->tip = new char [strlen(t) +1];
    strcpy_s(this->tip, strlen(t) + 1, t);
}
Cheltuieli::Cheltuieli(Cheltuieli &otherCheltuieli) {
    //copy constructor
    this->ziua = otherCheltuieli.ziua;
    this->suma = otherCheltuieli.suma;
    this->tip = new char [strlen(otherCheltuieli.tip) + 1];
    strcpy_s(this->tip, strlen(otherCheltuieli.tip) + 1, otherCheltuieli.tip);
}
int Cheltuieli::getZiua() {
    return this->ziua;
}
int Cheltuieli::getSuma() {
    return this->suma;
}
char* Cheltuieli::getTipul() {
    return this->tip;
}
void Cheltuieli::setZiua(int z) {
    this->ziua = z;
}
void Cheltuieli::setSuma(int s) {
    this->suma = s;
}
void Cheltuieli::setTipul(char* t) {
    if(this->tip) {
        delete[] this->tip;
    }
    this->tip = new char [strlen(t) + 1];
    strcpy_s(this->tip, strlen(t) + 1, t);
}
Cheltuieli::~Cheltuieli(){
    //destructor
    if (this->tip != nullptr) {
        delete[] this->tip;
        this->tip = nullptr;
    }
}

