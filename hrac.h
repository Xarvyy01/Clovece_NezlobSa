//
// Created by denis on 3. 1. 2024.
//

#ifndef HRA_CLOVECE_HRAC_H
#define HRA_CLOVECE_HRAC_H

#include "policko.h"

class hrac {

private:

    int indexHraca;
    int pocetPolicokVdomceku = 0;
    int pocetFiguriekVdomceku = 0;
    char graphic;
    policko* domcek[4];
    panacik panacikovia[4];

public:

    hrac(int index);

    int getIndexHraca() {
        return this->indexHraca;
    }

    void pridajDoDomceka(policko* policko) {
        domcek[pocetPolicokVdomceku] = policko;
        this->pocetPolicokVdomceku++;
    }

    void pridajFigurkuDoDomceka(panacik* figurka) {
        domcek[pocetPolicokVdomceku]->pridajPanacika(figurka);
        pocetFiguriekVdomceku++;
    }

    panacik* odoberZdomceka(){
        panacik* temp_panacik = this->domcek[pocetPolicokVdomceku]->getFigurka();
        this->domcek[pocetPolicokVdomceku]->pridajPanacika(nullptr);
        pocetFiguriekVdomceku--;
        return temp_panacik;
    }

    void setGraphhic(int index) {

        switch (index) {
            case 1: this->graphic = 'R'; break;
            case 2: this->graphic = 'G'; break;
            case 3: this->graphic = 'B'; break;
            case 4: this->graphic = 'Y'; break;
        }

    }

};


#endif //HRA_CLOVECE_HRAC_H
