#include<iostream>
#include "cell.h"

class GameOfLife
{
private:
	int rows;
	int cols;
	Cell **cell;

public:
	GameOfLife(int, int);

	void readInitialState();

	bool ifRowExists(int);

	bool ifColExists(int);

	void findNeighbours();

	void generateNextState();

	void printState();

};
