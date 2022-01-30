/* 2-7. Write a function invert(x,p,n) that returns x with the n bits
 that begin at position p inverted (i.e., 1 changed into 0 and vice versa),
 leaving the others unchanged. */

#include<stdio.h>

unsigned int invert(unsigned int x, int p ,int n)
{
    unsigned nbits;
	nbits = ~(~0 << n); 
	return (x & ~(nbits << p)) | (nbits & ~(x & nbits << p));
}

int main()
{
    unsigned int x;
    printf("\nEnter the value of x:");  //nuber must be in hex format 0X_ _ _ _
    scanf("%x", &x);
    int p=0, n= 4;
    printf("%x\n", invert(x,p,n));
    return 0;
}