#include "utils.h"

void initBoard(int ** board){
    for(int i = 0; i < BOARD_SIZE; i++){
        for(int j = 0; j < BOARD_SIZE; j++){
            board[i][j] = DEAD;
        }
    }
}


void printBoard(const int **board){
    for(int i = 0; i < BOARD_SIZE; i++){
        for(int j = 0; j < BOARD_SIZE; j++){
            printf("%d", board[i][j]);
        }
        printf("\n");
    }
}