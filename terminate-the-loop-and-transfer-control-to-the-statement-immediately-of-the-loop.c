#include<stdio.h>
int main()
{
    int i;
    for (i=1; i <= 10; ++i)
    {
        if (i ==  5)
        {
            break;
        }
        printf("%d ",i);
    }
    printf("\noutside the loop\n");

    return 0;
}