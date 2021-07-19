#include <Chess/spot.h>

namespace chess
{

Spot::Spot(int x, int y, Piece *piece ) :
    x(x), y(y), piece(piece) {};

int Spot::getX() {return this->x;}
int Spot::getY() {return this->y;}
void Spot::setX(int x) {this->x = x;}
void Spot::setY(int y) {this->y = y;}

} // namespace chess
