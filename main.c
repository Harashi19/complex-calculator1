#include <stdio.h>
#include "complex.h"

int main() {
    struct complex_number a, b, result;

    printf("Enter real and imaginary parts of the first complex number: ");
    scanf("%lf %lf", &a.real, &a.imag);

    printf("Enter real and imaginary parts of the second complex number: ");
    scanf("%lf %lf", &b.real, &b.imag);

    result = add(a, b);

    printf("Sum = ");
    print_complex(result);

    return 0;
}
