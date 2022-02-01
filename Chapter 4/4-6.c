/* 4-6. Add commands for handling variables. (it's easy to provide
 twenty-six variables with single-letter names). Add a variable for most
 recently printed value. */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

#define MAXOP 100
#define NUMBER '0'
#define BUFSIZE 100
#define MAXVAL 100

int sp = 0;
double val[MAXVAL];
char buf[BUFSIZE];
int bufp = 0;


int getop(char []);
void push(double);
double pop(void);
void clearstack();
void mathfunc(char[]);

int main(void)
{
    int type, var=0;
    double op2, op1, variable[26];
    char s[MAXOP];
    double l; //hold the final value of the operation

    printf("\n STACK OPERATIONS:\n'd': Doubles the characters\n'?': Print the top element of the stack\n's': Swap top 2 elements\n'c':Clear the stack\n");

    while((type = getop(s)) != EOF)
    {
        switch(type)
        {
                case NUMBER:
                        push(atof(s));
                        break;
                case '+':
                        push(pop()+pop());
                        break;
                case '*':
                        push(pop()*pop());
                        break;
                case '-':
                        op2 = pop();
                        push(pop()-op2);
                        break;
                case '/':
                        op2 = pop();
                        if(op2 != 0.0)
                            push(pop()/op2);
                        else
                            printf("error:zero divisor\n");
                        break;
                case '%':
                        op2 = pop();
                        if(op2 != 0.0)
                            push(fmod(pop(),op2));
                        else
                            printf("erro:zero divisor\n");
                        break;
                case '?':
                        op2 = pop();
                        printf("First element of Stack = %.8g ", op2);
                        push(op2);
                        break;
                case 'd':
                        op2 = pop();
                        push(op2);
                        push(op2);
                        break;
                case 's':
                        op1= pop();
                        op2= pop();
                        push(op1);
                        push(op2);
                        break;
                case 'c':
                        clearstack();
                        break;
                case '=':
                        pop();
                        if(var>='A' && var <='Z')
                            variable[var-'A']=pop();
                        else
                            printf("error: enter valid variable name\n");
                            break;
                        
                case '\n':
                        l = pop();
                        printf("\t%.8g\n",l);
                        break;
                default:
                        if(type>='A' && type<='Z')
                            push(variable[type-'A']);
                        else if(type =='l')
                            push(l);
                        else
                            printf("error: unknown command %s\n",s);
                        break;
        }
        var = type;
    }
    return 0;
}

void push(double f)
{
    if(sp < MAXVAL)
        val[sp++]=f;
    else
        printf("error:stack full, cant push %g\n",f);
}


double pop(void)
{
    if(sp>0)
        return val[--sp];
    else
    {
        printf("error: stack empty\n");
        return 0.0;
    }
}

int getch(void);
void ungetch(int);

int getop(char s[]) {
    int i, c;
    while ((s[0] = c = getch()) == ' ' || c == '\t')
        ;
    //s[1] = '\0';
    if (!isdigit(c) && c != '.')
        return c;       // not a number
    i = 0;
    if (c == '-' || isdigit(c))     // collect integer part along with '-'
        while (isdigit(s[++i] = c = getch()))
            ;
    if (c == '.')       // collect fraction part
        while (isdigit(s[++i] = c = getch()))
            ;
    s[i] = '\0';
    if (c != EOF)
        ungetch(c);
    if (strcmp(s, "-") == 0)
        return '-';
    return NUMBER;
}

int getch(void)
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
    if(bufp >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}

void clearstack()
{
    sp =0;
}

void mathfunc(char s[])
{
    double op3;
    if(strcmp(s,"sin")==0)
        push(sin(pop()));
    else if(strcmp(s,"cos")==0)
        push(cos(pop()));
    else if(strcmp(s,"exp")==0)
        push(exp(pop()));
    else if(strcmp(s,"pow")==0)
    {
        op3 = pop();
        push(pow(pop(),op3));
    }
    else
        printf("error: %s is not supported\n",s);
}