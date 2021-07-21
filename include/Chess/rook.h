#ifndef ROOK_H
#define ROOK_H

#include <Chess/piece.h>

#include <Chess/board.h>
#include <Chess/spot.h>

namespace chess
{

class Rook : public Piece 
{
public:
    Rook(bool white);
    ~Rook();

    bool canMove(Board* board, Spot* start, Spot* end) override;
    bool hasCastled();

private:
    bool castled;
};

} // namespace chess

#endif // ROOK_H