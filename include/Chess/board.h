#ifndef BOARD_H
#define BOARD_H

#include <vector>

#include <Chess/spot.h>

namespace chess
{

class Spot;

class Board
{
public:
    Board();

    void resetBoard();
    Spot* getSpotAt(int x, int y);
    void printBoard();

private:
    const int BOARD_SIZE = 8;   

    // 2D grid of Spots mimiced as 1D 
    // [white*8*2, empty*8*4, black*8*2]
    std::vector<Spot> grid;  
};

} // namespace chess

#endif // BOARD_H