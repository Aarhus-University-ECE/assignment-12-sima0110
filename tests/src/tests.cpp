#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
    #include "duration.hpp"


// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

// Add your test cases. Dont forget to include header file. 

//(d)//
TEST_CASE("exercise d") {
    duration d1;
    REQUIRE(d1.getduration() == 0);
    duration d2(5);
    REQUIRE(d2.getduration() == 5);
    duration d3(10);
    REQUIRE(d3.getduration() == 10);
}

//(e)//
TEST_CASE("exercise e") {
    duration d4;
    REQUIRE(d4.getduration() == 0);
    d4.tick();
    duration d5(3);
    REQUIRE(d5.getduration() == 3);
    d5.tick(3);
}

//(f)//
TEST_CASE("exercise f") {
    duration d;
    REQUIRE(d.getduration() == 0);
    d.tick(10);
    REQUIRE(d.getduration() == 10);
} 

//(g)//
TEST_CASE("exercise g") {
    duration d;
    d.setAlarm(4);
    REQUIRE(d.tick() == false);
    REQUIRE(d.tick(5) == true);
    REQUIRE(d.tick(3) == false);
} 
