#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mathematics = 0;
    int science =0;
    int english = 0;
    int total = 0;
    float average = 0;
    char grade ;


    printf("Enter your mathematics marks:");
    scanf("%d",&mathematics);

    printf("Enter your science marks:");
    scanf("%d" ,&science);

    printf("Enter your english marks:");
    scanf("%d" ,&english);

    printf("\n");

    total = mathematics + science + english;

    printf("Total Marks: %d \n",total);

    average = total / 3.0;

    printf("Average Marks: %.2f \n",average);

    if (average >= 80 && average <= 100 )
    {
        printf("Grade:A\n");

    }
    else if (average >= 70)
    {
        printf("Grade:B\n");

    }
    else if (average >= 60)
    {
        printf("Grade:C\n");

    }
    else if (average >= 50)
    {
        printf("Grade:D\n");

    }
    else
    {
        printf("Grade:F\n");
    }

    if (mathematics < 40 || science < 40 || english < 40 )
    {
        printf("Result: Fail \n");

    }
    else
    {
        printf("Result: Pass\n");

    }

    return 0;
}
