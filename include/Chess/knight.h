#ifndef KNIGHT_H
#define KNIGHT_H

#include <Chess/piece.h>

#include <Chess/board.h>
#include <Chess/spot.h>

namespace chess
{

class Knight : public Piece 
{
public:
    Knight(bool white);
    ~Knight();

    bool canMove(Board* board, Spot* start, Spot* end) override;
};

} // namespace chess

#endif // KNIGHT_H