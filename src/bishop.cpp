#include <Chess/bishop.h>

#include <stdio.h>  // printf

namespace chess
{

Bishop::Bishop(bool white)
{ 
    this->setWhite(white);
    this->setKilled(false);
    type = 'B';
}

Bishop::~Bishop() = default;

bool Bishop::canMove(Board* board, Spot* start, Spot* end)
{
    printf("Bishop's canMove() called.\n");
}

} // namespace chess
