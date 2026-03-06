#ifndef SUDOKU_H
#define SUDOKU_H

#include <stdio.h>
#include <stdlib.h>

extern int UNSOLVED; /* 9 bits set to 1, representing all possible numbers (1-9) */
extern int SIZE_ROWS; /* 9 bits set to 0, representing no possible numbers */
extern int SIZE_COLUMNS; /* 9 bits set to 0, representing no possible numbers */

typedef struct Box {
    struct Box * next;   
} Box;


typedef struct Square {
    int number;
    int possible[9];
    int solvable;
    Box * box;
    int row;
    int column;
} Square;


int ** createPuzzle();
void printPuzzle(Square *** puzzle);
Square *** setUpPuzzle(int ** puzzle);

int solveSquare(Square * square);
int checkPuzzle(Square *** sudoku);
int updateSudoku(Square *** sudoku, int row, int column);

#endif /* SUDOKU_H */