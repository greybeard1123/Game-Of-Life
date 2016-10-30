//Contains information about the state of the cell and it's live neighbour count
class Cell
{
	bool state;
	int liveNeighbours;

public:
	Cell();

	void setState(bool s);
	bool getState();

	int getLiveNeighbours();
	void incrementLiveNeighbours();
};
