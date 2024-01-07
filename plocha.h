//
// Created by denis on 2. 1. 2024.
//

#ifndef HRA_CLOVECE_PLOCHA_H
#define HRA_CLOVECE_PLOCHA_H


#include "policko.h"
#include <vector>

class plocha {

    const int sizeOfArray = 11;

private:
    policko policka[11][11];
    panacik* figurky[4];

public:

    plocha();

    void update();

    void postavPanacikaNaIndex(int index, panacik* figurka);

    policko* najdiPolickoByIndex(int index);

    std::vector<policko*> najdiDomcekPolickaByIndex(int index);

    policko* najdiHomePolickoByIndex(int index);

};


#endif //HRA_CLOVECE_PLOCHA_H
