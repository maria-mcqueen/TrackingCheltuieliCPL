//
// Created by tenni on 06/05/2023.
//

#include "Ui.h"
#include <cstring>
#include <iostream>

Ui::Ui(Service &service) {
    this->service = &service;
}

void Ui::addCheltuieli() {
    int s,z;
    char* t =new char[10];
    cout<<"Ziua: "<<endl;
    cin>>z;
    cout<<"suma: "<<endl;
    cin>>s;
    cout<<"tipul: "<<endl;
    cin>>t;
    this->service->addCheltuiala(z,s,t);
    delete[] t;
}

void Ui::printMeniu() {
    cout<<"1.Adauga cheltuiala: "<<endl;
    cout<<"2.Afiseaza cheltuielile: "<<endl;
    cout<<"3.Afiseaza cheltuielile dintr-o anumita zi: "<<endl;
    cout<<"4.Suma pentru un anumit tip: "<<endl;
    cout<<"5.Filtreaza dupa un anumit tip: "<<endl;
    cout<<"6.Sterge Tip: "<<endl;
    cout<<"0.Iesire"<<endl;

}


int Ui::Meniu() {
    int optiune;
    do{
        this->printMeniu();
        cout << endl << "optiunea: ";
        cin >> optiune;

        switch(optiune) {
            case 1:
                this->addCheltuieli();
                break;
            case 2:
                this->afisareCheltuieli();
                break;
            case 3:
                this->afisareZiua();
                break;
            case 4:
                this->sumaTip();
                break;
            case 5:
                this->filtrareTip();
                break;
            case 6:
                this->stergeTip();
                break;
            case 0:
                break;
        }
    } while(optiune != 0);
    cout<< endl;
}

void Ui::afisareCheltuieli() {
    for(const auto cheltuieli: this->service->getAll()) {
        cout << "ziua: " << cheltuieli->getZiua() << endl;
        cout << "suma: " << cheltuieli->getSuma() << endl;
        cout << "tipul: " << cheltuieli->getTipul() << endl;
    }
}

void Ui:: afisareZiua(){
    int z;
    cout << "ziua: ";
    cin >> z;
    for(const auto cheltuieli: this->service->getAll()){
        if(cheltuieli->getZiua()==z){
            cout << "s: " << cheltuieli->getSuma() << endl;
            cout << "tipul: " << cheltuieli->getTipul() << endl;
        }
    }

}

void Ui::sumaTip(){
    char* t = new char[10];
    int s=0;
    int k=0;
    cout << "tipul: ";
    cin >> t;
    for(const auto cheltuieli: this->service->getAll()){
        if(strcmp(cheltuieli->getTipul(), t) == 0){
            s=s+cheltuieli->getSuma();
            k=k+1;
        }
    }
    cout<<"suma pentru tipul selectat: "<<s<<endl;
    delete[] t;
}

void Ui::filtrareTip(){
    char* t = new char[10];
    cout << "tipul: ";
    cin >> t;
    for(const auto cheltuieli: this->service->filtrareTip(t)){
        cout<<"ziua: "<<cheltuieli->getZiua()<<endl;
        cout<<"suma: "<<cheltuieli->getSuma()<<endl;
        cout<<"are tipul: "<<cheltuieli->getTipul()<<endl;
    }
    delete[] t;
}

void Ui::stergeTip() {
    char* t = new char[10];
    cout << "tipul: ";
    cin >> t;
    for(const auto cheltuieli: this->service->filtrareTip(t)){
        this->service->stergeCheltuialaTip(t);
    }
    delete[] t;
}
