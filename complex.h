#ifndef COMPLEX_H
#define COMPLEX_H

struct complex_number {
    double real;
    double imag;
};

struct complex_number add(struct complex_number a, struct complex_number b);
struct complex_number subtract(struct complex_number a, struct complex_number b);
void print_complex(struct complex_number c);

#endif
