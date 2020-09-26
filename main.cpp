#include <iostream>
#include "player_random.h"
#include "player_smart.h"
#include "game.h"
#include <vector>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    Game<char> game;
    RandomPlayer player;
    int x, y;
    if (player.doStep(x, y, game))
    {
        game.makeStep(x, y);
    }
    else
    {
        cout << "Доска кончилась" << endl;
    }
    return 0;
}
