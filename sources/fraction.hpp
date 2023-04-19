#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>

using namespace std;
namespace ariel
{
    class Fraction
    {
    private:
        int numerator;
        int denominator;

    public:
        Fraction(int numerator, int denominator);
        Fraction(float fraction1);
        Fraction operator+(Fraction fraction1) const;
        Fraction operator+(float fraction1) const;
        Fraction operator-(Fraction fraction1) const;
        Fraction operator-(float fraction1) const;
        Fraction operator*(Fraction fraction1) const;
        Fraction operator*(float fraction1) const;
        Fraction operator/(Fraction fraction1) const;
        Fraction operator/(float fraction1) const;
        bool operator==(Fraction fraction1) const;
        bool operator==(float fraction1) const;
        bool operator>(Fraction fraction1) const;
        bool operator>(float fraction1) const;
        bool operator<(Fraction fraction1) const;
        bool operator<(float fraction1) const;
        bool operator>=(Fraction fraction1) const;
        bool operator>=(float fraction1) const;
        bool operator<=(Fraction fraction1) const;
        bool operator<=(float fraction1) const;
        Fraction operator++(int fraction1) const;
        Fraction operator++();
        Fraction operator--(int fraction1) const;
        Fraction operator--();
        friend ostream &operator<<(ostream &ostream, const Fraction &fraction);
        friend istream &operator>>(istream &istream, const Fraction &fraction);
    };
    Fraction operator+(float fraction1, Fraction fraction2);
    Fraction operator-(float fraction1, Fraction fraction2);
    Fraction operator*(float fraction1, Fraction fraction2);
    Fraction operator/(float fraction1, Fraction fraction2);
    bool operator==(float fraction1, Fraction fraction2);
    bool operator>(float fraction1, Fraction fraction2);
    bool operator<(float fraction1, Fraction fraction2);
    bool operator>=(float fraction1, Fraction fraction2);
    bool operator<=(float fraction1, Fraction fraction2);

}

#endif