/* Modify the temperature conversion program to print the table in
reverse order, that is, from 300 degrees to O */

#include<stdio.h>
int main()
{
    float fahr, celsius;
    for(fahr= 300; fahr>=0; fahr-=20)
    {
        celsius = (5.0/9.0)*(fahr-32);
        printf("\n%6.1f %10.2f\n",fahr,celsius);
    }
    return 0;
}