#include <stdio.h>
int main()
{
    int a, b;
    printf("enter the first number");
    scanf("%d", &a);
    printf("enter the second number");
    scanf("%d", &b);
    if (a > b)
    {
        printf(" first no is grater ");
    }
    else
    {
        printf("second no is grater ");
    }
    return 0;
}