#include "sudoku.h"

int try(unsigned int position) {
    if (position == NQ)
        return 1;//end of the array
    unsigned int choices[N+1] = {0,0,0,0,0,0,0,0,0,0};//9 +1 for ease. choices[0] gets ignored
    unsigned int next_position = position + 1;
    while(next_position != NQ && input[next_position])
        next_position++;
    check_nums(position, choices);
    for (int i = 1; i < N+1; i++) {
        if (choices[i])
            continue;
        output[position] = i;
        if (try(next_position) == 1)
            return 1;
    }
    output[position] = 0;
    return 0;
}