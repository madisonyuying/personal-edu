/* Function Prototypes */
void integer_remainder(void);
/*
 * Name: void integer_remainder(void)
 * Desc: Demonstration of Results of % Operation 
 */
void integer_remainder(void)
{
    // Note: Do not modify the Table name, description, headers or footers.
    // ToDo: Complete the following table.
    printf("Fundamentals: Results of Integer Remainder\n");
    printf("========================================\n");    
    
    // "normal" examples
    printf("%d %% %d = %d\n", 3, 15, (3%15));
    printf("%d %% %d = %d\n", 4, 5, (4%5));
    printf("%d %% %d = %d\n", 5, 5, (5%5));
    printf("%d %% %d = %d\n", 6, 5, (6%5));
    printf("%d %% %d = %d\n", 7, 5, (7%5));
    printf("%d %% %d = %d\n", 8, 5, (8%5));
    printf("%d %% %d = %d\n", 5, 3, (5%3));
    printf("%d %% %d = %d\n", 5, 4, (5%4));
    printf("%d %% %d = %d\n", 15, 5, (15%5));
    printf("%d %% %d = %d\n", 15, 6, (15%6));
    
    // negative examples
    printf("%d %% %d = %d\n", 15, -7, (15%-7));
    printf("%d %% %d = %d\n", -15, 7, (-15%7));
    printf("%d %% %d = %d\n", -15, -7, (-15%-7));
    
    // remainder by 0
    // printf("%d %% %d = %d\n", 15, 0, (15%0));
    
    printf("========================================\n");
}
