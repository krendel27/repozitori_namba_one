#include <iostream>
using namespace std;

template <typename T> //шаблонная функция
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
    swamp(a, b); //вызов функции
    cout << a << "   " << b << '\n' << '\n';

    string c, d;
    cin >> c;
    cin >> d;
    swamp(c, d);
    cout << c << "   " << d << '\n';
    system("pause");
}
