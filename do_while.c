#include <stdio.h>

int main()
{
    float b, c;
    char op;
    char choice;

    do
    {
        printf("\nEnter operator (+ - * /):- ");
        scanf(" %c", &op);
        
        printf("Enter first number:- ");
        scanf("%f", &b);

        printf("Enter second number:- ");
        scanf("%f", &c);

        

        switch (op)
        {
        case '+':
            printf("Sum = %.2f\n", b + c);
            break;

        case '-':
            printf("Subtraction = %.2f\n", b - c);
            break;

        case '*':
            printf("Multiplication = %.2f\n", b * c);
            break;

        case '/':
            if (c != 0)
                printf("Division = %.2f\n", b / c);
            else
                printf("Error: Division by zero not allowed!\n");
            break;

        default:
            printf("Invalid operator! Please enter + - * /\n");
        }

        printf("\nDo you want to calculate again (y/n):- ");
        scanf(" %c", &choice); // whitespace fixes skipped input

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
