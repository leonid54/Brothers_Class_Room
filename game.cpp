#include <string>
#include <iostream>
#include "game.h"

using namespace std;


Game::Game()
{
}
void Game::creatBoard()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j= 0; j < 3; j++)
		{
			board.value[i][j] = '#';
		}
	}
}

void Game::showBoard()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << board.value[i][j];
		}
		cout << endl;
	}
	
}

bool Game::isBoardFilled()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (board.value[i][j] == 'x' )
			{
				return false;
			}
		}
	}
	return true;
}

Board& Game::getBoard()
{
	return board;
}



//�������� ���� �� ���������
bool Game::PlayBoardIsEnd()
{
	for (int i = 0; i < 3; i++)
	{
		//���� ���� ���� ����� �������� ������ ���������� ��� ��������
		if ((board.value[i][0] == board.value[i][1]) && (board.value[i][0] == board.value[i][2]) && (board.value[i][0] != '#'))
		{
			if (board.value[i][0] == 'x')
			{
				cout << "�������� ��������!" << endl;
			}
			else
			{
				cout << "�������� ������! " << endl;
			}
			return true;
		}
		//���� ���� ���� ����� �������� ������� ���������� ��� ��������

		if ((board.value[0][i] == board.value[1][i]) && (board.value[0][i] == board.value[2][i]) && (board.value[0][i] != '#'))

		{

			if (board.value[0][i] == 'x')
			{
				cout << "�������� ��������!" << endl;
			}
			else
			{
				cout << "�������� ������! " << endl;
			}
			return true;
		}
	}

	//���� ��������� ������� ���������

	if ((board.value[0][0] == board.value[1][1]) && (board.value[0][0] == board.value[2][2]) && (board.value[0][0] != '#'))

	{
		if (board.value[0][0] == 'x')
		{
			cout << "�������� ��������!" << endl;
		}
		else
		{
			cout << "�������� ������! " << endl;
		}
		return true;

	}

	//���� ��������� �������� ���������

	if ((board.value[0][2] == board.value[1][1]) && (board.value[0][2] == board.value[2][0]) && (board.value[0][2] != '#'))

	{

		if (board.value[0][2] == 'x')
		{
			cout << "�������� ��������!" << endl;
		}
		else
		{
			cout << "�������� ������! " << endl;
		}
		return true;
	}

	//���� ��������� ��� ������, �� ����� �� �������

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (board.value[i][j] == '#')
			{
				return false;
			}
		}
	}
	cout << "�����!" << endl;

	return true;
}

