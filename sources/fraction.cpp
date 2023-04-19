#include <numeric>
#include "Fraction.hpp"
using namespace ariel;

Fraction::Fraction(int numerator, int denominator)
{
    this->numerator = numerator;
    this->denominator = denominator;
}

ariel::Fraction::Fraction(float fraction1)
{
    Fraction(0, 1);
}

Fraction Fraction::operator+(Fraction fraction1) const
{
    return Fraction(0, 1);
}

Fraction Fraction::operator+(float fraction1) const
{
    return Fraction(0, 1);
}

Fraction Fraction::operator-(Fraction fraction1) const
{
    return Fraction(0, 1);
}
Fraction Fraction::operator-(float fraction1) const
{
    return Fraction(0, 1);
}
Fraction Fraction::operator*(Fraction fraction1) const
{
    return Fraction(0, 1);
}
Fraction Fraction::operator*(float fraction1) const
{
    return Fraction(0, 1);
}
Fraction Fraction::operator/(Fraction fraction1) const
{
    return Fraction(0, 1);
}
Fraction Fraction::operator/(float fraction1) const
{
    return Fraction(0, 1);
}
bool Fraction::operator==(Fraction fraction1) const
{
    return true;
}
bool Fraction::operator==(float fraction1) const
{
    return true;
}
bool Fraction::operator>(Fraction fraction1) const
{
    return true;
}
bool Fraction::operator>(float fraction1) const
{
    return true;
}
bool Fraction::operator<(Fraction fraction1) const
{
    return true;
}
bool Fraction::operator<(float fraction1) const
{
    return true;
}
bool Fraction::operator>=(Fraction fraction1) const
{
    return true;
}
bool Fraction::operator>=(float fraction1) const
{
    return true;
}
bool Fraction::operator<=(Fraction fraction1) const
{
    return true;
}
bool Fraction::operator<=(float fraction1) const
{
    return true;
}
Fraction Fraction::operator++(int fraction1) const
{
    return Fraction(0, 1);
}
Fraction Fraction::operator++()
{
    return Fraction(0, 1);
}

Fraction Fraction::operator--(int fraction1) const
{
    return Fraction(0, 1);
}
Fraction Fraction::operator--()
{
    return Fraction(0, 1);
}

ostream &ariel::operator<<(ostream &ostream, const Fraction &fraction)
{
    ostream << fraction.numerator << "/" << fraction.denominator;
    return ostream;
}

istream &operator>>(istream &istream, const Fraction &fraction)
{
    return istream;
}

Fraction ariel::operator+(float fraction1, Fraction fraction2)
{
    return Fraction(0, 1);
}
Fraction ariel::operator-(float fraction1, Fraction fraction2)
{
    return Fraction(0, 1);
}
Fraction ariel::operator*(float fraction1, Fraction fraction2)
{
    return Fraction(0, 1);
}
Fraction ariel::operator/(float fraction1, Fraction fraction2)
{
    return Fraction(0, 1);
}
bool ariel::operator==(float fraction1, Fraction fraction2)
{
    return true;
}
bool ariel::operator>(float fraction1, Fraction fraction2)
{
    return true;
}
bool ariel::operator<(float fraction1, Fraction fraction2)
{
    return true;
}
bool ariel::operator>=(float fraction1, Fraction fraction2)
{
    return true;
}
bool ariel::operator<=(float fraction1, Fraction fraction2)
{
    return true;
}
