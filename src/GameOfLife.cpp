#include"GameOfLife.h"

GameOfLife::GameOfLife(int r, int c)
{
	rows = r;
	cols = c;

	/* prepare the matrix of rows+2 and cols+2 size,
	so as to ensure each element of the initial state
	has a neighbor for us to check with */
	cell = new Cell*[rows + 2];
	for (int i = 0; i < rows + 2; i++)
		cell[i] = new Cell[cols + 2];

}

void GameOfLife::readInitialState()
{
	for (int i = 1; i < rows + 1; i++)
	for (int j = 1; j < cols + 1; j++)
	{
		char inp;
		std::cin >> inp;
		if (inp == 'X'){
			cell[i][j].setState(1);
		}
		else if (inp == 'O'){
			cell[i][j].setState(0);
		}
	}

}

bool GameOfLife::ifRowExists(int row)
{
	if (row == -1 || row == rows + 2)
		return false;
	else
		return true;
}

bool GameOfLife::ifColExists(int col)
{
	if (col == -1 || col == cols + 2)
		return false;
	else
		return true;
}

void GameOfLife::findNeighbours()
{
	for (int i = 0; i < rows + 2; i++)
	for (int j = 0; j < cols + 2; j++)
	{
		for(int di = -1; di <= 1; di++)
		for(int dj = -1; dj <= 1; dj++)
		{
			if(di == 0 && dj == 0) 
				continue;
			else
			{
				if(ifRowExists(i + di) && ifColExists(j + dj) && cell[i + di][j + dj].getState() == 1)
					cell[i][j].incrementLiveNeighbours();
			}
		}
	}
}

void GameOfLife::generateNextState()
{
	//First, find all the neighbours of each cell
	findNeighbours();

	//NEXT STATE GENERATION
	for (int i = 0; i < rows + 2; i++)
	for (int j = 0; j < cols + 2; j++)
	{
		//Rule 1: Any live cell with fewer than two live neighbours dies, as if by loneliness.
		if (cell[i][j].getLiveNeighbours() < 2)
			cell[i][j].setState(0);

		//Rule 2: Any live cell with more than three live neighbours dies, as if by overcrowding.
		if (cell[i][j].getLiveNeighbours() > 3)
			cell[i][j].setState(0);

		//Rule 3: Any live cell with two or three live neighbours lives, unchanged, to the next generation.

		//Rule 4: Any dead cell with exactly three live neighbours comes to life.
		if (cell[i][j].getState() == 0 && cell[i][j].getLiveNeighbours() == 3)
			cell[i][j].setState(1);
	}
}

void GameOfLife::printState()
{
	std::cout << std::endl << std::endl << "OUTPUT :" << std::endl << std::endl;
	for (int i = 0; i < rows + 2; i++)
	{
		for (int j = 0; j < cols + 2; j++)
		{
			if (cell[i][j].getState())
				std::cout << "X ";
			else
				std::cout << "O ";
		}
		std::cout << std::endl;
	}
}
