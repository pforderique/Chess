#include <Chess/board.h>

#include <stdio.h>  // printf
#include <Chess/pawn.h>

namespace chess
{

Board::Board()
{
    resetBoard();
}

void Board::resetBoard()
{
    // Whites
    grid.push_back(Spot(0, 0, new Pawn(true)));
    grid.push_back(Spot(0, 1, new Pawn(true)));

    // Empty middle spaces
    // for(int i = 16; i < 48; ++i)
    // {
    //     grid.push_back(Spot())
    // }

    // Blacks
    grid.push_back(Spot(1, 0, new Pawn(false)));
    grid.push_back(Spot(1, 1, new Pawn(false)));

}

Spot* Board::getSpotAt(int x, int y)
{
    return &grid.at(x*BOARD_SIZE + y);
}

void Board::printBoard()
{
    int curr = 0;
    printf("\n====== GAME BOARD ======\n");
    for(int row = 0; row < BOARD_SIZE; ++row)
    {
        printf("||");
        for(int col = 0; col < BOARD_SIZE; ++col)
        {
            Spot curr_spot = *getSpotAt(row, col);
            char piece_type = curr_spot.getPiece()->getType();
            bool white_piece = curr_spot.getPiece()->isWhite();

            switch (piece_type)
            {
            case NULL: printf("0");
                break;
            case 'P': (white_piece) ? printf("P") : printf("p");
                break;
            case 'R': (white_piece) ? printf("R") : printf("r");
                break;
            case 'N': (white_piece) ? printf("N") : printf("n");
                break;
            case 'B': (white_piece) ? printf("B") : printf("b");
                break;
            case 'Q': (white_piece) ? printf("Q") : printf("q");
                break;
            case 'K': (white_piece) ? printf("K") : printf("k");
                break;
            default:
                throw "NotImplementedError";
            }
        }
        printf("||\n");
    }
}

} // namespace chess
