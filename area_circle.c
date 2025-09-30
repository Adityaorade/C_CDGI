#include<stdio.h>

int main(){
    float area, r;
    const float pi = 3.14;  

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);  

    area = r * r * pi;  

    printf("The area of the circle is: %.2f", area);  

    return 0;
}
