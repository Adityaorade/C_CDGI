#include<stdio.h>
int main() {
    int n, fact = 1;
    printf("Enter the factorial number: ");
    scanf("%d", &n);

    int i = n;
    printf("Sequence: ");
    while(i >= 1) {
        printf("%d", i);
        fact = fact * i;

        if(i > 1) {
            printf(" * ");
        }
        i--;
    }

    printf(" = %d", fact);
    return 0;
}
