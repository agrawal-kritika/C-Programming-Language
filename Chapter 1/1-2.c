/* Ex 1-2. Experiment to find out what happens when prints's argument string contains \c, where c is
some character not listed above. */

#include<stdio.h>
int main()
{
    printf("Hello world\n\c");
    return 0;
}

/* On executing this it displays an warning stating that \c - unknown escape sequence.
It displays the message Hello World and prints c in the next line */