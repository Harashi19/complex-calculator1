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
    printf("6. Equality Check\n");
    printf("7. Exit\n");


    printf("Enter operation: ");
    scanf("%d", &option);

    if ((option >= 1 && option <= 4) || option == 6) {
        printf("Enter real and imaginary parts of first complex number:\n");
        scanf("%lf %lf", &a.real, &a.imag);
        printf("Enter real and imaginary parts of second complex number:\n");
        scanf("%lf %lf", &b.real, &b.imag);
    } else if (option == 5) {
        printf("Enter real and imaginary parts of a complex number:\n");
        scanf("%lf %lf", &a.real, &a.imag);
    }

    switch (option) {
        case 1:
            result = add(a, b);
            printf("Addition = ");
            print_complex(result);
            break;

        case 2:
            result = subtract(a, b);
            printf("Subtraction = ");
            print_complex(result);
            break;

        case 3:
            result = multiply(a, b);
            printf("Multiplication = ");
            print_complex(result);
            break;

        case 4:
            result = divide(a, b);
            printf("Division = ");
            print_complex(result);
            break;

        case 5:
            double mod = modulus(a);
            printf("Modulus = %.2f\n", mod);
            break;

        case 6:
            if (are_equal(a, b)) {
                printf("The complex numbers are equal.\n");
            }
            else {
                printf("The complex numbers are not equal.\n");
            }
            break;

        case 7:
            printf("goodbye!\n");
            break;

        default:
            printf("Invalid option!\n");
            return 1;
    }
    return 0;
}
