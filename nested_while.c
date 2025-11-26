#include <stdio.h>

int main() {
    int i = 1;
    int j;

    // bhar wala loop / outer  loop (rows)
    while(i <= 5) {

        j = 1;
        //  ander wala loop /  Inner  loop (columns)
        while(j <= i) {
            printf("*");
            j++;   // Move to next column
        }

        printf("\n"); // Next line after finishing inner loop
        i++;          // Move to next row
    }

    return 0;
}

