#include <Chess/king.h>

#include <stdio.h>  // printf

namespace chess
{

King::King(bool white)
{ 
    this->setWhite(white);
    this->setKilled(false);
    type = 'K';
}

King::~King() = default;

bool King::canMove(Board* board, Spot* start, Spot* end)
{
    printf("King's canMove() called.\n");
}

} // namespace chess
