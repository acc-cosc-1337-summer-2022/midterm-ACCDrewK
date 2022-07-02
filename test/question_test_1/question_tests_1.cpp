#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification")
{
    REQUIRE(true == true);
}

TEST_CASE("test")
{
    REQUIRE(test_config() == true);
}

TEST_CASE("Verify Q1_Rectangle class functions")
{
    Q1_Rectangle test_rectangle_0{create_rectangle(5, 5)};
    REQUIRE(test_rectangle_0.get_length() == 5);
    REQUIRE(test_rectangle_0.get_width() == 5);
    REQUIRE(test_rectangle_0.calculate_area() == 25);

    Q1_Rectangle test_rectangle_1{create_rectangle(3, 10)};
    REQUIRE(test_rectangle_1.get_length() == 3);
    REQUIRE(test_rectangle_1.get_width() == 10);
    REQUIRE(test_rectangle_1.calculate_area() == 30);

    Q1_Rectangle test_rectangle_2{create_rectangle(10, 10)};
    REQUIRE(test_rectangle_2.get_length() == 10);
    REQUIRE(test_rectangle_2.get_width() == 10);
    REQUIRE(test_rectangle_2.calculate_area() == 100);
}