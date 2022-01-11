/* Write a prog to print the corresponding Celsius Fahrenheit table */

#include<stdio.h>
int main()
{
    int fahr, celsius;
    int upper=300, lower=0, step =20;
    fahr = lower;

    while(fahr <= upper)
    {
        celsius = 5*(fahr-32)/9;
        printf("\n %6d\t %10d\n",fahr, celsius);
        fahr = fahr+ step;
        celsius = celsius + step;
    }
    return 0;
}