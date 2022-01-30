/* 2-6. Write a function setbits(x,p,n,y) that returns x with the n
 bits that begin at position p set to the rightmost n bits of y, leaving the
 other bits unchanged. */

#include<stdio.h>
unsigned int setbits(unsigned x, int p, int n, unsigned y)
{
	unsigned nbits;
	nbits = ~(~0 << n); 
	return (x & ~(nbits << p)) | ((y & nbits) << p);
}

int main()
{
	unsigned x,y;
    printf("Enter the numbers x and y (format 0x_ _ _ _):\n");
    scanf("%x\n%x", &x,&y);
	int p = 8;                   // starting position
	int n = 8;                   // number of bits 
	printf("%x\n", setbits(x, p, n, y)); 
	return 0;
} 