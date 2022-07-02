#include "question4.h"

bool test_config()
{
    return true;
}

double get_fahrenheit(double c)
{
    double fahrenheit{0.0};
    fahrenheit = 1.8 * c + 32; // (9 / 5) = 1.8
    return fahrenheit;
}