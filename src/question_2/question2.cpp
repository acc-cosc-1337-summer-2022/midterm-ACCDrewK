#include "question2.h"

bool test_config()
{
    return true;
}

double Receipt::calculate_tax() const
{
    return price * tax;
}

double Receipt::calculate_gratuity() const
{
    return price * (gratuity / 100); // convert percentage to decimal
}

double Receipt::display_receipt() const
{
    return price + calculate_gratuity() + calculate_tax();
}
