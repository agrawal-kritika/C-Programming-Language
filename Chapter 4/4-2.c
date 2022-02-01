/* 4-2. Extend atof to handle scientific notation of the form
    	123.45e-6
 where a floating-point number may be followed by e or E and an optionally
 signed exponent. */

#include <stdio.h>
#include <ctype.h>

double atof(char s[])
{
	int i, sign, expSign;
	double val, power, exponent;

	for (i = 0; isspace(s[i]) ; i++)           
		;

	sign = (s[i] == '-') ? -1 : 1;
	
	if (s[i] == '+' || s[i] == '-') {
		i++;
	}
	
	for (val = 0.0 ; isdigit(s[i]) ; i++) {
		val = 10.0 * val + (s[i] - '0');
	}
	
	if (s[i] == '.') {
		i++;
	}
	for (power = 1.0 ; isdigit(s[i]) ; i++) {
		val = 10.0 * val + (s[i] - '0');
		power *= 10.0;
	}
	if (tolower(s[i]) == 'e') 
    { 
		i++;
	}
	expSign = (s[i] == '-') ? -1 : 1; 
	if (s[i] == '+' || s[i] == '-') 
    {
	     i++;
	}

	for (exponent = 0.0 ; isdigit(s[i]) ; i++)
    {
		exponent = 10.0 * exponent + (s[i] - '0');
	}
	while (exponent-- != 0)
    {
		power = (expSign > 0) ? power / 10: power * 10; 
	} 
	return sign * val / power;
}

int main(void)
{
	char number[]  = "123.45";
	char number2[] = "123.45e-6";
	char number3[] = "123.45e+6";
	char number4[] = "-123.45E+6";

	printf("%f\n", atof(number));
	printf("%f\n", atof(number2));
	printf("%f\n", atof(number3));
	printf("%f\n", atof(number4));

	return 0;
}