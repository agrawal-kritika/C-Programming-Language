/* 4-14. Define a macro swap(t, x, y) that interchanges two arguments
of type t. (Block structure will help). */

#include<stdio.h>

#define swap(t,x,y) { t z; \
             z = x; x = y; y = z; }

int main(void)
{
    int x,y;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("\nEnter the value of y: ");
    scanf("%d",&y);
    printf("Before swap:  x = %d\t y = %d\n",x,y);
    swap(char,x,y);
    printf("After swap x = %d\t y = %d\n",x,y);
}

