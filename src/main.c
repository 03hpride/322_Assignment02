#include <stdio.h>

// Declare functions from math_ops.c
float sin_taylor(float x, int steps);
float cos_taylor(float x, int steps);

int main() {
    int steps = 10;
    float angle = 45.0;

    // Call sin() and print result
    printf("sin(%f) = %f\n", angle, sin_taylor(angle, steps));

    // Call cos() and print result
    printf("cos(%f) = %f\n", angle, cos_taylor(angle, steps));

    return 0;
}
