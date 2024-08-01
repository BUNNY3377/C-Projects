#include<stdio.h>
#include<math.h>
int main()
{
    double value = 0.5;
    double result = acos(value);

    printf("the arccosine of %.2f is %.2f radians\n",value,result);

    return 0;
}
