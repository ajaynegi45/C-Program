#include <stdio.h>

int main() {
    float p, r, t, si;

    printf("Enter the principal amount: ");
    scanf("%f", &p);

    printf("Enter the rate of interest: ");
    scanf("%f", &r);

    printf("Enter the time period (in years): ");
    scanf("%f", &t);

    si = (p * r * t) / 100;

    printf("The simple interest: %f\n", si);
    printf("Total Amount: %f\n", si+p);



    return 0;
}