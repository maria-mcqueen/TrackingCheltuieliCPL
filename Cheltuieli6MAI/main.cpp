#include <iostream>
#include "Teste.h"
#include "Ui.h"
#include "Service.h"


int main() {
    std::cout << "mergelmao" << std::endl;
    test_cheltuieli();
    test_repo();
    test_service();
    test_service_sterge();
    test_filtrareMancare();
    test_filtrareTip();

    RepoCheltuieli Repo = RepoCheltuieli();
    auto service = Service(Repo);
    Ui ui = Ui(service);

    ui.Meniu();


    return 0;
}
