#include "sudoku.h"

int test() {
    for (int i = 0; i < NQ; i++)
        if (solution[i] != output[i])
            return 0;
    return 1;
}