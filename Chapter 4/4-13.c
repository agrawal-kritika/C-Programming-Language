/* 4-13. Write a recursive version of the function reverse(s), which
 reverses the string s in place. */

#include<stdio.h>
#include<string.h>

#define MAXLINE 100

int inputline(char line[],int maxline);
void reverse(char s[]);

int main()
{
    char s[MAXLINE];
    inputline(s,MAXLINE);
    reverse(s);
    printf("%s",s);
    return 0;
}

int inputline(char s[],int lim)
{
    int i,c;

    for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';i++)
        s[i] = c;
    if(c=='\n')
        s[i++]='\n';
    s[i]='\0';
}

void reverse(char s[])
{
    void reversed(char s[],int i,int len);
    reversed(s,0,strlen(s));
}

void reversed(char s[],int i,int len)
{
    int c,j;
    j = len - (i + 1);
    if( i < j )
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
        reversed(s,++i,len);
    }
}