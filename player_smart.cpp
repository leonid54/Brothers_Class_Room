#include <string>
#include <iostream>
#include "player_smart.h"
#include "game.h"

SmartPlayer::SmartPlayer(string name)
{
	m_name = name;
}
string SmartPlayer::getName()
{
	return m_name;
}
bool SmartPlayer::doStep(int& x, int& y, Game& game)
{
	int count = 0;
   /* if (game.isBoardFilled())
    {
        return false;
    }*/
	
	//подсчитываем количество крестиков в каждой строке
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			if (game.getBoard().value[x][y] == 'x')
			{
				count++;
			}
		}
	}
	//если встречено два крестика
	if (count == 2)
	{
		do
		{
			for (int y = 0; y < 3; y++)
			{
				if (game.getBoard().value[x][y] == '#')
				{
					this->y = y;
					break;
				}
			}
		} while (count == 5);
	}
	count = 0;

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (game.getBoard().value[x][y] == 'x')
			{
				count++;
			}
		}
	}
	//если встречено два крестика
	if (count == 2)
	{
		do
		{
			for (int x = 0; x < 3; x++)
			{
				if (game.getBoard().value[x][y] == '#')
				{
					this->x = x;
					break;
				}
			}
		} while (count == 5);
	}
	count = 0;

		for (int x = 0; x < 3; x++)
		{
			y = x;
			if (game.getBoard().value[x][y] == 'x')
			{
				count++;
			}
		}
	//если встречено два крестика
	if (count == 2)
	{
		do
		{
			for (int x = 0; x < 3; x++)
			{
				if (game.getBoard().value[x][y] == '#')
				{
					this->x = x;
					break;
				}
			}
		} while (count == 5);
	}
	count = 0;
	for (int x = 0; x < 3; x++)
	{
		for (int y = 2;y > 0;y--)
		{
			if (game.getBoard().value[x][y] == 'x')
			{
				count++;
			}
		}

	}
	if (count == 2)
	{
	do
	 {
	for (int x = 0; x < 3; x++)
	  {
		for (int y = 2; y > 0; y--)
		{
		  if (game.getBoard().value[x][y] == '#')
		  {
			  this->x = x;
			  this->y = y;
			break;
		  }
		}
	  }
	 }
	while (count == 5);
    }
	count = 0;
	if (count == 0)
	{
		do
		{
			srand(time(NULL));
			x = rand() % 3;
			y = rand() % 3;
			if (game.getBoard().value[x][y] == '#')
			{
				break;
			}
		}
		while (true);
	}


    return true;
}

  