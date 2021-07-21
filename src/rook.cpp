#include <Chess/rook.h>

#include <stdio.h>  // printf

namespace chess
{

Rook::Rook(bool white) : castled(false)
{ 
    this->setWhite(white);
    this->setKilled(false);
    type = 'R';
}

Rook::~Rook() = default;

bool Rook::canMove(Board* board, Spot* start, Spot* end)
{
    printf("Rook's canMove() called.\n");
}

bool Rook::hasCastled() {return castled;}

} // namespace chess
