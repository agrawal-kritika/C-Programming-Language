/* 2.4. Write an alternative version of squeeze(s1,s2) that deletes
  each character in s1 that matches any character in the string s2.*/

#include<stdio.h>
#define SIZE 100

void squeeze(char s1[], char s2[])
{
    int i,j,k=0;
    for(i=0; s1[i]!='\0'; i++)
    {
        for(j=0; s2[j]!='\0' && s1[i]!= s2[j];j++)
        { }
        if(s2[j]=='\0')
            s1[k++] = s1[i];
    }
    s1[k] = '\0';
}
int main()
{
    char string1[SIZE], string2[SIZE];
    printf("\nEnter string 1 and string 2:\n");
    scanf("%s\n%s", string1,string2);
    squeeze(string1,string2);
    printf("String :%s\n", string1);
    return 0;
}