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


#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

/* Function prototypes */
int get_info(void); // print info about user
int Figure_2_1(); // calls demo figure_2_1
void projectile_1D_v1(void);
void projectile_2D_v1(void);
void simple_supported_beam_v1(void);




int main (int argc, char** argv){
   int index;
   // get_info(); // calls our get_info function
   // Figure_2_1(); // calls figure_2_1
   projectile_1D_v1(); // calls 1D version
   projectile_2D_v1(); // calls 2D version
   simple_supported_beam_v1(); // calls beam 

    return (EXIT_SUCCESS);
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



