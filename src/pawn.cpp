#include <Chess/pawn.h>

#include <stdio.h>  // printf

namespace chess
{

Pawn::Pawn(bool white) : moved(false)
{ 
    this->setWhite(white);
    this->setKilled(false);
    type = 'P';
}

Pawn::~Pawn() = default;

bool Pawn::canMove(Board* board, Spot* start, Spot* end)
{
    // Pawn may only move 2 spots on first move
    printf("Pawn's canMove() called.\n");
}

bool Pawn::hasMoved() {return moved;}

} // namespace chess
