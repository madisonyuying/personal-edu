/*
 * File: main_template.c
 * Copy: Copyright (c) 2021 Gregory C. Myers
 * BlazerID: mmcsw7
 * Desc: Driver for testing concepts
 */
 
 /*
  * Name: int main(int argc, char** argv)
  * Desc: Used to drive other functions for the purpose to demo features in class. Function calls are commented/ uncommmented dsepending on which features are to  be tested
  */
  
  /* 
   * Name: <name of function>
   * Desc: <description of function>
   * Args: <list of input and output args, type, etc.>
   */

  /* 
   * File: P1.c
   * Author: mmcsw7
   * 
   * created Dec 7, 2021
   */
   
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1
#define pi approximate_pi() // utilizing a function 

/* Function prototypes */
int get_info(void); // print info about user
int Figure_2_1(); // calls demo figure_2_1
// void projectile_1D_v1(void);
// void projectile_2D_v1(void);
// void simple_supported_beam_v1(void);
void arithmetic_operators(void);
void integer_division(void);
void integer_remainder(void);
void formatting_integers(void); 
void formatting_doubles(void); 
double approximate_pi(void); 
void type_casts(void); 
void interactive_01(void);
void parametric_01(const char first_name[], const char last_name[], const char 
course_department[], const int course_number );
void for_loops_01(void);
void for_loops_02(void);



void help(void);


int main (int argc, char** argv){
   int index;
   char first_name[10];
   char last_name[10];
   char course_department[3];
   int course_number;
   // argc - count of the number of argumentse
   // argv - array of arguments from the command line
   // indexing is zero based 
   printf("argv: %d\n", argc);
   for (index = 0; index < argc; index++ ) {
      printf("argv[ %d ] has the value %s. \n", index, argv[ index ]);
   }


   // how to test what arguments are coming from the command line 
   // must have at least one argument --- > the name of the executable 
   // use an if statement to determine which function to call 
   // use the function name as the command line argument (arbitrary)
/*
    if ( argc < 2 ) {
      help(); // implicit call for help
   } else if (( strcmpi ( argv[ 1 ], "/h" ) == 0) || (strcmpi( argv[ 1 ], "/?") == 0 )) {
      help(); // explicit call for help
   } else if (strcmpi( argv[ 1 ], "/get_info") == 0) {
      get_info(); // calls our function ....
   } else if( strcmpi( argv[ 1 ], "/Figure_2_1") == 0) {
      Figure_2_1(); // calls our demo Figure_2_1
   } else if( strcmpi( argv[ 1 ], "/arithmetic_operators") == 0) {
      arithmetic_operators(); // call to arithmetic operators demo 
   } else if( strcmpi( argv[ 1 ], "/integer_division") == 0) {
      integer_division(); // call to integer divisioin demo 
   } else if( strcmpi( argv[ 1 ], "/integer_remainder") == 0) {
      integer_remainder(); // call to integer_remainder demo 
   } else if( strcmpi( argv[ 1 ], "/formatting_integers") == 0) {
      formatting_integers(); // call to format integers demo
   } else if( strcmpi( argv[ 1 ], "/formatting_doubles") == 0) {
      formatting_doubles(); // call to format doubles demo 
   } else if( strcmpi( argv[ 1 ], "type_casts") == 0) {
      type_casts(); // call to type casts demo 
   } else if( strcmpi( argv[ 1 ], "/interactive_01") == 0) {
      interactive_01(); // call to first interactive demo 
   } else if( strcmpi( argv[ 1 ], "/parametric_01") == 0) {
   
      
      //capture the information from the user... 

      printf("Please enter a first name:\n");
      scanf("%s", &first_name);

      printf("Please enter a last name:\n");
      scanf("%s", &last_name);

      printf("Please enter a course department:\n");
      scanf("%s", &course_department);

      printf("Please enter a course number: \n ");
      scanf("%d", &course_number);

      // call to our output function
      parametric_01( first_name, last_name, course_department, course_number);
      //capture the information from the user... 

      printf("Please enter a first name:\n");
      scanf("%s", &first_name);

      printf("Please enter a last name:\n");
      scanf("%s", &last_name);

      printf("Please enter a course department:\n");
      scanf("%s", &course_department);

      printf("Please enter a course number: \n ");
      scanf("%d", &course_number);

      // call to our output function
      parametric_01( first_name, last_name, course_department, course_number );
   } else if (( strcmpi(argv[ 1 ], "/parametric_01") == 0) && (argc == 6)) {
      strcpy( first_name, argv[2]);
      strcpy( last_name, argv[3]);
      strcpy( course_department, argv[4]);
      course_number = atoi( argv[5]);

      parametric_01(first_name, last_name, course_department, course_number);
   } else if (strcmpi (argv[1], "/for_loops_01" ) == 0) {
      for_loops_01();
   } else if (strcmpi (argv[1], "/for_loops_02" ) == 0) {
      for_loops_02();

   } else {
      help(); // implicit call for help 
   }
   */
   




   
   // get_info(); // calls our get_info function
   // Figure_2_1(); // calls figure_2_1
   // projectile_1D_v1(); // calls 1D version
   // projectile_2D_v1(); // calls 2D version
   // simple_supported_beam_v1(); // calls beam 
   // arithmetic_operators(); // calls arithmetic_operators demo 
   // integer_division(); // calls integer_division demo 
   // integer_remainder(); // calls integer_remainder demo 
   // formatting_integers(); // calls  formatting_integers
   // formatting_doubles(); 
   // type_casts(); // calls type_casts
   //interactive_01(); // calls interactive_01
   
   //capture the information from the user... 

   /* printf("Please enter a first name:\n");
      scanf("%s", &first_name[10]);

      printf("Please enter a last name:\n");
      scanf("%s", &last_name[10]);

      printf("Please enter a course department:\n");
      scanf("%s", &course_department[3]);

      printf("Please enter a course number: \n ");
      scanf("%d", &course_number);

      // call to our output function
      parametric_01( first_name, last_name, course_department, course_number);
   */
   // for_loops_01(); // calls our for_loops_01 demo 
   for_loops_02(); // calls our for_loops_02 demo 


    return (EXIT_SUCCESS);

}
void help(void) {
   printf("Usage:\n");
   printf(" fundamentals_demo.exe /h                           ... calls help \n");
   printf(" fundamentals_demo.exe /get_info                    ... calls get_info \n");
   printf(" fundamentals_demo.exe /Figure_2_1                  ... calls Figure_2_1\n");
   printf(" fundamentals_demo.exe /arithmetic_operators        ... calls arithmetic_operators\n");
   printf(" fundamentals_demo.exe /integer_division            ... calls integer_divisioin\n");
   printf(" fundamentals_demo.exe /integer_remainder           ... calls integer_remainder\n"); 
   printf(" fundamentals_demo.exe /formatting_integers         ... calls formatting_integers\n");
   printf(" fundamentals_demo.exe /formatting_doubles          ... calls formatting_doubles\n");
   printf(" fundamentals_demo.exe /type_casts                  ... calls type_casts\n");
   printf(" fundamentals_demo.exe /interactive_01              ... calls interactive_01\n");
   printf(" fundamentals_demo.exe /parametric_01               ... calls parametric_01 \n");
   printf(" fundamentals_demo.exe / parametric_01 Madison YuYing EE 233          ...calls parametric_01 cmd line args \n");
   printf(" fundamentals_demo.exe /for_loop_01                 ... calls for_loop_01");
   printf(" fundamentals_demo.exe /for_loop_02                 ... calls for_loop_02");


   
}


