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
#include <Chess/rook.h>
#include <Chess/spot.h>

void needPiece(chess::Piece* piece) 
{
    piece->canMove(NULL, NULL, NULL);
}

int main() {

    std::cout << "===== CHESS GAME STARTED =====" << std::endl;

    chess::Board board;
    printf("Spot at 0,1 is a %c\n", 
            board.getSpotAt(0,1)->getPiece()->getType());
    printf("Spot at 1,1 is white? Ans = %d\n",
            board.getSpotAt(1,1)->getPiece()->isWhite());

    chess::Pawn pawn(true);
    chess::Rook rook(false);
    needPiece(&pawn);
    needPiece(&rook);
    
    board.printBoard();

    return 0;
}