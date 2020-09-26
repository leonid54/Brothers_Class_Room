#include <string>
#include <iostream>
#include "game.h"
using namespace std;

RandomPlayer::RandomPlayer()
{
}

bool RandomPlayer::doStep(int& x, int& y, Game& game)
{
    if (game.isBoardFilled())
    {
        return false;
    }
    do {
        srand(time(0));
        x = rand() % 3;
        y = rand() % 3;
        if (game.getBoard2().value[x][y] == "#")
        {
            break;
        }
    } while (true)
    {

    }
    return true;
}
