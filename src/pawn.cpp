#include <Chess/pawn.h>

#include <iostream>

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
    std::cout << "Pawn's canMove() called." << std::endl;
}

bool Pawn::hasMoved() {return this->moved;}

} // namespace chess
