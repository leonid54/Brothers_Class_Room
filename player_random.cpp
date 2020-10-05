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
<<<<<<< HEAD
    srand(time(NULL));
    do
    {
=======
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
        
>>>>>>> 221d0a9efbfbb5927d8fc82df5fe64e829de3bf9
        int i = rand() % 3;
        int j = rand() % 3;
        if (game.getBoard().value[i][j] == '#' && game.getBoard().value[i][j] != 'x')
        {
            x = i;
            y = j;
            break;
        }
    } while (true);
<<<<<<< HEAD

=======
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
>>>>>>> 221d0a9efbfbb5927d8fc82df5fe64e829de3bf9
    return true;
}
