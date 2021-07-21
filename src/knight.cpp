#include <Chess/knight.h>

#include <stdio.h>  // printf

namespace chess
{

Knight::Knight(bool white)
{ 
    this->setWhite(white);
    this->setKilled(false);
    type = 'N';
}

Knight::~Knight() = default;

bool Knight::canMove(Board* board, Spot* start, Spot* end)
{
    printf("Knight's canMove() called.\n");
}

} // namespace chess
