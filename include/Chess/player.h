#ifndef PLAYER_H
#define PLAYER_H

namespace chess
{

class Player
{
public:
    Player(bool white);

    bool isWhitePlayer(); 
    void printPlayer();

private:
    int white;
};

} // namespace chess

#endif // PLAYER_H