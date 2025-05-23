#include <stdio.h>
#include "macros.h"
#include "./utils/utils.h"

//game of life
int main(int argc, char ** argv){
    
    int board[BOARD_SIZE][BOARD_SIZE];

    initBoard(board);

    printBoard(board);


    return 0;
}