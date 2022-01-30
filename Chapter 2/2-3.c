/* 2-3. Write a function htoi(s), which converts a string of
 hexadecimal digits (including an optional 0x or 0X) into its equivalent
 integer value. The allowable digits are 0 through 9, a through f, and A
 through F. */

#include <ctype.h>
#include<stdio.h>

#define MAXLEN 1000

int htoi(char s[])
{
	int i, hexDigit, intValue;

	// detect optional 0x or 0X prefix 
	i = 0;
	if (s[0] == '0' && tolower(s[1]) == 'x' && s[2] != '\0') 
    {
		i = 2;
	}

	hexDigit = intValue = 0;
	
	for ( ; s[i] != '\0'; i++) {
		if (!isdigit(s[i]) && (tolower(s[i]) < 'a' || tolower(s[i]) > 'f'))
        {
			return -1; // invalid input
		}
		if (isdigit(s[i])) 
        {
			hexDigit = s[i] - '0'; // digits->hexadecimal
		}
		else 
        {
			hexDigit = tolower(s[i]) - 'a' + 10; // letters->hexadecimal (+10 because hex 'a' is decimal 10)
		}
		
		intValue = 16 * intValue + hexDigit; // hexadecimal->decimal
	}
	return intValue;
}


int main()
{
	int result;
	char s[MAXLEN];
	printf("Enter a hexadecimal string: ");
	scanf("%s", s);
	if ((result = htoi(s)) < 0) 
    {
		return -1;     //  !hexadecimal 
	}
	printf("%i\n", result);
	return 0;
}
