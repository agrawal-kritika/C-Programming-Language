/* Write a program to count blanks, tabs and newlines */
#include<stdio.h>
int main()
{
    int c,blanks=0, tabs=0, newline =0;
    while((c=getchar())!=EOF)
    {
        if(c==' ')
            blanks++;
        else if(c == '\t')
            tabs++;
        else if(c == '\n')
            newline++;
    }
    printf("\n Number of:\nBlanks:%d\nTabs:%d\nNewlines:%d\n",blanks,tabs,newline);
    return 0;
}

//press Ctrl+D to exit (if doing in mac terminal)