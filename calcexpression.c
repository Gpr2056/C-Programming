//To make a calculator that takes expressions to compute
#include <stdio.h>
#include <math.h>
int main()
{
    double x,y,out;
    char s;
    printf("Enter your operation: ");
    scanf("%lf %c %lf",&x,&s,&y);
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