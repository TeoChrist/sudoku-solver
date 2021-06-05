#define N 9
#define NQ (N*N)

extern const unsigned int solution[];
extern const unsigned int input[];
extern unsigned int output[];

void print_sudoku(const unsigned int[]);
void check_nums(unsigned int, unsigned int[]);
unsigned int first_blank();
int try(unsigned int);
int test();