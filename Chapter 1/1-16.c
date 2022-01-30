/* 1-16. Revise the main routine of the longest-line program so it
  will correctly print the length of arbitrary long input lines, and print as
  much as possible of the text. */

#include<stdio.h>
#define MAXLINE 1000
int  inputline(char [], int);
void copy(char [], char []);

int inputline(char line[] , int limit)
{
    int c,i;
    for(i = 0; i < limit-1 && (c=getchar())!= EOF && c!= '\n'; i++)
    {
        line[i] = c;  //pushes the input lines to s 
    }
    if(c == '\n')
    {
        line[i]= c;
        i++;    //length of the line
    }
    line[i]='\0';
    return(i);
}

void copy(char to[] , char from[])
{
    int i=0;
    while((to[i]= from[i]) !='\0')
        i++;
}

int main()
{
    int length , max=0 ;
    cha line[MAXLINE], longest_line[MAXLINE];
    while((length = inputline(line, MAXLINE)) > 0)
    {
        if( length > max)
        {
            max= length;
            copy(longest_line, line);
        }
    }
    if(max > 0)
    {
        printf("Longest line: %s", longest_line);
    }
    return 0;
}
