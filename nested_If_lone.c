#include <stdio.h>
int main()
{
    int age, income;

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your monthly income: ");
    scanf("%d", &income);

    if (age >= 21)
    { // first condition for lone check
        if (income >= 30000)
        { // second condition for checking the income
            printf("You are eligible for the loan.\n");
        }
        else
        {
            printf("Income insufficient for loan eligibility.\n");
        }
    }
    else
    {
        printf("You are not eligible for the loan due to age.\n");
    }

    return 0;
}