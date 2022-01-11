/* Modify the temperature conversion program to print a heading
above the table. */

#include<stdio.h>
int main()
{
    float fahr, celsius;
    float lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("\nTemperature conversion\n");
    while(fahr <= upper)
    {
        celsius = (5.0/9.0)*(fahr-32);
        printf("\n%10.0f\t %7.1f\n", fahr,celsius);
        fahr= fahr+step;
    }
    return 0;
}