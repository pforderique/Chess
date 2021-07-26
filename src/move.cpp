#include <Chess/move.h>

#include <Chess/piece.h>
#include <Chess/player.h>
#include <Chess/spot.h>

namespace chess
{

Move::Move(Player player, Spot start, Spot end) : 
    player(&player), start(&start), end(&end), 
    pieceMoved(start.getPiece()), pieceKilled(nullptr) {}

bool Move::isCastlingMove() {return castlingMove;}

void Move::setCastlinMove(bool castling) {castlingMove = castling;}

Spot* Move::getStart() {return start;}
Spot* Move::getEnd() {return end;}

Piece* Move::getPieceKilled() {return pieceKilled;}
void Move::setPieceKilled(Piece* piece)
{
    end->setPiece(nullptr);
    pieceKilled = piece;
}

} // namespace chess
