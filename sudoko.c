#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>


bool isValidSudoku(char** board, int boardSize, int* boardColSize) {
    int i,j,k,l;
    int row[9][9] = {0};

    int col[9][9] = {0};

    int block[9][9] = {0};

    for(i=0;i<9;i++){

        for(j=0;j<9;j++){
            if(board[i][j]!='.'){

                k=board[i][j]-'1';
                row[i][k]++;
                col[j][k]++;
                block[i/3*3+j/3][k]++;

                if(row[i][k]>1||col[j][k]>1||block[i/3*3+j/3][k]>1)
                    return false;
            }
        }
    }
    return true;
}

int main() {
    int boardSize = 9;
    int boardColSize = 9;

    char** board = (char**)malloc(boardSize * sizeof(char*));
    for (int i = 0; i < boardSize; ++i) {
        board[i] = (char*)malloc(boardColSize * sizeof(char));
    }

    char initialBoard[9][9] = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };

    for (int i = 0; i < boardSize; ++i) {
        for (int j = 0; j < boardColSize; ++j) {
            board[i][j] = initialBoard[i][j];
        }
    }

  
    printf("%d", isValidSudoku(board, boardSize, &boardColSize));

  
    for (int i = 0; i < boardSize; ++i) {
        free(board[i]);
    }
    free(board);

    return 0;
}