/* Name: get_info
* Desc: prints information about author
* arg: returns integer for success/failure
*/


int get_info(void) {
   printf("Firstname:\t\tMadison\n");
	printf("Lastname:\t\tYu-Ying\n");
	printf("Initials:\t\tMY\n");
	
	printf("BlazerID:\t\tmmcsw7\n");
   printf("Graduation:\t\tSpring 2023\n");

   printf("Languages:\t\tMATLAB\n");
	printf("Goals (Class):\t\tTo learn C.\n");
   printf("Goals (Professional):\tBecome an intern at a software company.\n");

   printf("Computer Model:\t\tMacbook Air 2020\n");
   printf("Computer CPU:\t\tM1\n");
   printf("Computer Memory:\t8GB\n");
   return(EXIT_SUCCESS);
}

/* File: Fiure_1.13.c
 * Copy: Copyright (c) Jeri H. Hanly & Elliot B Koffman, Problem S
 * BlazerID: mmcsw7
 * Desc: direct copy of figure 1.13
 * converts distance in miles to kilometers
 */


#define KMS_PER_MILE 1.609
int Figure_2_1(void) {
   double miles; /* input - distance in miles*/
   double kms;  /* output - distanace in kilometers */

   /* get the distance in miles */
   printf("Enter the distance in miles>");
   scanf("%lf", &miles);

   /* convert the  distance into kilometers */
   kms = KMS_PER_MILE * miles;

   /* display the distance in kilometers*/
   printf("That equals %.4f kilometers. \n", kms);

   return ( EXIT_SUCCESS );

}
/* File P2.c
 * Copy: copyright (c) 2021 Gregory C. Myers 
 * BlazerID: mmcsw7 
 * Desc: Driver for testing concepts
 */


