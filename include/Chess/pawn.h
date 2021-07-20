#ifndef PAWN_H
#define PAWN_H

#include <Chess/piece.h>

#include <Chess/board.h>
#include <Chess/spot.h>

namespace chess
{

class Pawn : public Piece 
{
public:
    Pawn(bool white);
    ~Pawn();

    bool canMove(Board* board, Spot* start, Spot* end) override;
    std::string toString() override;
    bool hasMoved();

private:
    bool moved;
};

} // namespace chess

#endif // PAWN_H