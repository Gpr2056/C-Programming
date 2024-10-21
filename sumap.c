//To find sum of n terms in an AP
#include <stdio.h>
int main()
{
    int a,d,n,sum;
    printf("Enter the value of n:\n");
    scanf(" %d",&n);
    printf("Enter the value of a:\n");
    scanf(" %d",&a);
    printf("Enter the common diff:\n");
    scanf(" %d",&d);
    sum=n*(2*a+(n-1)*d)/2;
    printf("Sum = %d",sum);
    return 0;
}