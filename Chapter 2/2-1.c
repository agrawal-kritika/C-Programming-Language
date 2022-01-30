/* 2-1. Write a program to determine the ranges of char, short, int,
  and long variables, both signed and unsigned, by printing appropriate values
  from standard headers and by direct computation. Harder if you compute them:
  determine the ranges of the various floating-point types. */

#include <stdio.h>
#include <limits.h>
#include<float.h>

void stdLibraryLimits()
{
	/* char */
	printf("signed char\t\t%i\t\t\t%i\n", CHAR_MIN, CHAR_MAX);
	printf("unsigned char\t\t%i\t\t\t%u\n", 0, UCHAR_MAX);
	/* int */
	printf("signed short\t\t%i\t\t\t%i\n", SHRT_MIN, SHRT_MAX);
	printf("unsigned short\t\t%i\t\t\t%u\n", 0, USHRT_MAX);
	printf("signed int\t\t%i\t\t%i\n", INT_MIN, INT_MAX);
	printf("unsigned int\t\t%i\t\t\t%u\n", 0, UINT_MAX);
	printf("signed long\t\t%li\t%li\n", LONG_MIN, LONG_MAX);
	printf("unsigned long\t\t%i\t\t\t%lu\n", 0, ULONG_MAX);
	printf("signed long long\t%lli\t%lli\n", LLONG_MIN, LLONG_MAX);
	printf("unsigned long long\t%i\t\t\t%llu\n", 0, ULLONG_MAX);

	printf("\n");

	/* float */
	printf("float\t\t\t%e\t\t%e\n", FLT_MIN, FLT_MAX);
	printf("double\t\t\t%e\t\t%e\n", DBL_MIN, DBL_MAX);
	printf("long double\t\t%Lg\t\t%Lg\n", LDBL_MIN, LDBL_MAX);
}

int main() {
   
	stdLibraryLimits();

	return 0;
}