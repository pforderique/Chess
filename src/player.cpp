#include <Chess/player.h>

#include <stdio.h>  // printf

namespace chess
{
Player::Player(bool white) : white(white) {}

bool Player::isWhitePlayer() {return white;}

void Player::printPlayer()
{
    (white) ? printf("Player White\n") : printf("Player Black\n");
}
} // namespace chess
