#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};
    int size = 5;
    int key = 3;

    printf("array elements : ");
    for (int i=0;i < size ; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");

    int found = 0;
    for (int i=0;i<size;i++)
    {
        if(arr[i] == key)
        {
            found =1;
            break;
        }
    }
    if (found)
    {
        printf("element %d found in array.\n",key);
    }
    else
    {
        printf("element %d not found in array.\n",key);
    }
    return 0;
}
