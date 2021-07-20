/**
 * Chess Game
 * By: Piero Orderique
 * 
 * A simple text-based chess game for 2 players.
 *
**/

#include <iostream>
#include <stdio.h>  // printf

#include <Chess/board.h>
#include <Chess/pawn.h>
#include <Chess/spot.h>

void needPiece(chess::Piece* piece) 
{
    piece->canMove(nullptr, nullptr, nullptr);
}

int main() {

    std::cout << "=== CHESS GAME STARTED! ===" << std::endl;

    chess::Board board;
    printf("Spot at 0,1 is a %c\n", board.getSpotAt(0,1)->getPiece()->getType());

    chess::Pawn pawn(true);

    chess::Spot mySpot(0,2,&pawn);
    printf("mySpot's pos = (%d, %d)", mySpot.getX(), mySpot.getY());
    
    return 0;
}