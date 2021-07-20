/**
 * Piece class defines a standard implementation 
 * for all chess pieces
 * 
 **/

#ifndef PIECE_H
#define PIECE_H

#include <string>

#include <Chess/board.h>
#include <Chess/spot.h>

namespace chess
{

class Board;
class Spot;

class Piece
{
public:
    virtual bool canMove(Board* board, Spot* start, Spot* end) = 0;
    virtual std::string toString() = 0;

    bool isWhite();
    void setWhite(bool white);
    bool isKilled();
    void setKilled(bool killed);
    char getType();

protected:
    bool white;  // white or black
    bool killed; 
    char type;  // (P)awn (R)ook k(N)ight (B)ishop (Q)ueen (K)ing 
};

} // namespace chess

#endif // PIECE_H