#include "question3.h"

bool test_config()
{
    return true;
}

int Die::roll() const
{
    // return random value between 1 and 6
    return (rand() % 6 + 1);
}