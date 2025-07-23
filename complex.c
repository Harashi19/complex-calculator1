#include <stdio.h>
#include "complex.h"
#include "math.h"

struct complex_number add(struct complex_number a, struct complex_number b) {
    struct complex_number result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}
struct complex_number subtract(struct complex_number a, struct complex_number b) {
    struct complex_number result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}
struct complex_number multiply(struct complex_number a, struct complex_number b) {
    struct complex_number result;
    result.real = a.real * b.real - a.imag * b.imag;
    result.imag = a.real * b.imag + a.imag * b.real;
    return result;
}
struct complex_number divide(struct complex_number a, struct complex_number b) {
    struct complex_number result;
    double denominator = b.real * b.real + b.imag * b.imag;

    if (denominator == 0) {
        printf("Error: Division by zero.\n");
        result.real = result.imag = 0;
        return result;
    }

    result.real = (a.real * b.real + a.imag * b.imag) / denominator;
    result.imag = (a.imag * b.real - a.real * b.imag) / denominator;

    return result;
}
double modulus(struct complex_number c) {
    return sqrt(c.real * c.real + c.imag * c.imag);
}
int are_equal(struct complex_number a, struct complex_number b) {
    return (a.real == b.real) && (a.imag == b.imag);
}

void print_complex(struct complex_number c) {
    if (c.imag >= 0)
        printf("%.2f + %.2fi\n", c.real, c.imag);
    else
        printf("%.2f - %.2fi\n", c.real, -c.imag);
}
