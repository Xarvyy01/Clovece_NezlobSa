#include <iostream>
#include "plocha.h"
#include "hra.h"

int main() {

    hrac player1(1);
    hrac player2(2);
    hrac player3(3);
    plocha plocha_hra;
    hra game(&plocha_hra);
    game.pridajHraca(&player1);
    game.pridajHraca(&player2);
    //game.pridajHraca(&player2);
    player1.pridajDoDomceka(plocha_hra.najdiDomcekPolickaByIndex(player1.getIndexHraca()));
    player1.pridajHomePolicko(plocha_hra.najdiHomePolickoByIndex(player1.getIndexHraca()));
    player2.pridajDoDomceka(plocha_hra.najdiDomcekPolickaByIndex(player2.getIndexHraca()));
    player2.pridajHomePolicko(plocha_hra.najdiHomePolickoByIndex(player2.getIndexHraca()));
    //player2.pridajDoDomceka(plocha_hra.najdiDomcekPolickaByIndex(player2.getIndexHraca()));
    //player3.pridajDoDomceka(plocha_hra.najdiDomcekPolickaByIndex(player3.getIndexHraca()));
    panacik* figurka_test = new panacik();
    figurka_test->setIndexFigurky(1);
    panacik* figurka_test1 = new panacik();
    figurka_test1->setIndexFigurky(2);
    panacik* figurka_test2 = new panacik();
    figurka_test2->setIndexFigurky(3);
    panacik* figurka_test3 = new panacik();
    figurka_test3->setIndexFigurky(4);
    player1.pridajFigurkuDoDomceka(figurka_test);
    player1.pridajFigurkuDoDomceka(figurka_test1);
    player1.pridajFigurkuDoDomceka(figurka_test2);
    player1.pridajFigurkuDoDomceka(figurka_test3);

    panacik* figurka1 = new panacik();
    figurka1->setIndexFigurky(1);
    panacik* figurka2 = new panacik();
    figurka2->setIndexFigurky(2);
    panacik* figurka3 = new panacik();
    figurka3->setIndexFigurky(3);
    panacik* figurka4 = new panacik();
    figurka4->setIndexFigurky(4);
    player2.pridajFigurkuDoDomceka(figurka1);
    player2.pridajFigurkuDoDomceka(figurka2);
    player2.pridajFigurkuDoDomceka(figurka3);
    player2.pridajFigurkuDoDomceka(figurka4);

    game.pridajHracovDoPlochy();

    game.hra_cyklus();

    return 0;
}
