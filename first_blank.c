#include "sudoku.h"

unsigned int first_blank() {
    unsigned int first = NQ;
    for (int i = NQ-1; i != -1; i--)
        if (input[i])
            output[i] = input[i];
        else
            first = i;
    return first;
}