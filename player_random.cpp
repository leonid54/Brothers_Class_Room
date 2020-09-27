#include <string>
#include <iostream>
#include "game.h"
#include "player_random.h"
using namespace std;

RandomPlayer::RandomPlayer(string name)
{
    m_name = name;
}
string RandomPlayer::getName()
{
    return m_name;
}
bool RandomPlayer::doStep(int& x, int& y, Game& game)
{
    /*if (game.isBoardFilled())
    {
        return false;
    }*/
    do
    {
        srand(time(NULL));
        x = rand() % 3;
        y = rand() % 3;
        if (game.getBoard().value[x][y] == '#')
        {
            break;
        }
    } while (true);
    

    return true;
}
