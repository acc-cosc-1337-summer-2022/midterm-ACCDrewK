#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"
#include <cmath>

TEST_CASE("Verify Test Configuration", "verification")
{
    REQUIRE(true == true);
}

TEST_CASE("test")
{
    REQUIRE(test_config() == true);
}

TEST_CASE("Test get_fahrenheit function")
{
    // Have to use abs and subtraction due to floating-point arithmetic
    REQUIRE(abs(get_fahrenheit(37) - 98.6) < 0.000001);
    REQUIRE(abs(get_fahrenheit(25) - 77) < 0.000001);
    REQUIRE(abs(get_fahrenheit(0) - 32) < 0.000001);
}
