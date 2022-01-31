/* 3-2. Write a function escape(s,t) that converts characters like
 newline and tab into visible escape sequences like \n and \t as it copies
 the string t to s. Use a switch. Write a function for the other direction as
 well, converting escape sequences into the real characters. */

#include<stdio.h>
#define SIZE 200

int inputline(char s[], int limit)
{
    int c,i;
    for(i = 0; i < limit-1 && (c=getchar())!= EOF && c!='\n'; i++)
    {
        s[i]=c;
    }
        if( c == '\n')
        {
            s[i++]= c;
        }
    
    s[i]='\0';
    return i;
}
void escape(char s[], char t[])
{
    int i,j;
    for(i=j=0; t[i] != '\0'; i++, j++)
    {
        switch(t[i])
        {
            case '\t': 
                s[j]= '\\';
                s[j++]= 't';
                break;
            case '\n':
                s[j]='\\';
                s[j++]= 'n';
                break;
            default:
                s[j]= t[i];
                break;
        }
    }
    s[j]='\0';
}
int main()
{
    char s[SIZE], t[SIZE];
    while (inputline(s,SIZE) > 0)
    {
        escape(s,t);
        printf("%s", s);
    }
    return 0;
}

