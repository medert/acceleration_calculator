#include <stdio.h>
#include <math.h>

void instructions(void);
double calculate_acceleration(double t, double v_i, double v_f);
double calculate_time_to_stop(double t, double v_i, double v_f);


int main(void)
{
    double t, v_i, v_f, a;
    instructions();
    
    printf("\nPlease, enter the time interval in minutes?\n");
    scanf("%lf", &t);
    
    printf("Please, enter the initial velocity in miles per hour?\n");
    scanf("%lf", &v_i);
    
    printf("Please, enter the final velocity in miles per hour?\n");
    scanf("%lf", &v_f);
    
    printf("\nThe cyclist decelerates at %.2f miles per hour.\n", calculate_acceleration(t, v_i, v_f));
    printf("To decelerate to a full stop the cyclist will need %.2f minutes.\n", calculate_time_to_stop(t, v_i, v_f));
    
    getchar();
    return 0;
}

void instructions(void)
{
    printf("Welcome!\n");
    printf("This program calculates the contant acceleration of a cyclist\n");
    printf("and time that the cyclist will need to decelerate to a full stop!\n");
}

double calculate_acceleration(double t, double v_i, double v_f)
{
    double a;
    
    a = (v_f * 60 - v_i * 60) / t;

    return a;        
}

double calculate_time_to_stop(double t, double v_i, double v_f)
{
    double time_to_stop, a;
    
    a = calculate_acceleration(t, v_i, v_f);
    
    time_to_stop = (0 - v_i * 60 ) / a;
    
    return time_to_stop;
}