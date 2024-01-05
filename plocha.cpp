//
// Created by denis on 2. 1. 2024.
//

#include "plocha.h"
#include <iostream>
#include <vector>


plocha::plocha() {

    //1 Riadok
    policka[0][0].setGraphic('#')->setIndexHome(1);
    policka[1][0].setGraphic('#')->setIndexHome(1);
    policka[2][0].setGraphic(' ');
    policka[3][0].setGraphic(' ');
    policka[4][0].setGraphic('o')->setIndex(1);
    policka[5][0].setGraphic('o')->setIndex(2);
    policka[6][0].setGraphic('&')->setIndex(3)->setHome(true);
    policka[7][0].setGraphic(' ');
    policka[8][0].setGraphic(' ');
    policka[9][0].setGraphic('#')->setIndexHome(2);
    policka[10][0].setGraphic('#')->setIndexHome(2);

    //2 Riadok
    policka[0][1].setGraphic('#')->setIndexHome(1);;
    policka[1][1].setGraphic('#')->setIndexHome(1);;
    policka[2][1].setGraphic(' ');
    policka[3][1].setGraphic(' ');
    policka[4][1].setGraphic('o')->setIndex(40);
    policka[5][1].setGraphic('*')->setIndex(-1);
    policka[6][1].setGraphic('o')->setIndex(4);
    policka[7][1].setGraphic(' ');
    policka[8][1].setGraphic(' ');
    policka[9][1].setGraphic('#')->setIndexHome(2);;
    policka[10][1].setGraphic('#')->setIndexHome(2);;

    //3 Riadok
    policka[0][2].setGraphic(' ');
    policka[1][2].setGraphic(' ');
    policka[2][2].setGraphic(' ');
    policka[3][2].setGraphic(' ');
    policka[4][2].setGraphic('o')->setIndex(39);
    policka[5][2].setGraphic('*')->setIndex(-1);
    policka[6][2].setGraphic('o')->setIndex(5);
    policka[7][2].setGraphic(' ');
    policka[8][2].setGraphic(' ');
    policka[9][2].setGraphic(' ');
    policka[10][2].setGraphic(' ');

    //4 Riadok
    policka[0][3].setGraphic(' ');
    policka[1][3].setGraphic(' ');
    policka[2][3].setGraphic(' ');
    policka[3][3].setGraphic(' ');
    policka[4][3].setGraphic('o')->setIndex(38);
    policka[5][3].setGraphic('*')->setIndex(-1);
    policka[6][3].setGraphic('o')->setIndex(6);
    policka[7][3].setGraphic(' ');
    policka[8][3].setGraphic(' ');
    policka[9][3].setGraphic(' ');
    policka[10][3].setGraphic(' ');

    //5 Riadok
    policka[0][4].setGraphic('&')->setIndex(33)->setHome(true);
    policka[1][4].setGraphic('o')->setIndex(34);
    policka[2][4].setGraphic('o')->setIndex(35);
    policka[3][4].setGraphic('o')->setIndex(36);
    policka[4][4].setGraphic('o')->setIndex(37);
    policka[5][4].setGraphic('*')->setIndex(-1);
    policka[6][4].setGraphic('o')->setIndex(7);
    policka[7][4].setGraphic('o')->setIndex(8);
    policka[8][4].setGraphic('o')->setIndex(9);
    policka[9][4].setGraphic('o')->setIndex(10);
    policka[10][4].setGraphic('o')->setIndex(11);

    //6 Riadok
    policka[0][5].setGraphic('o')->setIndex(32);
    policka[1][5].setGraphic('*')->setIndex(-4);
    policka[2][5].setGraphic('*')->setIndex(-4);
    policka[3][5].setGraphic('*')->setIndex(-4);
    policka[4][5].setGraphic('*')->setIndex(-4);
    policka[5][5].setGraphic(' ');
    policka[6][5].setGraphic('*')->setIndex(-2);
    policka[7][5].setGraphic('*')->setIndex(-2);
    policka[8][5].setGraphic('*')->setIndex(-2);
    policka[9][5].setGraphic('*')->setIndex(-2);
    policka[10][5].setGraphic('o')->setIndex(12);

    //7 Riadok
    policka[0][6].setGraphic('o')->setIndex(31);
    policka[1][6].setGraphic('o')->setIndex(30);
    policka[2][6].setGraphic('o')->setIndex(29);
    policka[3][6].setGraphic('o')->setIndex(28);
    policka[4][6].setGraphic('o')->setIndex(27);
    policka[5][6].setGraphic('*')->setIndex(-3);
    policka[6][6].setGraphic('o')->setIndex(17);
    policka[7][6].setGraphic('o')->setIndex(16);
    policka[8][6].setGraphic('o')->setIndex(15);
    policka[9][6].setGraphic('o')->setIndex(14);
    policka[10][6].setGraphic('&')->setIndex(13)->setHome(true);

    //8 Riadok
    policka[0][7].setGraphic(' ');
    policka[1][7].setGraphic(' ');
    policka[2][7].setGraphic(' ');
    policka[3][7].setGraphic(' ');
    policka[4][7].setGraphic('o')->setIndex(26);
    policka[5][7].setGraphic('*')->setIndex(-3);
    policka[6][7].setGraphic('o')->setIndex(18);
    policka[7][7].setGraphic(' ');
    policka[8][7].setGraphic(' ');
    policka[9][7].setGraphic(' ');
    policka[10][7].setGraphic(' ');

    //9 Riadok
    policka[0][8].setGraphic(' ');
    policka[1][8].setGraphic(' ');
    policka[2][8].setGraphic(' ');
    policka[3][8].setGraphic(' ');
    policka[4][8].setGraphic('o')->setIndex(25);
    policka[5][8].setGraphic('*')->setIndex(-3);
    policka[6][8].setGraphic('o')->setIndex(19);
    policka[7][8].setGraphic(' ');
    policka[8][8].setGraphic(' ');
    policka[9][8].setGraphic(' ');
    policka[10][8].setGraphic(' ');

    //10 Riadok
    policka[0][9].setGraphic('#')->setIndexHome(3);;
    policka[1][9].setGraphic('#')->setIndexHome(3);;
    policka[2][9].setGraphic(' ');
    policka[3][9].setGraphic(' ');
    policka[4][9].setGraphic('o')->setIndex(24);
    policka[5][9].setGraphic('*')->setIndex(-3);
    policka[6][9].setGraphic('o')->setIndex(20);
    policka[7][9].setGraphic(' ');
    policka[8][9].setGraphic(' ');
    policka[9][9].setGraphic('#')->setIndexHome(4);;
    policka[10][9].setGraphic('#')->setIndexHome(4);;

    //11 Riadok
    policka[0][10].setGraphic('#')->setIndexHome(3);;
    policka[1][10].setGraphic('#')->setIndexHome(3);;
    policka[2][10].setGraphic(' ');
    policka[3][10].setGraphic(' ');
    policka[4][10].setGraphic('&')->setIndex(23)->setHome(true);
    policka[5][10].setGraphic('o')->setIndex(22);
    policka[6][10].setGraphic('o')->setIndex(21);
    policka[7][10].setGraphic(' ');
    policka[8][10].setGraphic(' ');
    policka[9][10].setGraphic('#')->setIndexHome(4);;
    policka[10][10].setGraphic('#')->setIndexHome(4);;
}

