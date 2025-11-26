#include <stdio.h>

int main()
{
    char a;
    int b, c;

    printf("Which calculator you want (+, -, *, /):--  ");
    scanf(" %c", &a);  

    printf("Enter the first number: ");
    scanf("%d", &b);

    printf("Enter the second number: ");
    scanf("%d", &c);

    switch (a)
    {
    case '+':
        printf("Sum is: %d\n", b + c);
        break;

    case '-':
        printf("Subtraction is: %d\n", b - c); 
        break;

    case '*':
        printf("Multiplication is: %d\n", b * c); 
        break;

    case '/':
        if (c != 0) 
            printf("Division is: %d\n", b / c);
        else
            printf("Error: Division by zero not allowed!\n");
        break;

    default:
        printf("Invalid input! Please enter +, -, * or /\n"); 
        break;
    }

    return 0;
}
