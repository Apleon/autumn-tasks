#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

void mission_1(){
    setlocale(LC_ALL, "");
    int L;
    cin >> L;
    cout << L / 100 << endl;
}
void mission_2(){
    setlocale(LC_ALL, "");
    int M;
    cin >> M;
    cout << M / 1000 << endl;
}
void mission_3(){
    setlocale(LC_ALL, "");
    int B;
    cin >> B;
    cout << B / 1024 << endl;
}
void mission_4(){
    setlocale(LC_ALL, "");
    int A, B;
    cin >> A >> B;
    cout << A / B << endl;
}
void mission_5(){
    setlocale(LC_ALL, "");
    int A, B;
    cin >> A >> B;
    cout << A % B << endl;
}
void mission_6(){
    setlocale(LC_ALL, "");
    int A;
    cin >> A;
    cout << "Десятки:" << A / 10 << "\n" << "Единицы:" << A % 10 << endl;
}
void mission_7(){
    setlocale(LC_ALL, "");
    int A;
    cin >> A;
    cout << "Сумма цифр:" << A / 10 + A % 10 << "\nПроизведение цифр:" << A / 10 * A % 10 << endl;
}
void mission_8(){
    setlocale(LC_ALL, "");
    int A;
    cin >> A;
    cout << (A / 10) + (A % 10) * 10 << endl;
}
void mission_9(){
    setlocale(LC_ALL, "");
    int A;
    cin >> A;
    cout << A / 100;
}
void mission_10(){
    setlocale(LC_ALL, "");
    int A;
    cin >> A;
    cout << "Последняя цифра: " << A % 10 << "\nСредняя цифра:" << (A % 100) / 10 << endl;
}
void mission_11(){
    setlocale(LC_ALL, "");
    int A;
    cin >> A;
    cout << (A / 100) + (A % 100) / 10 + A % 10 << endl;
}
void mission_12(){
    setlocale(LC_ALL, "");
    int A;
    cin >> A;
    cout << (A / 100) + ((A % 100) / 10) * 10 + (A % 10) * 100 << endl;
}
void mission_13(){
    setlocale(LC_ALL, "");
    int A;
    cin >> A;
    cout << (A % 10) * 100 + (A / 100) * 10 + (A % 100) / 10 << endl;
}
void mission_14(){
    setlocale(LC_ALL, "");
    int A;
    cin >> A;
    cout << (A % 10) * 100 + (A / 100) * 10 + (A % 100) / 10 << endl;
}
void mission_15(){
    setlocale(LC_ALL, "");
    int A;
    cin >> A;
    cout << ((A % 100) / 10) * 100 + (A / 100) * 10 + (A % 10)<< endl;
}
void mission_16(){
    setlocale(LC_ALL, "");
    int A;
    cin >> A;
    cout << (A / 100) * 100 + (A % 10) * 10 + (A % 100) / 10 << endl;
}
void mission_17(){
    setlocale(LC_ALL, "");
    int A;
    cin >> A;
    cout << (A / 100) % 10 << endl;
}
void mission_18(){
    setlocale(LC_ALL, "");
    int A;
    cin >> A;
    cout << (A / 1000) % 10 << endl;
}
void mission_19(){
    setlocale(LC_ALL, "");
    int N;
    cin >> N;
    cout << N / 60 << endl;
}
void mission_20(){
    setlocale(LC_ALL, "");
    int N;
    cin >> N;
    cout << N / 3600 << endl;
}
void mission_21(){
    setlocale(LC_ALL, "");
    int N;
    cin >> N;
    cout << N % 60 << endl;
}
void mission_22(){
    setlocale(LC_ALL, "");
    int N;
    cin >> N;
    cout << N % 3600 << endl;
}
void mission_23(){
    setlocale(LC_ALL, "");
    int N;
    cin >> N;
    cout << (N % 3600) % 60<< endl;
}
void mission_24(){
    setlocale(LC_ALL, "");
    int K;
    cin >> K;
    cout << K % 7 << endl;
}
void mission_25(){
    setlocale(LC_ALL, "");
    int K;
    cin >> K;
    cout << (K + 3) % 7 << endl;
}
void mission_26(){
    setlocale(LC_ALL, "");
    int K;
    cin >> K;
    cout << (K % 7) + 1 << endl;
}
void mission_27(){
    setlocale(LC_ALL, "");
    int K;
    cin >> K;
    cout << ((K + 4) % 7) + 1 << endl;
}
void mission_28(){
    setlocale(LC_ALL, "");
    int K, N;
    cin >> K >> N;
    cout << ((K + N + 2) % 7) + 1 << endl;
}
void mission_29(){
    setlocale(LC_ALL, "");
    int A, B, C;
    cin >> A >> B >> C;;
    cout << "Размещённые:" << (A % C) * (B % C) << "\nНе занятая:"<< A * B - ((A % C) * (B % C)) * pow(C, 2) << endl;
}
void mission_30(){
    setlocale(LC_ALL, "");
    int YEAR;
    cin >> YEAR;
    cout << ((YEAR - 1) / 100) + 1 << endl;
}