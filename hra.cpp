//
// Created by denis on 3. 1. 2024.
//

#include <iostream>
#include "hra.h"

hra::hra() {



}

void hra::hra_cyklus() {
    srand(time(0));
    int hracNaRade = 0;
    int vyber = 0;
    while(true) {
        hrac* hrac = hraci[hracNaRade];
        if (hrac->getPocetFiguriekVDomceku() != 4) {
            std::cout << "Na rade je hráč: " << (hracNaRade + 1) << std::endl;
            std::cout << "<===========================>" << std::endl;
            std::cout << "1: Hod Kockou" << std::endl;
            std::cout << "2: Kontrola Panačikov" << std::endl;
            std::cout << "3: Ukonči Hru" << std::endl;

            std::cin >> vyber;

            switch (vyber) {
                case 1: {
                    int randomNumber = 6;
                    int sucet = 0;

                    while (randomNumber == 6) {

                        randomNumber = (rand() % 6 + 1);
                        sucet = sucet + randomNumber;

                    }

                    std::cout << "Vyber Panacika od 1 - 4" << std::endl;
                    int indexPanacika;

                    std::cin >> indexPanacika;

                    panacik *figurka = hrac->vyberFigurkuByIndex(indexPanacika);
                    hernaPlocha->postavPanacikaNaIndex(figurka->getIndexPolicka() + sucet, figurka);


                    break;

                }
                case 2: {

                    break;

                }
                case 3: {

                    break;

                }
                hracNaRade++;
            }
        } else {
            int pokus = true;
            int pokracuj;
            for (int i = 0; i < 3; ++i) {
                int randomNumber = (rand() % 6 + 1);
                std::cout << "Padla: " << randomNumber << std::endl;

                if (pokus == true) {
                    std::cout << "Stlačte 1 pre pokračovanie:" << std::endl;
                    std::cin >> pokracuj;
                }

                if (randomNumber == 6 && pokus == true) {
                    hrac->polozFigurkuNaHomePolickoByIndex();
                    pokus = false;
                }

            }
            if (pokus) {
                hracNaRade++;
            }

        }

        hracNaRade++;
        hernaPlocha->update();

        if (hracNaRade > pocetHracov - 1) {
            hracNaRade = 0;
        }
    }

}

void hra::posunHracaOhodKocou(int indexHraca, int indexPanacika, int hodKocou) {

    hrac* hrac = hraci[indexHraca];

    if (hrac->getPocetFiguriekVDomceku() != 4) {
        panacik *figurka = hrac->vyberFigurkuByIndex(indexPanacika);
        hernaPlocha->postavPanacikaNaIndex(figurka->getIndexPolicka() + hodKocou, figurka);
    } else {
        if (hodKocou == 6) {
            hrac->polozFigurkuNaHomePolickoByIndex();
        }
    }
}
