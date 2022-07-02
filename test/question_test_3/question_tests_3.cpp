#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification")
{
    REQUIRE(true == true);
}

TEST_CASE("test")
{
    REQUIRE(test_config() == true);
}

TEST_CASE("Test roll function")
{
    Die test_die = Die();
    for (int i{0}; i < 25; ++i)
    {
        int result = test_die.roll();
        REQUIRE(((result >= 1 && result <= 6)));
    }
}
