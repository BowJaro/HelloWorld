// test12.cpp : This file contains the 'main' function. Program execution begins and ends there.
// sinn trào (đây là Ý đúng không?)
// Hello It's Me, SurgeousJP =))))))))
// tamđei :v
// minh
#include <iostream>
using namespace std;
class CDate
{
private:
    int d, m, y;
public:
    CDate();
    CDate(const CDate&);
    CDate(int, int, int);
    friend ostream& operator<< (ostream&, CDate&);
    ~CDate();
    CDate& operator= (CDate&);
};
int main()
{
    CDate a;
    CDate b(a);
    CDate c(20, 15, 2007);
    CDate d = a=c;
    cout << a << endl << b << endl << c << endl << d;
}
CDate::CDate()
{
    d = 28;
    m = 2;
    y = 2003;
}
CDate::CDate(const CDate& a)
{
    d = a.d;
    m = a.m;
    y = a.y;
}
CDate::CDate(int dd, int mm, int yy)
{
    d = dd;
    m = mm;
    y = yy;
}
ostream& operator<< (ostream& os, CDate& a)
{
    os << a.d << " " << a.m << " " << a.y;
    return os;
}
CDate::~CDate()
{
    return;
}
CDate& CDate::operator= (CDate& a)
{
    d = a.d;
    m = a.m;
    y = a.y;
    return *this;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
