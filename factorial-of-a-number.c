#include<stdio.h>
void main ()
{
   int option,num,reversedNum=0,originalNum=0,remainder,i,n,factorial=1;
  printf("\n choose any option :");
  printf("\n 1.Palindrome ");
  printf("\n 2.Factorial");
  printf("\n 3.Even ");

  printf("\n\n\n Enter Any Option :");
  scanf("%d",&option);


  switch(option)
    {

  case 1:
    printf("Enter A Integer :");
    scanf("%d",&num);
    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }
    break;
  case 2:
    printf("Enter Any Number :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
     factorial *=i;

    }
printf("\n the factorial of %d is :%d\n",n,factorial);


  case 3:
    printf("Enter Any Number :");
    scanf("%d",&num);

    if(num>0 && num%2==0)
    {
        printf("\n\n given number is +ve and even");
    }
    else if (num>0)
    {
        printf("\n\n given number is +ve and not even number");
    }
    else
    {
        printf("\n\n given number is a -ve number");
    }

    default:
    printf("\n\n\n given age is invalid");
     break;

    }




}
