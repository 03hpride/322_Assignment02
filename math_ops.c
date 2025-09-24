// --------- FUNCTION IMPLEMENTATIONS ------------

float multiply(float x, float y) 
{
    return x * y;
}

float add(float x, float y) 
{
    return x + y;
}

// --------- FUNCTION IMPLEMENTATIONS ------------

float square(float x) 
{
    return x * x;
}

float cube(float x) 
{
    return x * x * x;
}

float pow(float base, int exponent) 
{
    float res = 1;
    for (int i = 0; i < exponent; i++) 
    {
        res *= base;
    }
    return res;
}

// --------- SIN AND COS IMPLEMENTATIONS ------------

#define PI 3.14159265358979323846

// Factorial helper (returns int! keep for small values only)
int factorial(int n) 
{
    int res = 1;
    for (int i = 1; i <= n; i++) 
    {
        res *= i;
    }
    return res;
}

// Taylor series for sin(x) (x in degrees, steps ~10)
float sin_taylor(float x, int steps) 
{
    float rad = x * (PI / 180.0f);   // degrees -> radians
    float result = 0.0f;

    for (int n = 0; n < steps; n++) 
    {
        float term = (pow(-1, n) * pow(rad, 2 * n + 1)) / factorial(2 * n + 1);
        result += term;
    }
    return result;
}

// Taylor series for cos(x) (x in degrees, steps ~10)
float cos_taylor(float x, int steps) 
{
    float rad = x * (PI / 180.0f);   // degrees -> radians
    float result = 0.0f;

    for (int n = 0; n < steps; n++) 
    {
        float term = (pow(-1, n) * pow(rad, 2 * n)) / factorial(2 * n);
        result += term;
    }
    return result;
}
