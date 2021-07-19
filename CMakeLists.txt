cmake_minimum_required( VERSION 3.0 )

# project name
project( Chess )

# include files
include_directories( ./include ./src )

# target
add_executable( binary 
    ./src/main.cpp 
    ./src/spot.cpp 
    ./src/pawn.cpp 
)
