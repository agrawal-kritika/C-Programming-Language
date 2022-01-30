/* 2-2. Write a loop equivalent to the for loop above without using &&
 or ||. 
 for (i=0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; i++)
  s[i]=c 
 */ 

#include <stdio.h>

#define MAXLINE 1000         // maximum input line length 


int getLine(char s[], int limit)
{
	int c, i, flag;

	flag = 0;
	for (i = 0; !halt ; i++) {
		if (i > limit - 1) {
			flag = 1;

		else if ((c = getchar()) == '\n') {
			flag = 1;
		}
		else if (c == EOF) {
			flag = 1;
		}
		else {
			s[i] = c;
		}
	}
	i--;
	if (c == '\n') {
		s[i++] = c;
	}
	s[i] = '\0';
	return i;
}

int main(void)
{
	char line[MAXLINE];
	while (getLine(line, MAXLINE) > 0) 
    {
		printf("%s", line);
	}
	return 0;
}
