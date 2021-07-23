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
#include <Chess/chess_pieces.h>
#include <Chess/move.h>
#include <Chess/player.h>
#include <Chess/spot.h>

void needPiece(chess::Piece* piece) 
{
    piece->canMove(nullptr, nullptr, nullptr);
}

int main() {

    std::cout << "===== CHESS GAME STARTED =====" << std::endl;

    chess::Board board;
    printf("Spot at 0,1 is a %c\n", 
            board.getSpotAt(0,1)->getPiece()->getType());
    printf("Spot at 1,1 is white? Ans = %d\n",
            board.getSpotAt(1,1)->getPiece()->isWhite());

    chess::Player player1(true);
    player1.printPlayer();

    chess::Pawn pawn(true);
    chess::Rook rook(false);
    chess::Knight knight(true);
    chess::Bishop bishop(true);
    chess::Queen queen(true);
    chess::King king(false);

    needPiece(&pawn);
    needPiece(&rook);
    needPiece(&knight);
    needPiece(&bishop);
    needPiece(&queen);
    needPiece(&king);

    board.printBoard();

    return 0;
}