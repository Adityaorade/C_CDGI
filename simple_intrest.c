#include <stdio.h>
int main()
{
    float p, r, t, si;

    printf("Enter Principal: ");
    scanf("%f", &p);

    printf("Enter  Rate: ");
    scanf("%f", &r);
    printf("Enter time : ");
    scanf("%f", &t);
    si=(p*r*t)/100;

    printf("The Simple intrest :%f\n", si);

    return 0;
}