/**
 * Chess Game
 * By: Piero Orderique
 * 
 * A simple text-based chess game for 2 players.
 *
**/

#include <iostream>
#include <stdio.h>  // printf
#include <Chess/spot.h>
#include <Chess/pawn.h>

void needPiece(chess::Piece* piece) 
{
    piece->canMove(nullptr, nullptr, nullptr);
}

int main() {

    std::cout << "=== CHESS GAME STARTED! ===" << std::endl;

    chess::Spot mySpot(0,2);
    printf("mySpot's pos = (%d, %d)", mySpot.getX(), mySpot.getY());

    chess::Pawn pawn(true);
    
    return 0;
}