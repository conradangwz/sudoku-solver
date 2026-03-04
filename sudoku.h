#include <stdio.h>
#include <stdlib.h>

char POSSIBLE = 0x1FF; /* 9 bits set to 1, representing all possible numbers (1-9) */

typedef struct Box {
    struct Box * next;   
} Box;


typedef struct Square {
    int number;
    char possible;
    Box * box;
    int row;
    int column;
} Square;


int ** createPuzzle();
void printPuzzle(int ** puzzle);
Square *** setUpPuzzle(int ** puzzle);