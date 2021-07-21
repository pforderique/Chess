#ifndef QUEEN_H
#define QUEEN_H

#include <Chess/piece.h>

#include <Chess/board.h>
#include <Chess/spot.h>

namespace chess
{

class Queen : public Piece 
{
public:
    Queen(bool white);
    ~Queen();

    bool canMove(Board* board, Spot* start, Spot* end) override;
};

} // namespace chess

#endif // QUEEN_H