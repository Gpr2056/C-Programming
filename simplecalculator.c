//Simple calculator program
#include <stdio.h>
#include <math.h>
int main()
{
    double x,y,out;
    char s;
    printf("Enter the value of x & y:\n");
    scanf("%lf %lf",&x,&y);
    printf("Select operation: +,-,*,/,^\n");
    scanf(" %c",&s);
    switch (s)
    {
        case '+':
        out=x+y;
        break;
        case '-':
        out=x-y;
        break;
        case '*':
        out=x*y;
        break;
        case '/':
        out=x/y;
        break;
        case '^':
        out=pow(x,y);
        break;
        default:
        printf("Operation invalid\n");
        break;
    }
    printf("Your output is %.2lf",out);
    return 0;
}