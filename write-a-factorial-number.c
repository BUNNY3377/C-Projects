#include<stdio.h>
void main()
{

    int i,n,factorial=1;

    printf("\n enter any number ");
    scanf("%d",&n);

    for(i=1;i<=n;i++);
    {
        factorial *=i;
    }
    printf("\n the factorial of %d is : %d",n,factorial);
}

