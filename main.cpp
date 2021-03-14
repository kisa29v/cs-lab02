#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    int a, b, sum;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n'
         << "A - B = " << a - b << '\n'
         << "A * B = " << a * b << '\n'
         << "A / B = " << a / b << '\n';
    cout << "Выводим минимум";
    if(a<b)
    {
        cout << a;
    }
    if(a>b)
    {
        cout << b;
    }
    cout << "Выводим максимум";
    if(a>b)
    {
        cout << a;
    }
    if(b>a)
    {
        cout << b;
    }
}
