#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a, S, d;
    cout << "Введите диагональ квадрата: ";
    cin >> d;
    S = d * d / 2; 
    cout << "Площадь квадрата: " << S << endl;
    cout << "Периметр квадрата: " << sqrt(S) * 4;
}
