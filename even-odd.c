#include<stdio.h>
#include<stdio.h>

void main()
{
    int num;
    system("cls");

    printf("\n\n enter any number : ");
    scanf("%d",&num);

    if(num%2==0)
        printf("\n\n given number is even %d ",num);
    else
        printf("\n\n given number is odd %d ",num);
    getch() ;
}
