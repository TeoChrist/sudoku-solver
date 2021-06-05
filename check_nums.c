#include "sudoku.h"

void check_nums(unsigned int position, unsigned int choices[]) {
    unsigned int x = position % N;
    unsigned int y = position / N;
    //along column
    for (int i = 0; i < y; i++)
        choices[output[i * N + x]] = 1;
    for (int i = y + 1; i < N; i++)
        choices[output[i * N + x]] = 1;
    //inside square
    unsigned int xr =  x % 3;
    unsigned int xbase = x - xr;
    unsigned int x2 = (xr + 1) % 3 + xbase;
    unsigned int x3 = (xr + 2) % 3 + xbase;
    unsigned int yr =  y % 3;
    unsigned int ybase = y - yr;
    unsigned int y2 = ((yr + 1) % 3 + ybase) * N;
    unsigned int y3 = ((yr + 2) % 3 + ybase) * N;
    choices[output[y2 + x ]] = 1;
    choices[output[y2 + x2]] = 1;
    choices[output[y2 + x3]] = 1;
    choices[output[y3 + x ]] = 1;
    choices[output[y3 + x2]] = 1;
    choices[output[y3 + x3]] = 1;
    y *= N;
    choices[output[y + x2]] = 1;
    choices[output[y + x3]] = 1;
    //along row
    for (int i = 0; i < x; i++)
        choices[output[y + i]] = 1;
    for (int i = x + 1; i < N; i++)
        choices[output[y + i]] = 1;
}