#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("\n enter how many numbers you want to sum :");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum+=i;
    }
     printf("\n the sum of first n naturals numbers are %d",sum);
}
