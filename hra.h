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
    bool zpainac_hra = true;

    plocha* hernaPlocha;

public:

    hra();

    void pridajHraca(hrac* hrac){
        hraci[pocetHracov] = hrac;
        pocetHracov++;
    }

    int getPocetHracov() {
        return pocetHracov;
    }

    void hra_cyklus();

    void pridajHracovDoPlochy() {

        std::vector<hrac*> hraci_vector;

        for (int i = 0; i < pocetHracov; ++i) {
            hraci_vector.push_back(hraci[i]);
        }

        hernaPlocha->pridajHracov(hraci_vector);

    }

    void pridajPlochu(plocha* herna_plocha) {
        this->hernaPlocha = herna_plocha;
    }

    void posunHracaOhodKocou(int indexHraca, int indexFigurky,int hodKocou);

    int pocetFiguruekVdomcekuKtoryMaHrac(int index) {
        hraci[index - 1]->getPocetFiguriekVDomceku();
    }

    std::vector<int> getIndexyFiguriekNaPloche(int indexHraca) {

        std::vector<int> indexFiguriek;
        indexFiguriek.clear();
        hrac* hrac = hraci[indexHraca];

        for (int i = 0; i < hrac->getPocetFiguriekNaPloche(); ++i) {
            indexFiguriek.push_back(hrac->getFigurkaNaPlocheByIndex(i)->getIndexFigurky());
        }

        return indexFiguriek;
    }

};


#endif //HRA_CLOVECE_HRA_H
