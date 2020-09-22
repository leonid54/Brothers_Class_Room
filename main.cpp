#include <iostream>
#include "player_random.h"
#include "player_smart.h"
#include "game.h"
#include <vector>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    Game game;
    RandomPlayer player_X("Jack",rand ()% 3, rand() % 3);
    SmartPlayer player_0("Mila",2,3);
    /*game.MakeStep_X(1,2);*/
    /*game.MakeStep_0(2, 1);*/
    game.getBoard();
    return 0;
}
