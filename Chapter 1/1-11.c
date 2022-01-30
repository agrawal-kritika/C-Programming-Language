/* 1-11. How would you test the word count program? What kinds of input
 are most likely to uncover bugs if there are any? */
 
#include<stdio.h>
#define IN 1    //inside a word
#define OUT 0   //outside the word

int main()
{
    int c,newline,newword,newchar,flag;
    flag=OUT;
    newline = newword = newchar = 0;
    while((c=getchar())!=EOF)
    {
        newchar++;
        if(c=='\n')
            { newline++; }
        if(c==' '|| c == '\n' || c == '\t')
            { flag= OUT; }
        else if(flag == OUT)
        {
            flag = IN;
            newword++;
        }
        printf("\nLines: %2d Words: %4d Characters: %6d",newline,newword, newchar);
        return 0;
        
    }
    
}