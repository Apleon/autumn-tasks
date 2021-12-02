#include <iostream>
#include <cmath>
using namespace std;

void mission_1(){
    setlocale(LC_ALL,"");
    double a;
    cout << "Введите значения a:";
    cin >> a;
    double P;
    P = 4 * a;
    cout << "Периметр квадрата равен: " << P << '\n';
} 