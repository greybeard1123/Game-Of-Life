#include<iostream>
#include "GameOfLife.h"
using namespace std;


int main()
{
	int row, col;
	cin >> row >> col;		//Read initial state's dimensions

	GameOfLife gol(row, col);
	gol.readInitialState();
	gol.generateNextState();
	gol.printState();

	return 0;
}
