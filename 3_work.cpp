//является ли заданное целое число нечетным. 3 пример
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Введите целое число: ";
    cin >> n;
    
    cout << "Число нечётное: " << (n % 2) << endl;
    return 0;

}

