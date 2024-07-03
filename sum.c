1.#include<stdio.h>
void main()
{
	int a=20,b=80,c;
	c=a+b;
	printf("the sum of two values are %d",c);
}



2.//SOURCE FOR CALUCULATER
#include<stdio.h>
void main()
{
    int a,b,c;
	printf("\n enter a value :");
	scanf("%d",&a);
	printf("\n enter b value :");
	scanf("%d",&b);

	c=a+b;
	printf("\n the sub of two values c=%d",c);
}




3.//TO PRINT A MATETER
#include<stdio.h>

void main()
{
    char name[100];
    printf("\n enter which you want to print\n\n");
    scanf("%s",name);
    printf("the given name is %s",name);

}



4.//FLOT-SOURCE CODE
#include<stdio.h>
void main()

{
    float a,b;
    printf("\n enter A and B values");
    scanf("%f%f",&a,&b);

    a=a+b;
    printf("\n\n the sum of two values are %f",a);
}




5.//simple biggest
#include<stdio.h>
void main()
{
	int a=40,b=10
    if(a>b)
    	printf("\n a is big %d",a);

}


6.
#include<stdio.h>
void main()
{
	int a=40,b=10
    if(a>b)
    	printf("\n a is big %d",a);
    
}




7.
#include<stdio.h>
void main ()
{
	char name[100];
	printf("\n enter any name : ");
	scanf("%s",name);
	printf("\n\n given name is %s",name);
}



8.
#include<stdio.h>
void main ()
{
	char name[15]="krishna";
	//printf("\nenter any name : ");
	//scanf("%s",name);
	printf("\n\n given name is %s",name);
}



9.\\to find avg
#include<stdio.h>
void main()
{
    int tel,hin,avg;
	printf("\n enter tel marks :");
	scanf("%d",&tel);
	printf("\n enter hin marks :");
	scanf("%d",&hin );

	avg=(tel+hin)/2;
	printf("\n the sub of two values avg=%d",avg);
}



10.//avg+total marks source code
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



11//highest lowest markes code
#include <stdio.h>

int main() {
    // Declare variables for marks in each subject
    int telugu, english, maths, science, social, hindi;
    int totalMarks;
    float averageMarks;
    int highestMarks, lowestMarks;

    // Input marks for each subject
    printf("Enter marks for Telugu: ");
    scanf("%d", &telugu);
    printf("Enter marks for English: ");
    scanf("%d", &english);
    printf("Enter marks for Maths: ");
    scanf("%d", &maths);
    printf("Enter marks for Science: ");
    scanf("%d", &science);
    printf("Enter marks for Social: ");
    scanf("%d", &social);
    printf("Enter marks for Hindi: ");
    scanf("%d", &hindi);

    // Calculate total marks
    totalMarks = telugu + english + maths + science + social + hindi;

    // Calculate average marks
    averageMarks = totalMarks / 6.0;

    // Initialize highest and lowest marks
    highestMarks = telugu;
    lowestMarks = telugu;

    // Determine the highest marks
    if (english > highestMarks) highestMarks = english;
    if (maths > highestMarks) highestMarks = maths;
    if (science > highestMarks) highestMarks = science;
    if (social > highestMarks) highestMarks = social;
    if (hindi > highestMarks) highestMarks = hindi;

    // Determine the lowest marks
    if (english < lowestMarks) lowestMarks = english;
    if (maths < lowestMarks) lowestMarks = maths;
    if (science < lowestMarks) lowestMarks = science;
    if (social < lowestMarks) lowestMarks = social;
    if (hindi < lowestMarks) lowestMarks = hindi;

    // Print results
    printf("Total Marks: %d\n", totalMarks);
    printf("Average Marks: %.2f\n", averageMarks);
    printf("Highest Marks: %d\n", highestMarks);
    printf("Lowest Marks: %d\n", lowestMarks);

    return 0;
}  


//faild subjects 
#include <stdio.h>

int main() {
    // Declare variables for marks in each subject
    int telugu, english, maths, science, social, hindi;
    int totalMarks;
    float averageMarks;
    int highestMarks, lowestMarks;

    // Input marks for each subject
    printf("Enter marks for Telugu: ");
    scanf("%d", &telugu);
    printf("Enter marks for English: ");
    scanf("%d", &english);
    printf("Enter marks for Maths: ");
    scanf("%d", &maths);
    printf("Enter marks for Science: ");
    scanf("%d", &science);
    printf("Enter marks for Social: ");
    scanf("%d", &social);
    printf("Enter marks for Hindi: ");
    scanf("%d", &hindi);

    // Calculate total marks
    totalMarks = telugu + english + maths + science + social + hindi;

    // Calculate average marks
    averageMarks = totalMarks / 6.0;

    // Initialize highest and lowest marks
    highestMarks = telugu;
    lowestMarks = telugu;

    // Determine the highest marks
    if (english > highestMarks) highestMarks = english;
    if (maths > highestMarks) highestMarks = maths;
    if (science > highestMarks) highestMarks = science;
    if (social > highestMarks) highestMarks = social;
    if (hindi > highestMarks) highestMarks = hindi;

    // Determine the lowest marks
    if (english < lowestMarks) lowestMarks = english;
    if (maths < lowestMarks) lowestMarks = maths;
    if (science < lowestMarks) lowestMarks = science;
    if (social < lowestMarks) lowestMarks = social;
    if (hindi < lowestMarks) lowestMarks = hindi;

    // Print results
    printf("Total Marks: %d\n", totalMarks);
    printf("Average Marks: %.2f\n", averageMarks);
    printf("Highest Marks: %d\n", highestMarks);
    printf("Lowest Marks: %d\n", lowestMarks);

    return 0;

    if(tel<35)
    printf("tel subject faild");
    if(eng<35)
    printf("eng subject faild");
    if(mat<35)
    printf("mat subject faild");
    if(sci<35)
    printf("sci subject faild");
    if(soc<35)
    printf("soc subject faild");
    if(hin<35)
    printf("hin subject faild");
}
