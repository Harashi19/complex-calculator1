#ifndef COMPLEX_H
#define COMPLEX_H

struct complex_number {
    double real;
    double imag;
};

struct complex_number add(struct complex_number a, struct complex_number b);
struct complex_number subtract(struct complex_number a, struct complex_number b);
struct complex_number multiply(struct complex_number a, struct complex_number b);
struct complex_number divide(struct complex_number a, struct complex_number b);
double modulus(struct complex_number c);
void print_complex(struct complex_number c);

#endif
