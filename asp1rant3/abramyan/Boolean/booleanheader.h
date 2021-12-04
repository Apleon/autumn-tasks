#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

void mission_1(){
    setlocale(LC_ALL, "");
    int A;
    cin >> A;
    if(A > -1){
        cout << "Positive" << '\n';
    }
    else{
        cout << "Negative" << '\n';
    }
}
void mission_2(){
    setlocale(LC_ALL, "");
    int A;
    cin >> A;
    if(A % 2 != 0){
        cout << "!%2" << '\n';
    }
    else{
        cout << "%2" << '\n';
    }
}
void mission_3(){
    setlocale(LC_ALL, "");
    int A;
    cin >> A;
    if(A % 2 == 0){
        cout << "%2" << '\n';
    }
    else{
        cout << "!%2" << '\n';
    }
}
void mission_4(){
    setlocale(LC_ALL, "");
    int A, B;
    cin >> A >> B;
    cout << (A >= 0 && B <= 3) << '\n';
}
void mission_5(){
    setlocale(LC_ALL, "");
    int A, B;
    cin >> A >> B;
    cout << (A >= 0 || B < -2) << '\n';
}
void mission_6(){
    setlocale(LC_ALL, "");
    int A, B, C;
    cin >> A >> B >> C;
    cout << (A < B && B < C) << '\n';
}
void mission_7(){
    setlocale(LC_ALL, "");
    int A, B, C;
    cin >> A >> B >> C;
    cout << (((A<B) and (B<C)) or ((A>B) and (B>C))) << '\n';
}
void mission_8(){
    setlocale(LC_ALL, "");
    int A, B;
    cin >> A >> B;
    cout << ((A % 2 != 0) && (B % 2 != 0)) << '\n';
}
void mission_9(){
    setlocale(LC_ALL, "");
    int A, B;
    cin >> A >> B;
    cout << ((A % 2 != 0) || (B % 2 != 0)) << '\n';
}
void mission_10(){
    setlocale(LC_ALL, "");
    int A, B;
    cin >> A >> B;
    cout << ((A % 2 != 0 && B % 2 == 0) || (A % 2 == 0 && B % 2 != 0)) << '\n';
}
void mission_11(){
    setlocale(LC_ALL, "");
    int A, B;
    cin >> A >> B;
    cout << (A % 2 == 0 && B % 2 == 0 || A % 2 != 0 && B % 2 != 0) << '\n';
}
void mission_12(){
    setlocale(LC_ALL, "");
    int A, B, C;
    cin >> A >> B >> C;
    cout << ((A > 0) && (B > 0) && (C > 0)) << '\n';
}
void mission_13(){
    setlocale(LC_ALL, "");
    int A, B, C;
    cin >> A >> B >> C;
    cout << ((A > 0) || (B > 0) || (C > 0)) << '\n';
}
void mission_14(){
    setlocale(LC_ALL, "");
    int A, B, C;
    cin >> A >> B >> C;
    cout << (A > 0 && B < 0 && C < 0 || A < 0 && B > 0 && C < 0 || A < 0 && B < 0 && C > 0) << endl;
}
void mission_15(){
    setlocale(LC_ALL, "");
    int A, B, C;
    cin >> A >> B >> C;
    cout << (A > 0 && B > 0 && C < 0 || A < 0 && B > 0 && C > 0 || A > 0 && B < 0 && C > 0) << endl;
}
void mission_16(){
    setlocale(LC_ALL, "");
    int A;
    cin >> A;
    cout << (A % 2 !=0 && A > 99 && A < 1000) << endl;
}
void mission_17(){
    setlocale(LC_ALL, "");
    int A;
    cin >> A;
    cout << (A % 2 ==0 && A > 9 && A < 100) << endl;
}
void mission_18(){
    setlocale(LC_ALL, "");
    int A, B, C;
    cin >> A >> B >> C;
    cout << (A == B || A == C || B == C) << endl;
}
void mission_19(){
    setlocale(LC_ALL, "");
    int A, B, C;
    cin >> A >> B >> C;
    cout << ((A == (-1) * B) || (A == (-1) * C) || (B == (-1) * C)) << endl;
}
void mission_20(){
    setlocale(LC_ALL, "");
    int A;
    cout << ((A / 100) != (A % 100 / 10) && (A / 100) != (A % 10) && (A % 100 / 10) != (A % 10)) << endl;
}
void mission_21(){
    setlocale(LC_ALL, "");
    int A;
    cin >> A;
    cout << (((A / 100) < (A % 100 / 10)) && ((A % 100 / 10) < (A % 10))) << endl;
}
void mission_22(){
    setlocale(LC_ALL, "");
    int A;
    cin >> A;
    cout << ((A / 100) > (A % 100 / 10) && (A % 100 / 10) > (A % 10) || (A / 100) < (A % 100 / 10) && (A % 100 / 10) < (A % 10)) << endl;
}
void mission_23(){
    setlocale(LC_ALL, "");
    int A;
    cin >> A;
    cout << (A % 10 == A / 1000 && A % 100 / 10 == A % 1000 / 100) << endl;
}
void mission_24(){
    setlocale(LC_ALL, "");
    double D, A, B, C;
    cin >> A >> B >> C;
    D = pow(B, 2) - (4 * A * C);
    cout << (D > -1) << endl;
}
void mission_25(){
    setlocale(LC_ALL, "");
    int X, Y;
    cin >> X >> Y;
    cout << (X < 0 && Y > 0) << endl;
}
void mission_26(){
    setlocale(LC_ALL, "");
    int X, Y;
    cin >> X >> Y;
    cout << (X > 0 && Y < 0) << endl;
}
void mission_27(){
    setlocale(LC_ALL, "");
    int X, Y;
    cin >> X >> Y;
    cout << ((X < 0 && Y > 0) || (X < 0 && Y < 0)) << endl;
}
void mission_28(){
    setlocale(LC_ALL, "");
    int X, Y;
    cin >> X >> Y;
    cout << (X > 0 && Y > 0 || X < 0 && Y < 0) << endl;
}
void mission_29(){
    setlocale(LC_ALL, "");
    int X, Y, X1, Y1, X2, Y2;
    cin >> X >> Y >> X1 >> Y1 >> X2 >> Y2;
    cout << (X >= X1 && X <= X2 && Y >= Y1 && Y <= Y2) << endl;
}
void mission_30(){
    setlocale(LC_ALL, "");
    int A, B, C;
    cin >> A >> B >> C;
    cout << ((A == B) && (B == C) && (A == C)) << endl;
}
void mission_31(){
    setlocale(LC_ALL, "");
}
void mission_32(){
    setlocale(LC_ALL, "");
}
void mission_33(){
    setlocale(LC_ALL, "");
}
void mission_34(){
    setlocale(LC_ALL, "");
}
void mission_35(){
    setlocale(LC_ALL, "");
}
void mission_36(){
    setlocale(LC_ALL, "");
}
void mission_37(){
    setlocale(LC_ALL, "");
}
void mission_38(){
    setlocale(LC_ALL, "");
}
void mission_39(){
    setlocale(LC_ALL, "");
}
void mission_40(){
    setlocale(LC_ALL, "");
}