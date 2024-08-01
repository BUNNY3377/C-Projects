#include<stdio.h>
#include<math.h>
int main()
{
    double angle = M_PI / 4;
    double result = tan(angle);

    printf("the tangent of %.2f radians is %.2f\n",angle,result);

    return 0;
}
