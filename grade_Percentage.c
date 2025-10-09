#include <stdio.h>
int main() {
    float physics, chemistry, biology, mathematics, computer;
    float total, percentage;
    printf("Enter marks of Physics: ");
    scanf("%f", &physics);
    printf("Enter marks of Chemistry: ");
    scanf("%f", &chemistry);
    printf("Enter marks of Biology: ");
    scanf("%f", &biology);
    printf("Enter marks of Mathematics: ");
    scanf("%f", &mathematics);
    printf("Enter marks of Computer: ");
    scanf("%f", &computer);

  
total = physics + chemistry + biology + mathematics + computer;
    percentage = (total / 500) * 100;

  
    printf("\nTotal Marks = %.2f\n", total);
    printf("Percentage = %.2f\n", percentage);

  
    if (percentage >= 90) {
        printf("Grade: A\n");
    }
    else if (percentage >= 80) {
        printf("Grade: B\n");
    }
    else if (percentage >= 70) {
        printf("Grade: C\n");
    }
    else if (percentage >= 60) {
        printf("Grade: D\n");
    }
    else if (percentage >= 40) {
        printf("Grade: E\n");
    }
    else {
        printf("Grade: F\n");
    }

    return 0;
}
