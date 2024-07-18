#include<stdio.h>
void main()
{
    int arr[]={1,2,3,4,5};
    int arr2[5];


    for(int i=0;i<5;i++)
    {
        arr2[i]=arr[i];
    }

    printf("\n elements of arr2 is \n");
    for(int i=0;i<5;i++)
    {
        printf("%d",arr2[i]);
        printf("\n");
    }
    printf("\n");
}
