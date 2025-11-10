#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(0, ".1251");
    double x, y, z;
    double A = 0.3, B = 7.3, h = 0.2;

    cout << "Табулювання функцій:" << endl;
    cout << "y = cos(x/2)" << endl;
    cout << "z = sin(x + π/2) * cos(1/x)" << endl;
    cout << "на проміжку [" << A << "; " << B << "] з кроком " << h << endl;
    cout << "\nX\t\tY(X)\t\tZ(X)\n";

    for (x = A; x <= B + 0.1 * h; x += h)
    {
        y = cos(x / 2);
        z = sin(x + M_PI / 2) * cos(1 / x);
        cout << x << "\t\t" << y << "\t\t" << z << endl;
    }

    return 0;
}