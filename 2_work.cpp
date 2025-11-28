//площадь прямоугольного треугольника по двум катетам a,b
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, s;
    cout << "Введите правый катет: ";
    cin >> a;
    
    cout << "Введите второй катет: ";
    cin >> b;
    s = (a * b) / 2.0;
    cout << "Площадь треугольника: " << s << endl;
    return 0;

}
