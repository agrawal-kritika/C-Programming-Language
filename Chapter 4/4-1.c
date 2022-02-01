/* 4-1. Write the function strindex(s,t) which returns the position of
 the rightmost occurrence of t in s, or -1 if there is none. */


#include <stdio.h>
#include <string.h>

#define MAXLEN 1000
 
int getLine(char s[], int lim)
{
	int c, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
		s[i] = c;
	}
	if (c == '\n') {
		s[i++] = c;
	}
	s[i] = '\0';
	return i;
}


int strindex(char s[], const char t[])
{
	int i, j, k;
	for (i = strlen(s) - strlen(t) ; i >= 0 ; i--) {
		for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++ , k++) 
			;
			
		if (k > 0 && t[k] == '\0') {
			return i;
		}
	}
	return -1;
}

int main()
{
	char line[MAXLEN];
	const char pattern[] = "ould"; 
	int pos; 
    printf("\nEnter the line: ");
	while (getLine(line, MAXLEN) > 0) {
		if ((pos = strindex(line, pattern)) < 0) {
			printf("Not found\n");
		}
		else {
			printf("%i\n", pos+1);
		}
    } 
	return 0;
}