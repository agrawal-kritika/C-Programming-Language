/* Write a program to copy its input to its output, replacing
  each tab by \t, each backspace by \b, and each backslash by \\. This makes
  tabs and backspaces visible in an unambiguous way. */

#include<stdio.h>
int main()
{
	int c, replace; 

	while ((c = getchar()) != EOF) 
    {
		replace = 0;
		if (c == '\t') 
        {
			printf("\\t");
			replace=1;  //indicates that the character has been replaced
		}
		if (c == '\b') 
        {
			printf("\\b");
			replace=1;
		}
		if (c == '\\') 
        {
			printf("\\\\");
			replace=1;
		}
		if (replace == 0)
			putchar(c);
	}
	return 0;
}