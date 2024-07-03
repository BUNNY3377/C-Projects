#include<stdio.h>
void main()

{
float tel,hin,eng,mat,sci,soc,total,avg;
printf("Enter tel Marks :");
scanf("%f",&tel);
printf("Enter hin Marks :");
scanf("%f",&hin);
printf("Enter eng Marks :");
scanf("%f",&eng);
printf("Enter mat Marks :");
scanf("%f",&mat);
printf("Enter sci Marks :");
scanf("%f",&sci);
printf("Enter soc Marks :");
scanf("%f",&soc);

total=tel+hin+eng+mat+sci+soc;

avg=(tel+hin+eng+mat+sci+soc)/6;

printf("The sum of all subjects total=%f",total);

printf("The sum of all subjects avg=%f",avg);
}
