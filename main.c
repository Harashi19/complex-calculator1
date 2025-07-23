#include <stdio.h>
#include "complex.h"

int main() {
    struct complex_number a, b, result;
    int option;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");


    printf("Enter operation: ");
    scanf("%d", &option);

    if (option >= 1 && option <= 4) {
        printf("Enter real and imaginary parts of first complex number:\n");
        scanf("%lf %lf", &a.real, &a.imag);
        printf("Enter real and imaginary parts of second complex number:\n");
        scanf("%lf %lf", &b.real, &b.imag);
    } else if (option == 5) {
        printf("Enter real and imaginary parts of a complex number:\n");
        scanf("%lf %lf", &a.real, &a.imag);
    }


    if (option == 1) {
        result = add(a, b);
        printf("Sum = ");
        print_complex(result);
    } else if (option == 2) {
        result = subtract(a, b);
        printf("Difference = ");
        print_complex(result);
    } else if (option == 3) {
        result = multiply(a, b);
        printf("Product = ");
        print_complex(result);
    } else if (option == 4) {
        result = divide(a, b);
        printf("Quotient = ");
        print_complex(result);
    } else if (option == 5) {
        double mod = modulus(a);
        printf("Modulus = %.2f\n", mod);
    } else {
        printf("Invalid option!\n");
        return 1;
    }




   // print_complex(result);
    return 0;
}
