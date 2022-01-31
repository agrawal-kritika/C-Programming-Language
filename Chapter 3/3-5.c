/* 3-5. Write the function itob(n,s,b) that converts the integer n
 into a base b character representation in the string s. In particular,
 itob(n,s,16) formats s as a hexadecimal integer in s. */

#include<limits.h>
#include<stdio.h>
#include<string.h>

#define MAXLEN 1000

void reverse(char s[])
{
	int c, i, j;

	for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

void itob(unsigned n, char s[], int b)
{
	int i, sign, digit;
	sign = n;
	const char baseDigits[16] = { '0', '1', '2', '3', '4', '5', '6', '7', 
		                          '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };

	if (b == 10 && sign < 0) {
	    n = -n;
	}

	i = 0;
	do {        // digits in reverse order 
		digit = n % b;  
		s[i++] = baseDigits[digit];
	}
	while ((n /= b) > 0);

	if (b == 10 && sign < 0) { 
		s[i++] = '-';
	}

	s[i] = '\0';
	reverse(s);
}

int main(void)
{
	int i;
	char str[MAXLEN];

	printf("Converting %i to\n", 10);
	
	for (i = 2; i <= 16; ++i) {
		printf("Base% i:\n", i);
		itob(10 , str, i);
		printf(" %s\n",  str);
	}
	return 0;
}

