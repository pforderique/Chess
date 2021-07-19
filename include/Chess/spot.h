/**
 * Spot class represents a spot on the chessboard
 **/

#ifndef SPOT_H
#define SPOT_H

#include <Chess/piece.h>

namespace chess 
{

class Piece;

class Spot
{
private:
    int x;
    int y;
    Piece* piece;

public:
    Spot(int x, int y, Piece* piece = nullptr);

    Piece* getPiece();
    int getX();
    int getY();
    void setX(int x);
    void setY(int y);
};

} // namespace chess

#endif // SPOT_H