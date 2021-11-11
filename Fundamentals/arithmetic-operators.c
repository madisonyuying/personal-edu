#include <stdio.h>
#include <stdlib.h>

void arithmetic_operators(void);
/* Name: void arithmetic_operators(void)
* Desc: Demonstration of Arithmetic Operators
*/

void arithmetic_operators(void)
{
    int a_int;
    int b_int;
    double a_double;
    double b_double;

    a_int = 10;
    b_int = 3;
    a_double = 10.0;
    b_double = 3.0;

    printf("Fundamentals: Demonstration of Arithmetic Operators\n");
    printf("========================================\n");

    printf("%d + %d = %d\n", a_int, b_int, (a_int + b_int));
    printf("%f + %f = %f\n", a_double, b_double, (a_double + b_double));
    printf("%d + %f = %f\n", a_int, b_double, (a_int + b_double));
    printf("%f + %d = %f\n", a_double, b_int, (a_double + b_int));


    printf("%d - %d = %d\n", a_int, b_int, (a_int - b_int));
    printf("%f - %f = %f\n", a_double, b_double, (a_double - b_double));
    printf("%d - %f = %f\n", a_int, b_double, (a_int - b_double));
    printf("%f - %d = %f\n", a_double, b_int, (a_double - b_int));

    
    printf("%d * %d = %d\n", a_int, b_int, (a_int * b_int));
    printf("%f * %f = %f\n", a_double, b_double, (a_double * b_double));
    printf("%d * %f = %f\n", a_int, b_double, (a_int * b_double));
    printf("%f * %d = %f\n", a_double, b_int, (a_double * b_int));

    printf("%d / %d = %d\n", a_int, b_int, (a_int / b_int));
    printf("%f / %f = %f\n", a_double, b_double, (a_double / b_double));
    printf("%d / %f = %f\n", a_int, b_double, (a_int / b_double));
    printf("%f / %d = %f\n", a_double, b_int, (a_double / b_int));

    printf("%d %% %d\n", a_int, b_int, (a_int % b_int));

    printf("========================================\n");

}