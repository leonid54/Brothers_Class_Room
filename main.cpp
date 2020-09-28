#include <iostream>
#include "player_random.h"
#include "player_smart.h"
#include "game.h"
using namespace std;

//bool testCreatboardAndShowboard(Game game)
//{
//    game.creatBoard();
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 3; j++)
//        {
//            if (game.getBoard().value[i][j] != '#')
//            {
//                return false;
//            }
//        }
//    }
//    return true;
//}
//bool testMakestepZero(Game game)
//{
//    game.creatBoard();
//    if (game.makeStep<Zero>(rand() % 3, rand() % 3))
//    {
//        return true;
//        game.showBoard();
//    }
//    return false;
// }
//bool testMakestepX(Game game)
//{
//    game.creatBoard();
//    if (game.makeStep<Сross>(rand() % 3, rand() % 3))
//    {
//        return true;
//        game.showBoard();
//    }
//    return false;
//}

int main()
{

   /* cout << testCreatboardAndShowboard(game);
    cout << testMakestepZero(game);
    cout << testMakestepX(game);*/
    setlocale(LC_ALL, "ru");
    string first_player, second_player;
    int count = 0;
    int x, y;
    cout << "Добро пожаловать в игру крестики нолики!" << endl << "Введите имя первого игрока(Нолики,игрок со случайными ходами): ";
    cin >> first_player;
    cout << endl;
    cout << "Введите имя второго игрока(Крестики, думайющий игрок): ";
    cin >> second_player;
    cout << endl << "Начало игры!" << endl;

    RandomPlayer player(first_player);
    SmartPlayer player2(second_player);
    Game game;
    
    game.creatBoard();
    while(!game.PlayBoardIsEnd())
    {
        if ( player2.doStep(x, y, game))
        {
            game.makeStep<Сross>(x, y);
            count++;
            cout << count << " Ход(крестики," << player2.getName() << ")" << endl;
            game.showBoard();
            cout << endl;
        }
        if ( !game.PlayBoardIsEnd() && player.doStep(x, y, game))
        {
            game.makeStep<Zero>(x, y);
            count++;
            cout << count << " Ход(нолики," << player.getName() << ")" << endl;
            game.showBoard();
            cout << endl;
        }
    }

    return 0;
}
