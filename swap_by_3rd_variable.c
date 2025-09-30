#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("The swap no  is: %d,%d", a, b);
    return 0;
}
