#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;   // вхідний аргумент
    double A;   // функціонально стала частина виразу
    double B;   // функціонально змінна частина виразу
    double y1;  // результат для скороченої форми if
    double y2;  // результат для повної форми if...else

    cout << "x = ";
    cin >> x;

    A = 4.95 * x * x;

    // Спосіб 1: розгалуження у скороченій формі
    if (x < -3.5)
        B = 4 + pow(x, -2);

    if (-3.5 <= x && x < 1)
        B = tan((3.5 + x) / 5);

    if (x >= 1)
        B = sin(3 * x) - cos(x);

    y1 = A + B;
    cout << "1) y = " << y1 << endl;

    // Спосіб 2: розгалуження у повній формі
    if (x < -3.5)
        B = 4 + pow(x, -2);
    else
        if (x < 1)
            B = tan((3.5 + x) / 5);
        else
            B = sin(3 * x) - cos(x);

    y2 = A + B;
    cout << "2) y = " << y2 << endl;

    return 0;
}