/* Name: void projectile_1D_v1 (void)
 * Desc: 1D projectile calculation
 * Args: void input and output 
 */
void projectile_1D_v1(void){
   printf("Calling projectile_1D_v1\n");
   
}


/* Name: void projectile_2D_v1 (void)
 * Desc: 2D projectile calculation
 * Args: void input and output 
 */
void projectile_2D_v1(void){
   printf("Calling projectile_2D_v1\n");

}


/* Name: void simple_supported_beam_v1(void)
 * Desc: reaction forced for a simple supported beam
 * Args: void input and output
 */
void simple_supported_beam_v1(void){
   printf("Calling simple_support_beam_v1\n");
}



/*
 * Name: void arithmetic_operators(void)
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
    
    // Note: Do not modify the Table name, description, headers or footers.
    // ToDo: Complete the following table.
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
    
    printf("%d %% %d = %d\n", a_int, b_int, (a_int % b_int));         
    
    printf("========================================\n");
}

/*
 * Name: void integer_division(void)
 * Desc: Demonstration of Results of Integer Division 
 */
void integer_division(void)
{
    // Note: Do not modify the Table name, description, headers or footers.
    // ToDo: Complete the following table.
    printf("Fundamentals: Results of Integer Division\n");
    printf("========================================\n");        
    
    // "normal" examples
    printf("%d / %d = %d\n", 3, 15, (3/15) );
    printf("%d / %d = %d\n", 15, 3, (15/3) );
    printf("%d / %d = %d\n", 16, 3, (16/3) );
    printf("%d / %d = %d\n", 17, 3, (17/3) );
    printf("%d / %d = %d\n", 18, 3, (18/3) );
    
    // negative examples
    printf("%d / %d = %d\n", 16, -3, (16/-3) );
    printf("%d / %d = %d\n", -16, 3, (-16/3) );
    printf("%d / %d = %d\n", -16, -3, (-16/-3) );
    
    printf("%d / %d = %d\n", 0, 4, (0/4) );
    
    // divide by zero
    // printf("%d / %d = %d\n", 4, 0, (4/0) );
    
    printf("========================================\n");
}
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


/* 
* Name: void formatting_integers(void) 
* Desc: Demonstration of Displaying 234 and 234 Using Different Formatting 
*/ 
void formatting_integers(void) 
{ 
   // Note: Do not modify the Table name, description, headers or footers. 
   printf("Fundamentals: Examples of Formatting Type Integer Values\n"); 
   printf("========================================\
n"); 
   // ToDo: Complete the following table. 
   printf("%4d\n", 234); 
   printf("%5d\n", 234); 
   printf("%6d\n", 234); 
   printf("%1d\n", 234); 
    
   printf("%4d\n", -234); 
   printf("%5d\n", -234); 
   printf("%6d\n", -234); 
   printf("%2d\n", -234);  
    
   printf("========================================\
n");     
}

/* 
* Name: void formatting_doubles(void) 
* Desc: Demonstration of Formatting Type double Values  
*/ 
void formatting_doubles(void) {      
   // Note: Do not modify the Table name, description, headers or footers. 
   printf("Fundamentals: Examples of Formatting Type Double Values\n"); 
   printf("========================================\
n"); 
    
   // ToDo: Complete the following table. 
   printf("%f\n", pi); 
   printf("%5.2f\n", pi); 
   printf("%3.2f\n", pi); 
   printf("%5.3f\n", pi); 
   printf("%4.2f\n", .1234); 
        
   printf("========================================\
n"); 
    
} 
/* 
* Name: double approximate_pi(void) 
* Desc: Calculate pi using the GregoryLeibniz series 
*/ 
double approximate_pi(void) 
{ 
   int count; 
   int sign; 
   double sum; 
        
   sign = 1; 
   sum = 0.0; 
    
   for (count = 1; count <= 19999; count += 2) 
   { 
       sum = sum +  sign * (1 / ((double) count));  
       /* Display the iteration number, the addendum and the running total. 
        * printf("%d %f %f\n", count, (sign * (1 / ((double) count))), (4*sum) ); 
        */ 
       //  
       sign = -sign;         
   } 
   sum = 4 * sum; 
   return( sum ); 
}

/*
 * Name: void type_casts(void)
 * Desc: Demonstration of Examples of the Use of Type Casts 
 */
