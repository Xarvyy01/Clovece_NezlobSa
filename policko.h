//
// Created by denis on 2. 1. 2024.
//

#ifndef HRA_CLOVECE_POLICKO_H
#define HRA_CLOVECE_POLICKO_H


#include "panacik.h"

class policko {

private:

    int x ;
    int y ;
    int index;
    int indexHome = -1;
    char graphic = '*';
    bool isHome = false;

    panacik* figurka = nullptr;

public:

    policko();

    policko* setVectorX(int x) {
        this->x = x;
        return this;
    }

    policko* setVectorY(int y) {
        this->y = y;
        return this;
    }

    policko* setGraphic(char graphic) {
        this->graphic = graphic;
        return this;
    }

    policko* setIndex(int index) {
        this->index = index;
        return this;
    }

    policko* setHome(bool isHome) {
        this->isHome = isHome;
        return this;
    }

    policko* setIndexHome(int index) {
        this->indexHome = index;
        return this;
    }

    panacik* getFigurka() {
        return this->figurka;
    }

    int getIndexHome() {
        return this->indexHome;
    }

    int getVectorX() {
        return this->x;
    }

    int getVectorY() {
        return this->y;
    }

    char getGraphic() {
        if (figurka == nullptr) {
            return this->graphic;
        }
        return figurka->getGraphic();
    }

    int getIndex() {
        return this->index;
    }

    bool getHome() {
        return this->isHome;
    }

    void pridajPanacika(panacik* figurka) {
        this->figurka = figurka;
     }

    void odstranPanacika() {
        this->figurka = nullptr;
    }

};


#endif //HRA_CLOVECE_POLICKO_H
