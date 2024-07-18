#include<stdio.h>
void main()
{
    int numbers[100],sum=0;
    int i,j,number;
    printf("enter how many numbers do you want");
    scanf("%d",&number);

    for (j=0;j<=number;j++)
    {
        printf("\ enter [%d] element",j);
        scanf("%d",&numbers[j]);

        sum+=numbers [i];
    }
     printf("sum of elements is %d",sum);
}
