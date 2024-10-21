//To check if a number is prime or composite
#include <stdio.h>
int main()
{
    int n,flag;flag=0;
    int i=2;
    printf("Enter your number: ");
    scanf(" %d",&n);
    while(i<n)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
        else
        flag=0;
        i++;
    }
    if (flag==0)
    printf("Your number is prime");
    else
    printf("Your number is composite");
    return 0;
}