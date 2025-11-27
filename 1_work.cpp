#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    float x, y;
    cout << "Введите значение x" << endl;
    cin >> x;
    
    y = 1 + x/3 + fabs(x) + pow(x, 3) + 2;

    cout << "y = " << y << endl;
    return 0;
}