#include <stdio.h>
#include "complex.h"

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

void print_complex(struct complex_number c) {
    if (c.imag >= 0)
        printf("%.2f + %.2fi\n", c.real, c.imag);
    else
        printf("%.2f - %.2fi\n", c.real, -c.imag);
}
