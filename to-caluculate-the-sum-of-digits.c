#include<stdio.h>
void main()
{
    int i,sum=0,j;
    printf("enter any number");
    scanf("%d",&j);
    do
    {
        i=j%10;
        sum+=i;
        j/=10;
    }while(j!=0);
    printf("\n%d",sum);
    i++;
    return 0;
}
