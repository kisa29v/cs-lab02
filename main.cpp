#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    int a, b, sum;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n'
         << "A - B = " << a - b << '\n'
         << "A * B = " << a * b << '\n'
         << "A ������� B = " << a / b << '\n';
    cout << "������� �������";
    if(a<b)
    {
        cout << a;
    }
    if(a>b)
    {
        cout << b;
    }
    cout << "������� ��������";
    if(a>b)
    {
        cout << a;
    }
    if(b>a)
    {
        cout << b;
    }

}
