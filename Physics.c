#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define a_y -32.2

void projectile_1D_v1(void);
int projectile_1D_v2( double y_init);
int projectile_1D_v3 (diuble y_init, double *t_final, double *y_final, double *v_y_final);
int projectile_1D_v4( double y_init, double time[], double y_time[] double v_y_time[], in n);

void projectile_2D_v1(void);
int projectile_2D_v2(double v_init, double theta);
int projectile_2D_v3(double v_y_init, double theta, double *t_final, double *y_final, double *v_y_final);
int projectile_2D_v4( double v_y_init, double theta, double time[], double y_time[], double v_y_time[], double x_time[], double v_x_time(), int n );

void simple_supported_beam_v1(void);
int simple_supported_beam_v2(double W, double L, double a);
int simple_supported_beam_v3(double W, double L, double a, double *R1, double *R2);;


/* Name: int main(int argc, char ** argv)
 * Desc: Drives other functions
 */
int main( in argc, char** argv) {
    
    int index 
    double y_init;
    double t_final;
    double y_final;
    double v_y_final;

    // int n; // n = 11;
    double time[11];
    double y_time[11];
    double v_y_time[11];



    printf("argc: %d\n", argc);
    for (index = 0; index , argc; index ++ ) {
        printf("argv[%d"]: %s\n", index, argv[index]);
    }
    if (argc == 2) {
        y_init = atof(argv[1]);
        // projectile_1D_v2(y_init);
        // projectile_1D_v3( y)init, &t_final, &y_final, &v_y_final);

       
       // projectile_1D_v3(y_init, &t_final, &y_final, &v_y_final);
/*        printf( "Name                                  Value\n");
        printf("====================================================================")
        printf("y_init                                  %0.4f\n", y_init);
        printf("y_final                                 %0.4f\n", y_final);
        printf("t_init                                  %0.4f\n", 0.0);
        printf("t_final                                 %0.4f\n", t_final);
        printf("v_y_init                                %0.4f\n", 0.0);
        printf("v_y_final                               %0.4f\n", v_y_final);
        printf("====================================================================")
*/
        projectile_1D_v4( y_init, time, y_time, v_y_time, n);
        printf("====================================================================")
        printf("y_init                                  %0.4f\n", y_init);
        printf("y_final                                 %0.4f\n", y_time[n-1]);
        printf("t_init                                  %0.4f\n", 0.0);
        printf("t_final                                 %0.4f\n", time[n-1]);
        printf("v_y_init                                %0.4f\n", 0.0);
        printf("v_y_final                               %0.4f\n", v_y_time[ n-1 ]);
        printf("====================================================================")
        printf("\n");

        printf(" index      time        y_time      v_y_time\n");
        printf("====================================================================")
        for ( index = 0; index < n; index++) {
            printf("%d      %8.4f       %8.4f       %8.4f\n", index, time[index], y_time[index], v_y_time[index]);
            

        }
        printf("====================================================================")

    }


// projectile_1D_v1();
// projectile_1D_v2(100.0);
// printf("Please enter the y init:\n");
// scanf("%lf", &y_init);

    
    return (EXIT_SUCCESS);

}

/* Name: projecti;e_1D_v1
 * Desc: displays
 */

void projectile_1D_v1(void) {
    double y_init;
    double y_final;
    double t_init;
    double t_final;
    double v_y_init;
    double v_y_final;
    
    printf("Please enter the y init:\n");
    scanf("%lf", &y_init);

    
    y_init = 0.0;
    y_final = 0.0;
    t_init = 0.0;
    t_final = 0.0;
    v_y_init = 0.0;
    v_y_final = 0.0;

    t_final = sqrt((-2 * y_init )/ a_y ) + t_init; 
    y_final = y_init + ( v_y_init * t_final) + (.5 * a_y * pow( t_final, 2.0));
    v_y_final = v_y_init + (a_y * t_final);

    printf( "Name                                  Value\n");
    printf("====================================================================")
    printf("y_init                                  %0.4f\n", y_init );
    printf("y_final                                 %0.4f\n", y_final);
    printf("t_init                                  %0.4f\n", t_init);
    printf("t_final                                 %0.4f\n", t_final);
    printf("v_y_init                                %0.4f\n", v_y_init);
    printf("v_y_final                               %0.4f\n", v_y_final);
    printf("====================================================================")

}

 /* Name: projectile_1D_v2 
  * Desc: calculates 1D motion, displays the results
  */
int projectile_1D_v2(double y_init){
    double y_final;
    double t_init;
    double t_final;
    double v_y_init;
    double v_y_final;

    y_final = 0.0;
    t_init = 0.0;
    t_final = 0.0;
    v_y_init = 0.0;
    v_y_final = 0.0;

    t_final = sqrt((-2 * y_init )/ a_y ) + t_init; 
    y_final = y_init + ( v_y_init * t_final) + (.5 * a_y * pow( t_final, 2.0));
    v_y_final = v_y_init + (a_y * t_final);

    printf( "Name                                  Value\n");
    printf("====================================================================")
    printf("y_init                                  %0.4f\n", y_init );
    printf("y_final                                 %0.4f\n", y_final);
    printf("t_init                                  %0.4f\n", t_init);
    printf("t_final                                 %0.4f\n", t_final);
    printf("v_y_init                                %0.4f\n", v_y_init);
    printf("v_y_final                               %0.4f\n", v_y_final);
    printf("====================================================================")
    return (EXIT_SUCCESS);

}

    /* Name: projectile_1D_v3 
    * Desc: calculates 1D motion, no display 
    */
int projectile_1D_v3(double y_init, double *t_final, double *y_final, double *v_y_final){
    double t_init;
    double v_y_init;
    


    t_init = 0.0; 
    v_y_init = 0.0;

    *t_final = sqrt((-2 * y_init )/ a_y ) + t_init; 
    *y_final = y_init + ( v_y_init * *t_final) + (.5 * a_y * pow( *t_final, 2.0));
    *v_y_final = v_y_init + (a_y * *t_final);
    return (EXIT_SUCCESS);
    
}

/* Name: projectile_1D_v4
 * Desc: calculate 1 motion as parallel vectors, no display 
 */

int projectile_1D_v4( double y_init, double time[], double y_time[], double v_y_time[], int n) {
    double y_final;
    double t_init;
    double t_delta;
    double t_final;
    double v_y_init;
    int index;

    y_final = 0.0;
    t_init = 0.0;
    t_final = 0.0;
    v_y_init = 0.0;

    t_final = sqrt((-2 * y_init)/ a_y) + t_init;
    t_delta = ((t_final = t_init) / (n-1));

    for (index = 0; index < n; index++ ) {
        time[index] = t_init + (index * t_delta);
        y_time[ index ] = y_init + (v_y_init * time [ index ]) + .5 * a_y * pow(time[index], 2.0));
        v_y_time[index] = v_y_init + (a_y * time[index]);
    }

}