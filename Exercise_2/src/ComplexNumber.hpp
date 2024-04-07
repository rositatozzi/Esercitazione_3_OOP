#pragma once
#include <iostream>

using namespace std;

struct ComplexNumber{
    double realPart;
    double immPart;

    ComplexNumber()=default;
    ComplexNumber(double a, double b){
        realPart = a;
        immPart = b;
    }
    ComplexNumber(int a, int b){
        realPart = double(a);
        immPart = double(b);
    }
};

ostream& operator<<(ostream& os, const ComplexNumber& c);

ComplexNumber operator+(const ComplexNumber& c1, const ComplexNumber& c2);
bool operator==(const ComplexNumber& c1, const ComplexNumber& c2);

ComplexNumber conjugate(const ComplexNumber& c);
