#include <stdio.h>
#include "complex.h"

int main() {
    struct complex_number a, b, result;
    int option;

    printf("Choose operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("Enter your option: ");
    scanf("%d", &option);


    printf("Enter real and imaginary parts of the first complex number: ");
    scanf("%lf %lf", &a.real, &a.imag);

    printf("Enter real and imaginary parts of the second complex number: ");
    scanf("%lf %lf", &b.real, &b.imag);

    if (option == 1) {
        result = add(a, b);
        printf("Sum = ");
    } else if (option == 2) {
        result = subtract(a, b);
        printf("Difference = ");
    } else if (option == 3) {
        result = multiply(a, b);
        printf("Product = ");
    } else {
        printf("Invalid option!\n");
        return 1;
    }


    print_complex(result);
    return 0;
}
