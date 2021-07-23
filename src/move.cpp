#include <Chess/move.h>

#include <Chess/piece.h>
#include <Chess/player.h>
#include <Chess/spot.h>

namespace chess
{

Move::Move(Player player, Spot start, Spot end) : 
    player(&player), start(&start), end(&end) {}

bool Move::isCastlingMove() {return castlingMove;}

void Move::setCastlinMove(bool castling) {castlingMove = castling;}

} // namespace chess
