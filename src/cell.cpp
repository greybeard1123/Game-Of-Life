#include "cell.h"

Cell::Cell()
{
	state = 0;
	liveNeighbours = 0;
}

void Cell::setState(bool s)
{
	state = s;
}

bool Cell::getState()
{
	return state;
}

int Cell::getLiveNeighbours()
{
	return liveNeighbours;
}

void Cell::incrementLiveNeighbours()
{
	liveNeighbours++;
}