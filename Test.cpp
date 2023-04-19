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
    CHECK(f1 + f2 == Fraction(1511, 1000));
    CHECK(f1 - f2 == Fraction(-4303, 4500));
    CHECK(f1 * f2 == Fraction(617, 1800));
    CHECK(f1 / f2 == Fraction(1250, 5553));
    CHECK(!(f1 == f2));
    CHECK(!(f1 > f2));
    CHECK(f1 < f2);
    CHECK((f1++) == Fraction(23, 18));
    CHECK((f2++) == Fraction(1117, 500));
    CHECK(--f1 + f2 == Fraction(511, 1000));
}
TEST_CASE("Some Tests on float and Fraction")
{
    float f1 = 1.234;
    Fraction f2(5, 18);
    CHECK(f1 + f2 == Fraction(1511, 1000));
    CHECK(f1 - f2 == Fraction(4303, 4500));
    CHECK(f1 * f2 == Fraction(617, 1800));
    CHECK(f1 / f2 == Fraction(5553, 1250));
    CHECK(!(f1 == f2));
    CHECK(f1 > f2);
    CHECK(!(f1 < f2));
    CHECK((f1++) == Fraction(1117, 500));
    CHECK((f2++) == Fraction(23, 18));
    CHECK(--f1 + f2 == Fraction(2303, 4500));
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
