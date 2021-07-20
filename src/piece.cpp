#include <Chess/piece.h>

namespace chess
{
bool Piece::isWhite() {return this->white;}
void Piece::setWhite(bool white) {this->white = white;}
bool Piece::isKilled() {return this->killed;}
void Piece::setKilled(bool killed) {this->killed = killed;}
char Piece::getType() {return this->type;}

} // namespace chess
