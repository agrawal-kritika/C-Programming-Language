/* 1-14 Write a program to print a histogram of the frequencies of
   different characters in its input. */

#include<stdio.h>
#define SIZE 26  //size of array

int main()
{
    int c,i,j, length[SIZE];
    for(i=0;i<SIZE;i++)
    {
        length[i]=0;  //initializing values to 0
    }
    while((c=getchar())!=EOF)
    {
        if(c >= 'a' && c <= 'z') //alphabets only
        {
            length[c-'a']++;
        }
    }
    printf("\n Histogram(Horizontal):\n");
    for(i = 0; i < SIZE; i++)
    {
        if(length[i] != 0)
        {
            printf("%c", i+ 'a');
            for(j=1; j <= length[i]; j++)
            {
                printf(" $");
            }
            printf("\n");
        }
    }
}