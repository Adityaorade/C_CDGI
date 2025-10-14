#include <stdio.h>

// int main() {
//     float num1, num2, result;
//     char operator;

//     printf("Enter first number: ");
//     scanf("%f", &num1);

//     printf("Enter an operator (+, -, *, /, %%): ");
//     scanf(" %c", &operator); // space before %c important

//     printf("Enter second number: ");
//     scanf("%f", &num2);

//     switch(operator) {
//         case '+':
//             result = num1 + num2;
//             printf("Result: %.2f\n", result);
//             break;

//         case '-':
//             result = num1 - num2;
//             printf("Result: %.2f\n", result);
//             break;

//         case '*':
//             result = num1 * num2;
//             printf("Result: %.2f\n", result);
//             break;

//         case '/':
//             if(num2 != 0) {
//                 result = num1 / num2;
//                 printf("Result: %.2f\n", result);
//             } else {
//                 printf("Error: Division by zero not allowed!\n");
//             }
//             break;

//         case '%':
//             if((int)num2 != 0) {
//                 printf("Result: %d\n", (int)num1 % (int)num2);
//             } else {
//                 printf("Error: Division by zero not allowed!\n");
//             }
//             break;

//         default:
//             printf("Error: Invalid operator!\n");
//     }

//     return 0;
// }