#include <stdio.h>
int main()
{
    int a;
    printf(" enter the number ");
    scanf("%d", &a);
    if (a > 0)
    {
        printf(" positive ");
    }
    else
    {
        printf(" negative  ");
    }
    if (a % 5 == 0)
    {
        printf(" divisible by 5");
    }
    else
    {
        printf("the no not divisible ");
    }
    return 0;
}
