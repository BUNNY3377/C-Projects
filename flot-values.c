n#include <stdio.h>

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


    if(telugu<35)
    printf("telugu subject faild");
    if(english<35)
    printf("english subject faild");
    if(maths<35)
    printf("maths subject faild");
    if(science<35)
    printf("science subject faild");
    if(social<35)
    printf("social subject faild");
    if(hindi<35)
    printf("hindi5 subject faild");
}
