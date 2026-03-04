#include "sudoku.h"

int ** createPuzzle() {
    int ** puzzle;
    int i, j;
    int array[9][9] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0 ,7 ,9}
    };

    puzzle = (int **)malloc(sizeof(int *) * 9);
    for (i = 0; i < 9; i++) {
        puzzle[i] = (int *)malloc(sizeof(int) * 9);
        for (j = 0; j < 9; j++) {
            puzzle[i][j] = array[i][j];
        }
    }

    return puzzle;
}

void printPuzzle(int ** puzzle) {
    int i, j;

    printf("-------------------------\n");
    for (i = 0; i < 9; i++) {
        printf("| ");
        /* Print each row */
        for (j = 0; j < 9; j++) {
            printf("%d ", puzzle[i][j]);
            if ((j+1) % 3 == 0) {
                printf("| ");
            }
        }
        printf("\n");
        if ((i+1) % 3 == 0) {
            printf("-------------------------\n");
        }
    }
}