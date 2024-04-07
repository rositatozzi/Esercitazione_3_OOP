#include <iostream>
#include "ComplexNumber.hpp"
#include <cmath>

using namespace  std;


ostream& operator<<(ostream& os, const ComplexNumber& c)
{// voglio dare un valore usabile e gli oggetti ostream non possono essere copiati e devono essere usati così come sono
    if( c.immPart>0){
        if(c.realPart == 0){
            os<<c.immPart<<"i";
        }
        else{
            os<<c.realPart << "+" <<c.immPart<<"i";
        }
    }
    else if (c.immPart<0){
        if(c.realPart == 0){
            os<<c.immPart<<"i";
        }
        else{
            os<<c.realPart <<c.immPart<<"i";
        }
    }
    else{
        os<<c.realPart;
    }
    return os;
}

ComplexNumber operator+(const ComplexNumber& c1, const ComplexNumber& c2)
{
    double realPart = c1.realPart + c2.realPart;
    double immPart = c1.immPart + c2.immPart;
    ComplexNumber c(realPart,immPart);
    return c;
}

bool operator==(const ComplexNumber& c1, const ComplexNumber& c2)
{
    double tol = pow(10,-16);
    bool real = true;
    bool imm = true;
    if (fabs(c1.realPart-c2.realPart)>tol){
        real= false;
    }
    if(fabs(c1.immPart-c2.immPart)>tol){
        imm = false;
    }
    return (real && imm);
}

ComplexNumber conjugate(const ComplexNumber& c){
    ComplexNumber con(c.realPart,-c.immPart);
    return con;

}
