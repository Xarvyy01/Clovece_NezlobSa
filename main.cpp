#include <iostream>
#include "plocha.h"
#include "hra.h"

int main() {

    hrac player1(1);
    hrac player2(2);
    hrac player3(3);
    plocha plocha_hra;
    hra game(plocha_hra);
    game.pridajHraca(&player1);
    game.pridajHraca(&player2);
    //plocha_hra.update();
    player1.pridajDoDomceka(plocha_hra.najdiDomcekPolickaByIndex(player1.getIndexHraca()));
    player1.pridajHomePolicko(plocha_hra.najdiHomePolickoByIndex(player1.getIndexHraca()));
    player2.pridajDoDomceka(plocha_hra.najdiDomcekPolickaByIndex(player2.getIndexHraca()));
    player3.pridajDoDomceka(plocha_hra.najdiDomcekPolickaByIndex(player3.getIndexHraca()));
    panacik* figurka_test = new panacik();
    figurka_test->setIndexFigurky(1);
    panacik* figurka_test1 = new panacik();
    panacik* figurka_test2 = new panacik();
    panacik* figurka_test3 = new panacik();
    player1.pridajFigurkuDoDomceka(figurka_test);
    player1.pridajFigurkuDoDomceka(figurka_test1);
    player1.pridajFigurkuDoDomceka(figurka_test2);
    player1.pridajFigurkuDoDomceka(figurka_test3);
    player1.polozFigurkuNaHomePolickoByIndex();






    plocha_hra.update();
    return 0;
}