void plocha::update() {

    panacik* figurka_test = new panacik();
    figurka_test->setGraphic('M');
    postavPanacikaNaIndex(1, figurka_test);
    postavPanacikaNaIndex(17 , figurka_test);



    for (int i = 0; i < sizeOfArray; ++i) {

        std::cout << " " << std::endl;

        for (int j = 0; j < sizeOfArray; ++j) {
            policka[j][i].setVectorX(j)->setVectorY(i);
            std::cout << policka[j][i].getGraphic();
            std::cout << " ";
        }

    }

}

void plocha::postavPanacikaNaIndex(int index, panacik* figurka) {

    if (figurka->getIndexPolicka() > 0) {
        najdiPolickoByIndex(figurka->getIndexPolicka())->odstranPanacika();
    }
    najdiPolickoByIndex(index)->pridajPanacika(figurka);
    figurka->setIndexPolicka(index);

}

policko* plocha::najdiPolickoByIndex(int index) {

    for (int i = 0; i < sizeOfArray; ++i) {
        for (int j = 0; j < sizeOfArray; ++j) {

            if (policka[j][i].getIndex() == index) {
                return &policka[j][i];
            }

        }
    }

}

std::vector<policko*> plocha::najdiDomcekPolickaByIndex(int index) {

    std::vector<policko*> array;
    int pocet = 0;
    for (int i = 0; i < sizeOfArray; ++i) {
        for (int j = 0; j < sizeOfArray; ++j) {

            if (policka[j][i].getIndexHome() == index) {
                array.push_back(&policka[j][i]);
                pocet++;
            }

        }
    }

    return array;

}
