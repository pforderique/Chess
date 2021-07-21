#ifndef BISHOP_H
#define BISHOP_H

#include <Chess/piece.h>

#include <Chess/board.h>
#include <Chess/spot.h>

namespace chess
{

class Bishop : public Piece 
{
public:
    Bishop(bool white);
    ~Bishop();

    bool canMove(Board* board, Spot* start, Spot* end) override;
};

} // namespace chess

#endif // KNIGHT_H