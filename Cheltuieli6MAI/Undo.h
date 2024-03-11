//
// Created by tenni on 07/05/2023.
//

#ifndef INCERCAREPOO_6MAI_UNDO_H
#define INCERCAREPOO_6MAI_UNDO_H

#include "Cheltuieli.h"

class UndoStructure {
public:

    Cheltuieli *cheltuiala;
    string opType; // delete, add, update

    UndoStructure() = default;
    UndoStructure(Cheltuieli *cheltuiala, string opType): cheltuiala(cheltuiala), opType(opType) {}

};

#endif //INCERCAREPOO_6MAI_UNDO_H
