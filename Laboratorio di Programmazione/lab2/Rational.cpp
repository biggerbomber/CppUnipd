#include "Rational.h"


Rational::Rational(){}
Rational::Rational(int n) :Rational(n,1){}
Rational::Rational(int n, int d)
{
    if(d<=0){throw IllegalDenominatorExeption();}
    m_num=n;
    m_den=d;
}
Rational::Rational(const Rational& other)
{
    m_num=other.GetNum();
    m_den=other.GetDen();
    m_autoReduce=other.IsAutoReduce();
}

void Rational::SetNum(int n)
{
    m_num=n;
}

void Rational::SetDen(int d)
{
    if(d<=0){throw IllegalDenominatorExeption();}
    m_den=d;
}

void Rational::SetAutoReduce(bool b)
{
    m_autoReduce=b;
}

double Rational::to_double() const
{
    return m_num/(double)m_den;
}

Rational operator+(const Rational& r1, const Rational& r2)
{
    int newNum = r1.GetNum()*r2.GetDen()+r1.GetDen()*r2.GetNum();
    int newDen = r1.GetDen()*r2.GetDen();
    return Rational(newNum,newDen);
}
Rational operator-(const Rational& r1, const Rational& r2)
{
    int newNum = r1.GetNum()*r2.GetDen()-r1.GetDen()*r2.GetNum();
    int newDen = r1.GetDen()*r2.GetDen();
    return Rational(newNum,newDen);
}
Rational operator*(const Rational& r1, const Rational& r2)
{
    int newNum = r1.GetNum()*r2.GetNum();
    int newDen = r1.GetDen()*r2.GetDen();
    return Rational(newNum,newDen);
}
Rational operator/(const Rational& r1, const Rational& r2)
{
    int newNum = r1.GetNum()*r2.GetDen();
    int newDen = r1.GetDen()*r2.GetNum();
    return Rational(newNum,newDen);
}

bool operator==(const Rational& r1, const Rational& r2)
{
    return (r1-r2).GetNum()==0;
}
bool operator<(const Rational& r1, const Rational& r2)
{
    return (r1-r2).GetNum()<0;
}
bool operator>(const Rational& r1, const Rational& r2)
{
    return (r1-r2).GetNum()>0;
}

Rational operator+(const Rational& r1, int n)
{
    return Rational(n)+r1;
}

Rational operator+( int n,const Rational& r1)
{
    return Rational(n)+r1;
}
std::ostream& operator<<(std::ostream& os, const Rational& r)
{
    std::cout<<r.GetNum()<<"/"<<r.GetDen();
    return os;
}