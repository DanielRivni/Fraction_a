#include "doctest.h"
#include <stdexcept>
using namespace doctest;
#include <iostream>
#include <sstream>

#include "sources/Fraction.hpp"
using namespace ariel;

TEST_CASE("Some Tests on both Fraction")
{
    Fraction f1(2, 9);
    Fraction f2(1, 6);
    CHECK(f1 + f2 == Fraction(7, 18));
    CHECK(f1 - f2 == Fraction(1, 18));
    CHECK(f1 * f2 == Fraction(1, 27));
    CHECK(f1 / f2 == Fraction(4, 3));
    CHECK(!(f1 == f2));
    CHECK(f1 > f2);
    CHECK(!(f1 < f2));
    CHECK((f1++) == Fraction(11, 9));
    CHECK(--f1 + f2 == Fraction(-11, 18));
}

TEST_CASE("Some Tests on Fraction and float")
{
    Fraction f1(5, 18);
    float f2 = 1.234;
    CHECK(f1 + f2 == 1.511);
    CHECK(f1 - f2 == -0.956);
    CHECK(f1 * f2 == 0.342);
    CHECK(f1 / f2 == 0.225);
    CHECK(!(f1 == f2));
    CHECK(!(f1 > f2));
    CHECK(f1 < f2);
    CHECK((f1++) == Fraction(23, 18));
    CHECK((f2++) == 2.234);
    CHECK(--f1 + f2 == 0.511);
}
TEST_CASE("test Equality")
{
    CHECK(Fraction(3, 6) == Fraction(1, 2));
    CHECK(Fraction(3, 18) == Fraction(1, 6));
    CHECK(Fraction(1, 1) == Fraction(4, 4));
    CHECK(Fraction(-3, 9) == Fraction(-1, 3));
}
TEST_CASE("Division by 0")
{
    CHECK_THROWS(Fraction(5, 0));
    CHECK_THROWS(Fraction(-2, 0));
    CHECK_THROWS(Fraction(0, 0));
    CHECK_THROWS(Fraction(7, 18) / 0);
}
