//
// Created by denis on 2. 1. 2024.
//

#ifndef HRA_CLOVECE_PLOCHA_H
#define HRA_CLOVECE_PLOCHA_H


#include "policko.h"
#include "hrac.h"
#include <vector>

class plocha {

    const int sizeOfArray = 11;

private:
    policko policka[11][11];
    std::vector<hrac*> hraci;
    std::vector<char> plocha_char;

public:

    plocha();

    void update();

    void postavPanacikaNaIndex(int index, panacik* figurka);

    policko* najdiPolickoByIndex(int index);

    std::vector<policko*> najdiDomcekPolickaByIndex(int index);

    policko* najdiHomePolickoByIndex(int index);

    void pridajHracov(std::vector<hrac*> hraci) {

        this->hraci = hraci;

    }

    policko* najdiFigurkeDomcekApostavFigurku(panacik* figurka);

    std::vector<char> getHernaPlocha();

};


#endif //HRA_CLOVECE_PLOCHA_H
