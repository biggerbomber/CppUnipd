#include "Rational.h"

int main()
{
    Rational r1(7,8);
    Rational r2(5,6);

    std::cout<<r2+Rational(3)<<std::endl;
    std::cout<<r1+5<<std::endl;
    std::cout<<(r1-r2)<<std::endl;
    std::cout<<(r1+r2)<<std::endl;
    std::cout<<(r1*r2)<<std::endl;
    std::cout<<(100+(r1/r2)+100)<<std::endl;


    std::cout<< (r1<r2) <<std::endl;
    std::cout<< (r1>r2) <<std::endl;
    std::cout<< (r1==r2) <<std::endl;


    return 0;
}