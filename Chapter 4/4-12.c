/*  4-12. Adapt the idea of printd to write a recursive version of
itoa; that is, convert an integer into a string by calling a recursive
routine. */

#include <stdio.h>
#include <string.h>
#include <limits.h>

#define MAXLEN 1000


void itoa(int, char []);
int itoar(int, char [], int);

void itoa(int n, char s[])
{
	itoar(n, s, 0);
}

int itoar(int n, char s[], int i)
{
	if (n < 0) {
		s[i++] = '-';
		n = -n;
	}
	if (n / 10)
		i = itoar(n / 10, s, i); 
	s[i++] = n % 10 + '0';
	s[i] = '\0';
	return i;
}

int main(void)
{
	char str[MAXLEN];

	itoa(900, str);
	printf("%s\n", str);

	itoa(-8985, str);
	printf("%s\n", str);

	itoa(INT_MAX, str);
	printf("%s\n", str);

	itoa(INT_MIN, str);
	printf("%s\n", str);

	return 0;
} 