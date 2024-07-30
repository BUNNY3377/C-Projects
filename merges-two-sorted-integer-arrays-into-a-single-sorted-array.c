#include<stdio.h>
int main()
{
    int arr1[]={1,3,5,7,9};
    int arr2[]={2,4,6,8,10};
    int size1 = 5 ; size2 = 5;
    int result[10];

    int i=0,j=0,k=0;
    while (i < size1 && j < size2)
    {
        if (arr1[i]<arr2[j])
        {
            result[k++]=arr1[i++]
        }
        else
        {
            result[k++]=arr2[j++];
        }
    }
    while (i < size1)
    {
        result[k++]=arr1[i++];
    }
    while (j < size2)
    {
        result[k++]=arr2[i++];
    }
    printf
}
