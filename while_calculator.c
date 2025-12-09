#include<stdio.h>
int main(){
    float a,b,c;
    int ch;
    int flag = 1;   // flag initially true

    while(flag)     // loop chalega jab tak flag = 1 hai
    {
        printf("\n 1. Addition");
        printf("\n 2. Subtraction");
        printf("\n 3. Multiplication");
        printf("\n 4. Division");
        printf("\n 5. Exit");
        printf("\n Enter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("\n Enter any two numbers: ");
                scanf("%f%f",&a,&b);
                c = a + b;
                printf("\n Sum = %.2f \n",c);
                break;

            case 2:
                printf("\n Enter any two numbers: ");
                scanf("%f%f",&a,&b);
                c = a - b;
                printf("\n Subtraction = %f\n",c);
                break;

            case 3:
                printf("\n Enter any two numbers: ");
                scanf("%f%f",&a,&b);
                c = a * b;
                printf("\n Multiplication = %f\n",c);
                break;

            case 4:
                printf("\n Enter any two numbers: ");
                scanf("%f%f",&a,&b);
                c = a / b;
                printf("\n Division = %f\n",c);
                break;

            case 5:
                flag = 0;   // loop band ho jayega
                break;

            default:
                printf("\n Enter correct choice\n");
        }
    }

    return 0;
}
