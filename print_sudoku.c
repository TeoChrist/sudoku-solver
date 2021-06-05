#include <stdio.h>

void print_sudoku(const unsigned int array[]) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            putchar('0' + array[i * 9 + j]);
        }
        putchar('\n');
    }
}