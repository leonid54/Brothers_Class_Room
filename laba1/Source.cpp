#include <iostream>
#include "player1.h"
#include "player2.h"
#include "game.h"
#include <vector>
int main()
{
    setlocale(LC_ALL, "ru");
    const int LENGTH = 3;
    Game a;
    SmartPlayer b("Ivan", 1, 2);
    RandomPlayer c("Bogdan", rand() % 3, rand() % 3);
    int arr[LENGTH][LENGTH];
    a.MakeStep();
    return 0;
}
