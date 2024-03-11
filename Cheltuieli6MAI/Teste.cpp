//
// Created by tenni on 06/05/2023.
//

#include "Teste.h"
#include "Cheltuieli.h"
#include "RepoCheltuieli.h"
#include <cassert>
#include <cstring>
#include <vector>
#include "Service.h"
#include "Ui.h"
using namespace std;

void test_cheltuieli(){

    Cheltuieli ch(1, 100, "net");
    assert(ch.getZiua() == 1);
    assert(ch.getSuma() == 100);
    assert(strcmp(ch.getTipul(), "net") == 0);
    ch.setZiua(245);
    ch.setSuma(12);
    ch.setTipul("steamwallet");
    assert(ch.getZiua() == 245);
    assert(ch.getSuma() == 12);
    assert(strcmp(ch.getTipul(), "steamwallet") == 0);

}

void test_repo(){

    RepoCheltuieli repo;
    repo.addCheltuieli(34, 90, "steaofthieves");
    repo.addCheltuieli(3, 45, "ebay");
    repo.addCheltuieli(56, 96, "mariokart");
    vector<Cheltuieli *> cheltuiala = repo.getAll();
    assert(cheltuiala[0]->getZiua() == 34);
    assert(cheltuiala[0]->getSuma() == 90);
    assert(strcmp(cheltuiala[0]->getTipul(), "steaofthieves") == 0);
    assert(cheltuiala[1]->getZiua() == 3);
    assert(cheltuiala[1]->getSuma() == 45);
    assert(strcmp(cheltuiala[1]->getTipul(), "ebay") == 0);
    assert(cheltuiala[2]->getZiua() == 56);
    assert(cheltuiala[2]->getSuma() == 96);
    assert(strcmp(cheltuiala[2]->getTipul(), "mariokart") == 0);
    assert(repo.getSize() == 3);

}

void test_service(){
    RepoCheltuieli repo;
    Service service(repo);
    service.addCheltuiala(1, 7, "steaofthieves");
    service.addCheltuiala(2, 3, "ebay");
    service.addCheltuiala(3, 5, "mariokart");
    vector<Cheltuieli *> cheltuiala = service.getAll();
    assert(cheltuiala[0]->getZiua() == 1);
    assert(cheltuiala[0]->getSuma() == 7);
    assert(strcmp(cheltuiala[0]->getTipul(), "steaofthieves") == 0);
}

void test_service_sterge(){
    RepoCheltuieli repo;
    Service service(repo);
    service.addCheltuiala(1, 6, "steaofthieves");
    service.addCheltuiala(2, 65, "ebay");
    service.addCheltuiala(3, 43, "mariokart");
    vector<Cheltuieli *> cheltuiala = repo.getAll();
    service.stergeCheltuialaZi(1);
    assert(repo.getSize() == 2);
}

void test_service_sterge2(){
    RepoCheltuieli repo;
    Service service(repo);
    service.addCheltuiala(1, 6, "steaofthieves");
    service.addCheltuiala(2, 65, "ebay");
    service.addCheltuiala(3, 43, "mariokart");
    vector<Cheltuieli *> cheltuiala = repo.getAll();
    service.stergeCheltuialaTip("ebay");
    assert(repo.getSize() == 2);
}


void test_sumaMancare(){
    RepoCheltuieli repo;
    int s;
    repo.addCheltuieli(34, 90, "steaofthieves");
    repo.addCheltuieli(3, 45, "ebay");
    repo.addCheltuieli(56, 96, "ebay");
    vector<Cheltuieli *> cheltuiala = repo.getAll();
    s = repo.sumaMancare("ebay");
    assert(s==231);
}

void test_filtrareMancare(){
    RepoCheltuieli repo;
    repo.addCheltuieli(34, 90, "steaofthieves");
    repo.addCheltuieli(3, 45, "ebay");
    repo.addCheltuieli(56, 96, "ebay");
    vector<Cheltuieli *> cheltuiala = repo.getAll();
    assert(cheltuiala[0]->getZiua() == 34);
    assert(cheltuiala[0]->getSuma() == 90);
    assert(strcmp(cheltuiala[0]->getTipul(), "steaofthieves") == 0);
    repo.filtrareMancare("steaofthieves");
    //assert(repo.getSize() == 1);
}


void test_filtrareTip(){
    RepoCheltuieli repo;
    Service service(repo);
    service.addCheltuiala(1, 7, "steaofthieves");
    service.addCheltuiala(2, 3, "ebay");
    service.addCheltuiala(3, 5, "ebay");
    vector<Cheltuieli *> cheltuiala = service.getAll();
    vector<Cheltuieli *> cheltuieli_t = service.filtrareTip("ebay");
    assert(cheltuieli_t[0]->getZiua()==2);

}

void test_sumaTip(){
    RepoCheltuieli repo;
    int k1;
    repo.addCheltuieli(34, 90, "steaofthieves");
    repo.addCheltuieli(3, 45, "ebay");
    repo.addCheltuieli(56, 96, "ebay");
    vector<Cheltuieli *> cheltuiala = repo.getAll();
    assert(cheltuiala[0]->getZiua() == 34);
    assert(cheltuiala[0]->getSuma() == 90);
    k1 = repo.sumaTipR("ebay");
    assert(k1 == 2);

}