#include <Chess/game.h>

#include <stdio.h>  // printf

#include <Chess/piece.h>
#include <Chess/spot.h>

namespace chess
{
bool Game::isEnd()
{
    return status != ACTIVE;
}
GameStatus Game::getStatus()
{
    return status;
}
void Game::setStatus(GameStatus status)
{
    this->status = status;
}
bool Game::playerMove(
    Player player, int startX, int startY, int endX, int endY)
{
    Spot startSpot = *board->getSpotAt(startX, startY);
    Spot endSpot = *board->getSpotAt(endX, endY);

    Move move(player, startSpot, endSpot);
    
    return makeMove(move, player);
}

void Game::initialize(Player p1, Player p2)
{
    players.push_back(p1);
    players.push_back(p2);

    board->resetBoard();

    if (p1.isWhitePlayer()) {currentTurn = &p1;} 
    else {currentTurn = &p2;}

    movesPlayed.clear();        
}

bool Game::makeMove(Move move, Player player)
{
    Piece* sourcePiece = move.getStart()->getPiece();

    if (sourcePiece == nullptr) {return false;}
    
    // check if valid player
    if (&player != currentTurn) {return false;}
    if (sourcePiece->isWhite() != player.isWhitePlayer()) {return false;}

    // check if move is valid
    if (!sourcePiece->canMove(board, move.getStart(), move.getEnd()))
    {
        return false;
    }

    // killed the other's King? or other pieces?
    Piece* destPiece = move.getEnd()->getPiece();

    if (destPiece != nullptr)
    {
        char pieceTypeThere = destPiece->getType();

        destPiece->setKilled(true);
        move.setPieceKilled(destPiece);

        if (player.isWhitePlayer() && pieceTypeThere == 'k') 
        {
            status = WHITE_WIN;
            return true;
        }
        if (!player.isWhitePlayer() && pieceTypeThere == 'K')
        {
            status = BLACK_WIN;
            return true;
        }
    }

    // is it a castling move?
    if (sourcePiece != nullptr && (
        sourcePiece->getType() == 'k' || 
        sourcePiece->getType() == 'K'))
    {
        move.setCastlinMove(true);
    }

    // store the move!
    movesPlayed.push_back(move);

    // actually move the piece now
    move.getEnd()->setPiece(move.getStart()->getPiece());
    move.getStart()->setPiece(nullptr);

    // set current turn to next player
    if (currentTurn == &players.at(0))
    {
        currentTurn = &players.at(1);
    }
    else
    {
        currentTurn = &players.at(0);
    }
    
    return true;
}

} // namespace chess
