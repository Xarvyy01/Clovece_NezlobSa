//
// Created by denis on 2. 1. 2024.
//

#ifndef HRA_CLOVECE_PANACIK_H
#define HRA_CLOVECE_PANACIK_H


class panacik {

private:
    int x;
    int y;
    int indexPolicka = -1000;
    int indexFigurky;
    int indexHraca;
    char graphic = 'w';

public:

    panacik();

    void postavPanacika(int x, int y) {
        this->x = x;
        this->y = y;
    }

    void setIndexFigurky(int index) {
        this->indexFigurky = index;
    }

    int getIndexFigurky() {
        return this->indexFigurky;
    }

    void setGraphic(char graphic) {
        this->graphic = graphic;
    }

    char getGraphic(){
        return this->graphic;
    }

    void setIndexPolicka(int indexPolicka) {
        this->indexPolicka = indexPolicka;
    }

    int getIndexPolicka() {
        return indexPolicka;
    }

};


#endif //HRA_CLOVECE_PANACIK_H
