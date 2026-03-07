#ifndef SUDOKU_H
#define SUDOKU_H

#include <stdio.h>
#include <stdlib.h>

extern int UNSOLVED; /* 9 bits set to 1, representing all possible numbers (1-9) */
extern int SIZE_ROWS; /* 9 bits set to 0, representing no possible numbers */
extern int SIZE_COLUMNS; /* 9 bits set to 0, representing no possible numbers */

typedef struct Sudoku {
    struct Square *** squares;
    struct Box ** boxes;
} Sudoku;

typedef struct Box {
    struct Square ** squares;
    int numbers;  
    int possible[9];
    int solvable; 
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
Sudoku * setUpPuzzle(int ** puzzle);

Sudoku * createSudoku(Square *** puzzle, Box ** boxes);


int checkPuzzle(Square *** sudoku, Box ** boxes);
int updateSudoku(Square *** sudoku, int row, int column);

int solveSquare(Square * square);

/*Box functions*/
Box ** createBoxes();
int updateBoxes(Square *** sudoku, int row, int column);
int boxSingles(Square ***sudoku, Box **boxes);

#endif /* SUDOKU_H */