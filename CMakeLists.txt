cmake_minimum_required( VERSION 3.0 )

# project name
project( Chess )

# include files
include_directories( ./include ./src )

# target
add_executable( chess_game 
    ./src/main.cpp 
    ./src/spot.cpp 
    ./src/piece.cpp
    ./src/pawn.cpp
    ./src/rook.cpp
    ./src/knight.cpp
    ./src/bishop.cpp
    ./src/queen.cpp
    ./src/king.cpp
    ./src/board.cpp
)
