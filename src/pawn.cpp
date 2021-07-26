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
    // Pawn may only move forward
    if (start->getY() != end->getY()) {return false;}
    
    int dist = end->getX() - start->getX();

    // Check correct direction
    // Pawn may only move DOWN if white (so positive dist)
    if (white && dist < 0) {return false;}
    if (!white && dist > 0) {return false;}

    dist = abs(dist);

    // Pawn may only move 2 spots on first move
    if (dist == 2) {return !moved;}
    
    // Only last valid move if it moved only one spot
    return dist == 1;
}

bool Pawn::hasMoved() {return moved;}

} // namespace chess
