#ifndef GAME_H
#define GAME_H

#include <vector>

#include <Chess/board.h>
#include <Chess/move.h>
#include <Chess/player.h>

namespace chess
{

enum GameStatus 
{
    ACTIVE,
    BLACK_WIN,
    WHITE_WIN,
    FORFEIT,
    STALEMATE,
    RESIGNATION
};

class Game
{

public:

    bool isEnd();
    GameStatus getStatus();
    void setStatus(GameStatus status);
    bool playerMove(
        Player player, 
        int startX, int startY, int endX, int endY);

private:
    std::vector<Player> players;  
    Board* board;
    Player* currentTurn;
    GameStatus status;
    std::vector<Move> movesPlayed;

    void initialize(Player p1, Player p2);
    bool makeMove(Move move, Player player);
};

} // namespace chess

#endif // GAME_H