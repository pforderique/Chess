#include <Chess/board.h>

#include <stdexcept>
#include <stdio.h>  // printf

#include <Chess/chess_pieces.h>

namespace chess
{

Board::Board()
{
    resetBoard();
}

void Board::resetBoard()
{
    // White Pieces (back row)
    grid.push_back(Spot(0, 0, new Rook(true)));
    grid.push_back(Spot(0, 1, new Knight(true)));
    grid.push_back(Spot(0, 2, new Bishop(true)));
    grid.push_back(Spot(0, 3, new King(true)));
    grid.push_back(Spot(0, 4, new Queen(true)));
    grid.push_back(Spot(0, 5, new Bishop(true)));
    grid.push_back(Spot(0, 6, new Knight(true)));
    grid.push_back(Spot(0, 7, new Rook(true)));
    // White Pieces (front row pawns)
    for(int col = 0; col < BOARD_SIZE; ++col)
    {
        grid.push_back(Spot(1, col, new Pawn(true)));
    }

    // Empty middle spaces
    for(int row = 2; row < 6; ++row)
    {
        for(int col = 0; col < BOARD_SIZE; ++col)
        {
            grid.push_back(Spot(row, col, NULL));
        }
    }
    
    // Black Pieces (front row pawns)
    for(int col = 0; col < BOARD_SIZE; ++col)
    {
        grid.push_back(Spot(BOARD_SIZE - 2, col, new Pawn(false)));
    }
    // Black Pieces (back row)
    grid.push_back(Spot(BOARD_SIZE - 1, 0, new Rook(false)));
    grid.push_back(Spot(BOARD_SIZE - 1, 1, new Knight(false)));
    grid.push_back(Spot(BOARD_SIZE - 1, 2, new Bishop(false)));
    grid.push_back(Spot(BOARD_SIZE - 1, 3, new King(false)));
    grid.push_back(Spot(BOARD_SIZE - 1, 4, new Queen(false)));
    grid.push_back(Spot(BOARD_SIZE - 1, 5, new Bishop(false)));
    grid.push_back(Spot(BOARD_SIZE - 1, 6, new Knight(false)));
    grid.push_back(Spot(BOARD_SIZE - 1, 7, new Rook(false)));
}

Spot* Board::getSpotAt(int x, int y)
{
    if (x < 0 || x >= BOARD_SIZE || y < 0 || y >= BOARD_SIZE) 
    {
        throw std::invalid_argument("x and/or y not valid");
    }
    return &grid.at(x*BOARD_SIZE + y);
}

void Board::printBoard()
{
    int curr = 0;
    printf("\n==== CHESS BOARD ====\n");
    for(int row = 0; row < BOARD_SIZE; ++row)
    {
        printf("||");
        for(int col = 0; col < BOARD_SIZE; ++col)
        {
            Spot curr_spot = *getSpotAt(row, col);

            if(curr_spot.getPiece() == nullptr)
            {
                printf(" 0");
                continue;
            }
            char piece_type = curr_spot.getPiece()->getType();
            bool white_piece = curr_spot.getPiece()->isWhite();

            switch (piece_type)
            {
            case 'P': (white_piece) ? printf(" P") : printf(" p");
                break;  
            case 'R': (white_piece) ? printf(" R") : printf(" r");
                break;  
            case 'N': (white_piece) ? printf(" N") : printf(" n");
                break;  
            case 'B': (white_piece) ? printf(" B") : printf(" b");
                break;  
            case 'Q': (white_piece) ? printf(" Q") : printf(" q");
                break;  
            case 'K': (white_piece) ? printf(" K") : printf(" k");
                break;
            default:
                printf("NotImplementedError");
            }
        }
        printf(" ||\n");
    }
    printf("=====================\n");
}

} // namespace chess
