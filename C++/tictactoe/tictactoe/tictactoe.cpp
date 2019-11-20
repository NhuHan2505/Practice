// tictactoe.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
string name1 = "";
string name2 = "";
bool draw;
int row, column, player, choice, choose;
char square[3][3] = { {'11','12','13'},{ '21','22','23' },{'31','32','33'} };

bool gameOver() 
{
	//check win for row and column
	for (int i = 0; i < 3; i++)
	{
		if (square[i][0] == square[i][1] && square[i][1] == square[i][2] ||
			square[0][i] == square[1][i] && square[1][i] == square[2][i])
			return false;
	}

	//check win for cross
	if (square[0][0] == square[1][1] && square[1][1] == square[2][2] || square[0][2] == square[1][1] && square[1][1] == square[2][0])
		return false;

	//check game is in continue or not
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < i; j++)
			if (square[i][j] != 'X' && square[i][j] != 'O') return true;
	
	//check draw
	draw = true;
	return false;
}
void display()
{
	system("cls");
	cout << "\n\n\tTic Tac Toe\n\n";

	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << square[0][0] << "  |  " << square[0][1] << "  |  " << square[0][2] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[1][0] << "  |  " << square[1][1] << "  |  " << square[1][2] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[2][0] << "  |  " << square[2][1] << "  |  " << square[2][2] << endl;

	cout << "     |     |     " << endl << endl;
}
void mark() 
{
	if (player == 1)
	{
		cout << "Your turn (X): "; cin >> choice;
	}
	else 
	{
		cout << "Your turn (O): "; cin >> choice;
	}
	switch (choice)
	{
	case 11: row = 0; column = 0; break;
	case 12: row = 1; column = 1; break;
	case 13: row = 2; column = 2; break;
	case 21: row = 0; column = 0; break;
	case 22: row = 1; column = 1; break;
	case 23: row = 2; column = 2; break;
	case 31: row = 0; column = 0; break;
	case 32: row = 1; column = 1; break;
	case 33: row = 2; column = 2; break;
	default:
		cout << "Invalid move!!!";
		break;
	}
	if (player == 1 && square[row][column] != 'X' && square[row][column] != 'O')
	{
		square[row][column] = 'X';
		player = 2;
	}
	else
		if (player ==2 && square[row][column] != 'X' && square[row][column] != 'O')
		{
			square[row][column] = 'O';
			player = 2;
		}
		else
		{
			cout << "Square already filled\n Please choose other one!!!\n";
			mark();
		}
	display();
}
int main()
{
	cout << "Welcome to Tic-Tac-Toe game! Play with your way\n If you find any problem, please contact john.nguyen@gameloft.com";
	cout << "Select your mode (1- PLAY GAME, OTHERS - EXIT GAME): ";
	cin >> choose;
	if (choose != 1) exit(0);
	cout << "Enter player 1 name: "; cin >> name1;
	cout << "Enter player 2 name: "; cin >> name2;
	while (gameOver())
	{
		display();
		mark;
		gameOver();
	}
	if (player == 1 && draw == false)
		cout << "\n The WINNER is " << name1 << "\n Congraturation";
	else
		if (player == 2 && draw == false)
			cout << "\n The WINNER is " << name2 << "\n Congraturation";
		else
			cout << "\nThe game is DRAW";
	system("pause");
	return 0;
}

