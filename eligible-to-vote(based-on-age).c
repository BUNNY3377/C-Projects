#include<stdio.h>
int main()
{
    int age;
    printf("enter your age : ");
    scanf("%d",&age);

    if(age>18)
    {
        printf("%d you are eligibel to vote.\n",age);
    }
    else
    {
        printf("%d you are not eligibel to vote yet.\n",age);
    }
    return 0;
}
