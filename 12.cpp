#include <iostream>
using namespace std;

int a = 100, b = 20; // глобальные переменные a u b

void f1(int a)       // локальная переменная a
{
    a += 10;
    cout << "f1:\t" << a << "\t" << :a << endl; // 2
}

void f2 (int b)      // локальная переменная b
{
    b*= 2;
    cout << "f2\t"<< b << "\t" << a << endl;     // 4
}

int main()
{
    cout << "main:\t" << a << "\t" << b << endl; // 5
    f1(a);  f2(b);                                // 6
    cout << "main:\t" << a << "\t" << b << endl; // 7
    return 0;
}