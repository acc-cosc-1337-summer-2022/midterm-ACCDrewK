#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification")
{
    REQUIRE(true == true);
}

TEST_CASE("test")
{
    REQUIRE(test_config() == true);
}

TEST_CASE("Test Receipt::calculate_tax function")
{
    Receipt test_receipt1 = Receipt(10, 20);
    REQUIRE(test_receipt1.calculate_tax() == 0.80);
    Receipt test_receipt2 = Receipt(20, 15);
    REQUIRE(test_receipt2.calculate_tax() == 1.6);
    Receipt test_receipt3 = Receipt(30, 10);
    REQUIRE(test_receipt3.calculate_tax() == 2.4);
}

TEST_CASE("Test Receipt::calculate_gratuity function")
{
    Receipt test_receipt1 = Receipt(10, 20);
    REQUIRE(test_receipt1.calculate_gratuity() == 2.0);
    Receipt test_receipt2 = Receipt(20, 15);
    REQUIRE(test_receipt2.calculate_gratuity() == 3.0);
    Receipt test_receipt3 = Receipt(30, 10);
    REQUIRE(test_receipt3.calculate_gratuity() == 3.0);
}

TEST_CASE("Test Receipt::display_receipt function")
{
    Receipt test_receipt1 = Receipt(10, 20);
    REQUIRE(test_receipt1.display_receipt() == 12.8);
    Receipt test_receipt2 = Receipt(20, 15);
    REQUIRE(test_receipt2.display_receipt() == 24.6);
    Receipt test_receipt3 = Receipt(30, 10);
    REQUIRE(test_receipt3.display_receipt() == 35.4);
}