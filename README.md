# Game-Of-Life
Simple C++ implementation of the Game of Life problem.

##Problem Statement
The universe of the Game of Life is an infinite two-dimensional orthogonal grid of square cells, each of which is in one of two possible states, live or dead. Every cell interacts with its eight neighbours, which are the cells that are directly horizontally, vertically, or diagonally adjacent. 


##Rules
At each step in time, the following transitions occur:

1. Any live cell with fewer than two live neighbours dies, as if by loneliness.
2. Any live cell with more than three live neighbours dies, as if by overcrowding.
3. Any live cell with two or three live neighbours lives, unchanged, to the next generation.
4. Any dead cell with exactly three live neighbours comes to life.


##Running the project
* Compile and build the project
* Run `Source.cpp`
* Enter the dimensions of the seed (initial state)
* Enter the initial state with 'X's and 'O's only


##Example
* Run `Source.cpp`
```
2 4
O X X X
X X X O


OUTPUT :

O O O X O O
O X O O X O
O X O O X O
O O X O O O
```
 
