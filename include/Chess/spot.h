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
public:
    Spot(int x, int y, Piece* piece);

    Piece* getPiece();
    void setPiece(Piece* piece);
    int getX();
    int getY();
    void setX(int x);
    void setY(int y);

private:
    int x;
    int y;
    Piece* piece;
};

} // namespace chess

#endif // SPOT_H