/* 1-17. Write a program to print all input lines that are longer than
  80 characters. */

#include<stdio.h>
#define MAXLEN 1000    // max len of input line 
int getLine(char [], int);

int getLine(char line[], int limit)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;

	if (c == '\n') 
    {
		line[i] = c;
		i++;
	}
	line[i] = '\0';
	return i;
}						  

int main()
{
	int  len;                // current line length 
	char line[MAXLEN];       // current input line 

	while ((len = getLine(line, MAXLEN)) > 0) {
		if (len > 80) //since no. of characters per line =80
        {
			printf("%s", line);
		}
	}
	return 0;
}