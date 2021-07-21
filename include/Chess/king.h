#ifndef KING_H
#define KING_H

#include <Chess/piece.h>

#include <Chess/board.h>
#include <Chess/spot.h>

namespace chess
{

class King : public Piece 
{
public:
    King(bool white);
    ~King();

    bool canMove(Board* board, Spot* start, Spot* end) override;
};

} // namespace chess

#endif // KING_H