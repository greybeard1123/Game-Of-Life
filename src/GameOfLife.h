#include<iostream>
#include "cell.h"

class GameOfLife
{
private:
	int rows;
	int cols;
	Cell **cell;

public:
	GameOfLife(int r, int c);

	void readInitialState();

	bool ifRowExists(int row);

	bool ifColExists(int col);

	void findNeighbours();

	void generateNextState();

	void printState();

};