void type_casts(void)
{
    int int_a;
    int int_b;
    double double_a;
    double double_b;
    char char_a;
    
    int_a = 5;
    int_b = 6;
    double_a = 5.0;
    double_b = 6.0;    
    char_a = 'G';
    
    // Note: Do not modify the Table name, description, headers or footers.    
    printf("Fundamentals: Examples of Use of Type Casts\n");
    printf("========================================\n");    
    
    // changing the datatype of the value (not the variable)
    
    // int --> double
    printf("%d --> %f\n", 5, ((double) 5) );
    printf("%d --> %f\n", int_a, ((double) int_a) );
    printf("%d + %d --> %f\n", int_a, int_b, ((double) (int_a + int_b)) );
    
    // double --> int
    printf("%f --> %d\n", double_a, ((int) double_a) );
    printf("%f + %f --> %d\n", double_a, double_b, ((int) (double_a + double_b)) );
    
    int_a = (int) (double_a + double_b);
    
    // char --> int
    printf("%c --> %d\n", char_a, ((int) char_a));
    
    // int --> char
    printf("%d --> %c\n", 97, ((char) 97));
    char_a = (char) 97; // lowercase a
    
    printf("========================================\n");
}


/*
 * Name: void interactive_01(void)
 * Desc: Demonstration of scanf and printf interactive
 */
void interactive_01(void)
{
   char first_name[10];
   char last_name[10];
   char course_department[3];
   int course_number;

   // collect this information from the user
   printf("Please enter your first name (no more than 9 characters):\n");
   scanf("%s", &first_name[10]);

   printf("Please enter your last name (no more than 9 characters):\n");
   scanf("%s", &last_name[10]);

   printf("Please enter a course department (no more than 2 characters):\n");
   scanf("%s", &course_department[3]);

   printf("Please enter a course number: \n");
   scanf("%d", &course_number);
   
   // print the information out in a nice format 
   printf("Hello %s %s! Welcome to %s %d!\n", first_name, last_name, course_department, course_number);

}

/* 
 * Name: void for_loops_01(void)
 * Desc: Demonstration of different ways to use for loops
 */
void for_loops_01(void) {
    int index;
    double current;
    
    /* Syntax:
     *      initialization expression - where you want the loop to start
     *      loop repetition condition - must evaluate to "true" for the loop to continue 
     *      update expression - how you want the loop to increment/ decrement
     *  for ( initialization expression; loop repetition condition; update 
expression)
     *  {   
     *      block of code/statements
     *      statement;
     *  }
     */ 
   
    printf("index          value\n");
    printf("======================================\n");
    // for ( index = 0; index <= 9; index = index + 1 ){
       for ( index = 0 ; index <= 9 ; index++) {
       printf("%d          %d\n", index, 2*index );

    }
    printf("======================================\n\n");

    printf("index          value\n");
    printf("======================================\n");
    for ( index = 9; index >= 0 ; index = index -1 ){
         printf("%d          %d\n", index, 2*index );
    }
    printf("======================================\n");


    printf("current         value\n");
    printf("======================================\n");
      for (current = 0.0; current <= 2.0; current = current + .1 ){
         printf("%.2f            %.2f\n", current, pow(current, 2.0)); 
      }
    printf("======================================\n\n");

    printf("current         value\n");
    printf("======================================\n");
      for ( index = 0; index < 0; index = index + 1){
         printf("%d          %d\n", index, 2*index );
      }
    printf("======================================\n\n");
}


/* 
 * Name: void for_loops_02(void)
 * Desc: Demonstration of different ways to use for loops
 */
void for_loops_02(void) {
    int index_outer;
    int index_inner;
    double current_outer;
    double current_inner;
    
    printf("index          value\n");
    printf("======================================\n");
      for ( index_outer = 1; index_outer <= 12; index_outer = index_outer + 1) {
         for ( index_inner = 1; index_inner <= 10; index_inner = index_inner + 1 ){
            // use the indeces to fill out our multiplication table 
            // index inner x index outer --> total number of  times this code will run 

            printf(" %d, %d      %d\n", index_outer, index_inner, (index_outer * index_inner));

         }
      }
    printf("======================================\n");        

    printf("current          value\n");
    printf("======================================\n");
    for (current_outer = 0.0; current_outer < 10.0; current_outer = current_outer + 1.0 ) {
       for (current_inner = 0.0; current_inner < (2 * M_PI ); current_inner = current_inner + ( M_PI / 4.0)){
            printf("%.2f, %.4f      %.4f\n", current_outer, current_inner, (current_outer * current_inner));
       }
    }
    printf("======================================\n");   
    

    for( index_outer = 0; index_outer < 12 ; index_outer++) {
       for ( index_inner = 0; index_inner < 10; index_inner++){
          printf("%d,", (index_outer * index_inner));
       }
    }

      
    printf("index          value\n");
    printf("======================================\n");
    printf("======================================\n");   
       
}
