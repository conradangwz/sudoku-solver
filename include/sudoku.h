#ifndef SUDOKU_H
#define SUDOKU_H

#include <stdio.h>
#include <stdlib.h>

extern char POSSIBLE; /* 9 bits set to 1, representing all possible numbers (1-9) */
extern int SIZE_ROWS; /* 9 bits set to 0, representing no possible numbers */
extern int SIZE_COLUMNS; /* 9 bits set to 0, representing no possible numbers */

typedef struct Box {
    struct Box * next;   
} Box;


typedef struct Square {
    int number;
    char code;
    Box * box;
    int row;
    int column;
} Square;


int ** createPuzzle();
void printPuzzle(int ** puzzle);
Square *** setUpPuzzle(int ** puzzle);

#endif /* SUDOKU_H */