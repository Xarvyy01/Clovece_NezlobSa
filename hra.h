//
// Created by denis on 3. 1. 2024.
//

#ifndef HRA_CLOVECE_HRA_H
#define HRA_CLOVECE_HRA_H


#include "plocha.h"
#include "hrac.h"

class hra {

private:

    int pocetHracov = 0;
    hrac* hraci[4];

    plocha* hernaPlocha;

public:

    hra(plocha hraciaPlocha);

    void pridajHraca(hrac* hrac){
        hraci[pocetHracov] = hrac;
        pocetHracov++;
    }

    int getPocetHracov() {
        return pocetHracov;
    }

};


#endif //HRA_CLOVECE_HRA_H
