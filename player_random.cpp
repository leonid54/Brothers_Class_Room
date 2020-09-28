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
   /* if (game.isBoardFilled())
    {
        return false;
    }*/
  /*  do
    {
        srand(time(NULL));
        int i = rand() % 3;
        int j = rand() % 3;
        if (game.getBoard().value[i][j] == '#')
        {
            x = i;
            y = j;
            break;
        }
    } while (true);*/
    srand(time(NULL));
    do
    {
        
        int i = rand() % 3;
        int j = rand() % 3;
        if (game.getBoard().value[i][j] == '#' && game.getBoard().value[i][j] != 'x')
        {
            x = i;
            y = j;
            break;
        }
    } while (true);
  /*  int i = rand() % 3;
    int j = rand() % 3;
    while (game.getBoard().value[i][j] != '#')
    {
        int i = rand() % 3;
        int j = rand() % 3;
        if (game.getBoard().value[i][j] == '#')
        {
            x = i;
            y = j;
            break;
        }
    }
    x = i;
    y = j;*/
    return true;
}
