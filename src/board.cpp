#include <Chess/board.h>

#include <Chess/pawn.h>

namespace chess
{

Board::Board()
{
    resetBoard();
}

void Board::resetBoard()
{
    // Whites
    grid.push_back(Spot(0, 0, new Pawn(true)));
    grid.push_back(Spot(0, 1, new Pawn(true)));

    // Empty middle spaces
    // for(int i = 16; i < 48; ++i)
    // {
    //     grid.push_back(Spot())
    // }

    // Blacks
    grid.push_back(Spot(1, 0, new Pawn(false)));
    grid.push_back(Spot(1, 1, new Pawn(false)));

}

Spot* Board::getSpotAt(int x, int y)
{
    return &grid.at(x*BOARD_SIZE + y);
}


} // namespace chess
