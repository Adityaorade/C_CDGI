#include<stdio.h>
#include<stdlib.h>

int main(){
    float a,b,c;
    int Char;
    do{
        printf("\n\t Enter 1 for Addition");
        printf("\n\t Enter 2 for Subtraction");
        printf("\n\t Enter 3 for Multiplication");
        printf("\n\t Enter 4 for Division");
        printf("\n\t Enter 5 for Exit");
        printf("\n\t Enter your choice: ");
        scanf("%d",&Char);

        switch(Char)
        {
            case 1:
                printf("\n Enter any two numbers: ");
                scanf("%f%f",&a,&b);
                c = a + b;
                printf("\n Sum = %f\n",c);
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
                exit(0);

                
            default:
                printf("\n Enter correct choice\n");
        }

    }while(1);
}
