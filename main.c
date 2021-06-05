#include <stdio.h>
#include "sudoku.h"

int main() {
    unsigned int start_position = first_blank();
    if (start_position < 0 || start_position >= NQ)
        printf("Nothing left to do here!\n");
    else if (try(start_position) == 1) {
        if (test() == 0)//bad ending
            printf("Something is wrong...\n");
        else//good ending
            printf("Done\n");
        print_sudoku(output);
    }
    else
        printf("Not a real sudoku?\n");
    return 0;
}