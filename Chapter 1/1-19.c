/*1-19.  Write a function reverse(s) that reverses the character
  string s. Use it to write a program that reverses its input a line at a
  time.  */

#include<stdio.h>
#define MAXLINE 1000         // maximum input line length 

int  getLine(char [], int);
void reverse(char []);

int getLine(char line[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;

	if (c == '\n') {
		line[i] = c;
		++i;
	}

	line[i] = '\0';

	return i;
} 

void reverse(char line[])
{
	int i, j, len=0, temp;
	for (i = 0; line[i] != '\0'; ++i) {
		len++;
    }
	for (i = 0, j = len - 1; i < len / 2; ++i, --j) {
	    //swapping
		temp = line[i];
		line[i] = line[j];
		line[j] = temp;
	}
}

int main()
{
	int  len;                   // current line length 
	char line[MAXLINE];         // current input line 

	while ((len = getLine(line, MAXLINE)) > 0) {
		line[--len] = '\0';     // removing newline character at the end 
		reverse(line);
		printf("%s\n", line);
	}
	return 0;
}