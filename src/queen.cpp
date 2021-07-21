#include <Chess/queen.h>

#include <stdio.h>  // printf

namespace chess
{

Queen::Queen(bool white)
{ 
    this->setWhite(white);
    this->setKilled(false);
    type = 'Q';
}

Queen::~Queen() = default;

bool Queen::canMove(Board* board, Spot* start, Spot* end)
{
    printf("Queen's canMove() called.\n");
}

} // namespace chess
