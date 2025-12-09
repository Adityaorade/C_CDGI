#include<stdio.h>
int main (){

    printf("\nExample of continue:\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
          //  printf("Skipping the value i = %d\n", i);
            continue;  // Skip printing 5th, move to the next iteration
        }
        printf("i = %d\n", i);
    }
}