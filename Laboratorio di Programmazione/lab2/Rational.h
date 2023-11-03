#include <iostream>
class Rational
{
public:
    Rational();
    Rational(int);
    Rational(int,int);
    Rational(const Rational&);

    int GetNum() const {return m_num;};
    int GetDen() const {return m_den;};
    bool IsAutoReduce() const {return m_autoReduce;};

    void SetNum(int);
    void SetDen(int);
    void SetAutoReduce(bool);
    double to_double() const;

    Rational& operator=(const Rational& r2);
private:
    int m_num{0};
    int m_den{1};
    bool m_autoReduce{false};
};
class IllegalDenominatorExeption{};

Rational operator+(const Rational& r1, const Rational& r2);
Rational operator-(const Rational& r1, const Rational& r2);
Rational operator*(const Rational& r1, const Rational& r2);
Rational operator/(const Rational& r1, const Rational& r2);

//Rational operator+(const Rational& r1, int n);
//Rational operator+(int n,const Rational& r1);

bool operator==(const Rational& r1, const Rational& r2);
bool operator<(const Rational& r1, const Rational& r2);
bool operator>(const Rational& r1, const Rational& r2);

std::ostream& operator<<(std::ostream& os, const Rational& r);