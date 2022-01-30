/* 2-5. Write the function any(s1,s2), which returns the first
  location in a string s1 where any character from the string s2 occurs, or -1
  if s1 contains no characters from s2. (The standard library function strpbrk
  does the same job but returns a pointer to the location.) */

#include<stdio.h>
#define SIZE 1000

int any(char s1[], char s2[])
{
    int i,j,flag;
    for(i=0; s1[i]!='\0';i++)
    {
        char a = s1[i];
        for(j=0; s2[j]!='\0'; j++)
        {
            char b = s2[j];
            if(a==b)
            {
                return 1;
            }
         }   
    }
    return -1;
}
int main()
{
    char string1[SIZE], string2[SIZE];
    printf("Enter string 1 and string 2:\n");
    scanf("%s\n%s", string1, string2);
    printf("%d\n",any(string1, string2));
    return 0;
}