#include<stdio.h>
void main()
{
    int option,a,b,c;
    printf("\n choose any option");
    printf("\n 1. add ");
    printf("\n 2. sub");
    printf("\n 3. mul");
    printf("\n 4. div");

    printf("\n\n\nenter any age");
    scanf("%d",&option);


    switch(option)
    {
        case 1:
        printf("\n\nyou have choosen sum of the two values ");
        printf("\nenter a value");
        scanf("%d",&a);
        printf("\n enter b value");
        scanf("%d",&b);
        c=a+b;
        printf("\n the sum of three values are %d",c);


        break;
        case 2:
        printf("\n\n\n you have choosen sub");
        printf("\nenter a value");
        scanf("%d",&a);
        printf("\n enter b value");
        scanf("%d",&b);
        c=a-b;
        printf("\n the sum of three values are %d",c);


        break;
        case 3:
        printf("\n\n\n\n you have choosen multiplication");
        printf("\nenter a value");
        scanf("%d",&a);
        printf("\n enter b value");
        scanf("%d",&b);
        c=a*b;
        printf("\n the sum of three values are %d",c);

        break;
        case 4:
        printf("\n\n\n\n\n you have chossen division");
        printf("\nenter a value");
        scanf("%d",&a);
        printf("\n enter b value");
        scanf("%d",&b);
        c=a/b;
        printf("\n the sum of three values are %d",c);

        break;
        default:
            printf("given age is invalid");
            break;
    }

}

