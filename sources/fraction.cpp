#include "Fraction.hpp"
using namespace ariel;
using namespace std;

// constructor for fraction
Fraction::Fraction()
{
    this->numerator = 0;
    this->denominator = 1;
}
Fraction::Fraction(int numerator, int denominator)
{
    if (denominator == 0)
    {
        throw invalid_argument("Denominator can't be 0");
    }
    this->numerator = numerator;
    this->denominator = denominator;
    this->reduction();
}

// convert float to fraction
ariel::Fraction::Fraction(float fraction1)
{
    Fraction(0, 1);
}

// basic GCD function
int ariel::_gcd(int number1, int number2)
{
    if (number2 == 0)
        return number1;
    return _gcd(number2, number1 % number2);
}

// reduction function so we will get the fraction in reduced form
void ::ariel::Fraction::reduction()
{
    int mygcd = _gcd(this->numerator, this->denominator);
    this->numerator /= mygcd;
    this->denominator /= mygcd;
}

int Fraction::getNumerator() const
{
    return this->numerator;
}

int Fraction::getDenominator() const
{
    return this->denominator;
}

// all the needed operators (+,-,*,/...) between two fraction numbers and fraction float (in that order)
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
// prefix ++
Fraction &Fraction::operator++()
{
    return *this;
}
// postfix ++
const Fraction Fraction::operator++(int)
{
    return Fraction(0, 1);
}
// prefix --
Fraction &Fraction::operator--()
{
    return *this;
}
// postfix --
const Fraction Fraction::operator--(int)
{
    return Fraction(0, 1);
}

ostream &ariel::operator<<(ostream &ostream, const Fraction &fraction)
{
    ostream << fraction.numerator << "/" << fraction.denominator;
    return ostream;
}

istream &ariel::operator>>(istream &istream, Fraction &fraction)
{

    return istream;
}
// all the needed operators (+,-,*,/...)  float and fraction numbers (in that order)
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
