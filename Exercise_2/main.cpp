#include <iostream>
#include "ComplexNumber.hpp"
using namespace std;

int main()
{
    ComplexNumber c1(-1,0);
    ComplexNumber c2(0,-1);
    cout<<c1<<endl;
    cout<<c1+c2<<endl;
    cout<<(c1==c2)<<endl;
    cout<<conjugate(c2)<<endl;
    return 0;
}
