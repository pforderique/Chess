#ifndef MOVE_H
#define MOVE_H

#include <Chess/piece.h>
#include <Chess/player.h>
#include <Chess/spot.h>

namespace chess
{

class Move
{

public:
    Move(Player player, Spot start, Spot end);

    bool isCastlingMove(); 
    void setCastlinMove(bool castling);

private:
    Player* player;
    Spot* start;
    Spot* end;
    Piece* pieceMoved;
    Piece* pieceKilled;
    bool castlingMove;
};

} // namespace chess

#endif // MOVE_H