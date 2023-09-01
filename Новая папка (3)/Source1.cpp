#include <iostream>
using namespace std;

template <typename T> //��������� �������
void swamp(T& a, T& b) {
    T c;
    c = a;
    a = b;
    b = c;
};

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    swamp(a, b); //����� �������
    cout << a << "   " << b << '\n' << '\n';

    string c, d;
    cin >> c;
    cin >> d;
    swamp(c, d);
    cout << c << "   " << d << '\n';
    system("pause");
}
