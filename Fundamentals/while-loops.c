/* Function Prototypes */
void while_loops_01(void);
/* 
 * Name: void while_loops_01(void)
 * Desc: Demonstration of different ways to use while loops
 */
void while_loops_01(void) {
    int index;
    double balance;
    double purchase;
    int broke;
    int count;
    
    /* Syntax:
     *      loop repetition condition
     * 
     *  while (loop repetition condition)
     * {    
     *      block of code/statements
     *      statement;
     * }      
     */
    
    // https://en.wikibooks.org/wiki/C%2B%2B_Programming/Code/Standard_C_Library/
Functions/srand    
    // https://en.wikibooks.org/wiki/C_Programming/time.h
    srand( time(NULL) );    
    
    printf("index          value\n");
    printf("======================================\n");
    printf("======================================\n");
}






/* Function Prototypes */
void while_loops_02(void);
int rand_range(int min, int max );
/* 
 * Name: void while_loops_02(void)
 * Desc: Demonstration an interactive way to use while loops
 */
void while_loops_02(void) {
    int valid;
    int first;
    int second;    
    int guess;
    int count_current;
    int count_max;
    
    // srand(time(0));
    srand(time(NULL)); // Creates the seed for the random number generator.
    
    printf("Let's play a guessing game!  Pick two integers.\n");
    printf("I'll pick one in between them.\n");
    printf("I'll give you three guesses to figure out my integer!\n");
    printf("Let's go!!!\n\n");
}
/* 
 * Name: int rand_range(int min, int max )
 * Desc: Demonstration of a random integer generator
 */
int rand_range(int min, int max ) {    
    return (min + rand() / (RAND_MAX / (max - min + 1) + 1));
}
