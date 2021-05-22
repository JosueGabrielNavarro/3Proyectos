#include <iostream>

using namespace std;

int main()
{
    float a, b, rst;

    cout << "Ingrese valor a: ";
    cin >> a;
    cout << "Ingrese valor b: ";
    cin >> b;

    rst = (a / b) + 1;
    cout.precision(2);
    cout << "\n el resultado es: " << rst << endl;

        return 0;
}