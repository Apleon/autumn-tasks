#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

void mission_1(){
    setlocale(LC_ALL,"");
    double a, P;
    cout << "Введите значения a:";
    cin >> a;
    P = 4 * a;
    cout << "Периметр квадрата равен: " << P << '\n';
}
void mission_2(){
    setlocale(LC_ALL,"");
    double a, S;
    cout << "Введите значения a:";
    cin >> a;
    S = pow(a,2);
    cout << "Площадь квадрата равна: " << S << '\n';
}
void mission_3(){
    setlocale(LC_ALL,"");
    double a, b, S, P;
    cout << "Введите значения a:";
    cin >> a;
    cout << "Введите значения b:";
    cin >> b;
    S = a * b;
    P = 2 * (a + b);
    cout << "Площадь прямоугольника: " << S << '\n' << "Периметр прямоугольника: " << P << endl;    
} 
void mission_4(){
    setlocale(LC_ALL,"");
    double d, L;
    cout << "Введите значения d:";
    cin >> d;
    L = M_PI * d;
    cout << "Длина окружности: " << L << endl;
} 
void mission_5(){
    setlocale(LC_ALL,"");
    double a, V, S;
    cout << "Введите значения a:";
    cin >> a;
    V = pow(a, 3);
    S = 6 * pow(a, 2);
    cout << "Объём куба: " << V << "Площадь поверхности куба: " << S << endl;
} 
void mission_6(){
    setlocale(LC_ALL,"");
    double a, b, c, V, S;
    V = a * b * c;
    S = 2 * (a * b + b * c + a * c);
    cout << "Объём прямоугольного параллелепипеда: " << V << "Площадь поверхности прямоугольного параллелепипеда: " << S << endl;
} 
void mission_7(){
    setlocale(LC_ALL,"");
    double R, L, S;
    cout << "Введите значения R:";
    cin >> R;
    L = 2 * M_PI * R;
    S = M_PI * pow(R, 2);
    cout << "Длина окружности круга: " << L << "Площадь круга:" << S << endl;
} 
void mission_8(){
    setlocale(LC_ALL,"");
    double a, b, srArifm;
    cin >> a >> b;
    srArifm = (a + b) / 2;
    cout << srArifm << endl;
} 
void mission_9(){
    setlocale(LC_ALL,"");
    double a, b, srGeometr;
    do{
        cin >> a;
    }while(a < 0);
    do{
        cin >> b;
    }while(b < 0);
    srGeometr = sqrt(a * b);
    cout << srGeometr << endl;
} 
void mission_10(){
    setlocale(LC_ALL,"");
    double a, b, sum, raznost, proizv, chastnoekvadratov;
    do{
        cin >> a;
    }while(a == 0);
    do{
        cin >> b;
    }while(b == 0);
    sum = a + b;
    raznost = a - b;
    proizv = a * b;
    chastnoekvadratov = pow(a, 2) / pow(b, 2);
    cout << sum << endl;
    cout << raznost << endl;
    cout << proizv << endl;
    cout << chastnoekvadratov << endl;
} 
void mission_11(){
    setlocale(LC_ALL,"");
    double a, b, sum, raznost, proizv, chastnoemodule;
    do{
        cin >> a;
    }while(a == 0);
    do{
        cin >> b;
    }while(b == 0);
    sum = a + b;
    raznost = a - b;
    proizv = a * b;
    chastnoemodule = abs(a) / abs(b);
    cout << sum << endl;
    cout << raznost << endl;
    cout << proizv << endl;
    cout << chastnoemodule << endl;
} 
void mission_12(){
    setlocale(LC_ALL,"");
    double a, b,c, P;
    cin >> a >> b;
    c = sqrt(pow(a, 2) + pow(b, 2));
    P = a + b + c;
    cout << c << endl;
    cout << P << endl;
} 
void mission_13(){
    setlocale(LC_ALL,"");
    double R1, R2, S1, S2, S3;
    cin >> R1;
    do{
        cin >> R2;
    }while(R1 < R2);
    S1 = M_PI * pow(R1, 2);
    S2 = M_PI * pow(R2, 2);
    S3 = S1 - S2;
    cout << S1 << " " << S2 << " " << S3 << endl;
} 
void mission_14(){
    setlocale(LC_ALL,"");
    double L, R, S;
    cin >> L;
    R = 2 * M_PI * L;
    S = M_PI * pow(R, 2);
    cout << R << " " << S << endl;
} 
void mission_15(){
    setlocale(LC_ALL,"");
    double S, D, L;
    cin >> S;
    D = sqrt(S / 3.14 * 4);
    L = D * M_PI;
    cout << D << " " << L << endl;
} 
void mission_16(){
    setlocale(LC_ALL,"");
    double x1, x2, size;
    size = abs(x1 - x2);
    cout << size << endl;

} 
void mission_17(){
    setlocale(LC_ALL,"");
    double A, B, C;
    cin >> A >> B >> C;
    cout << C - A << " " << C - B << endl;
    cout << (C - A) + (C - B) << endl;
} 
void mission_18(){
    setlocale(LC_ALL,"");
    double A, B, C, AC, BC, proizv;
    cin >> A >> B >> C;
    AC = A - C;
    BC = C - B;
    proizv = AC * BC;
    cout << proizv << endl;
} 
void mission_19(){
    setlocale(LC_ALL,"");
    double x1, x2, y1, y2, P, S;
    cin >> x1 >> x2 >> y1 >> y2;
    S = abs(x1 - x2) + abs(y1 - y2);
    P = 2 * abs(x1 - x2) + abs(y1 - y2);
    cout << S << " " << P << endl;
} 
void mission_20(){
    setlocale(LC_ALL,"");
    double x1, x2, y1, y2, distance;
    cin >> x1 >> x2 >> y1 >> y2;
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << distance << endl;
} 
void mission_21(){
    setlocale(LC_ALL,"");
    double x1, x2, y1, y2, x3, y3, p, P, S, A, B, C;
    cin >> x1 >> x2 >> y1 >> y2 >> x3 >> y3;
    A = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) + (y2 - y1));
	B = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) + (y3 - y1));
	p = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) + (y2 - y3));
	p = (A + B + C) / 2;
    S = sqrt(p* (p - A) * (p - B) * (p - C));
    cout << S << endl;  
} 
void mission_22(){
    setlocale(LC_ALL,"");
    double A, B, free;
    free = A;
    A = B;
    B = free;
    cout << A << " " << B << endl;
} 
void mission_23(){
    setlocale(LC_ALL,"");
    double A, B, C, free;
    free = A;
    A = C;
    C = B;
    B = free;
    cout << A << " " << B << " " << C << endl;
} 
void mission_24(){
    setlocale(LC_ALL,"");
    double A, B, C, free;
    free = A;
    A = B;
    B = C;
    C = free;
    cout << A << " " << B << " " << C << endl;
} 
void mission_25(){
    setlocale(LC_ALL,"");
    double x, y;
    cin >> x;
    y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
    cout << y << endl;
} 
void mission_26(){
    setlocale(LC_ALL,"");
    double x, y;
    cin >> x;
    y = 4 * pow((x - 3), 6) - 7 * pow((x-3), 3) + 2;
    cout << y << endl;
}
void mission_27(){
    setlocale(LC_ALL,"");
    double A, A2, A4, A8;
    cin >> A;
    A2 = A * A;
    A4 = A2 * A2;
    A8 = A4 * A4;
    cout << A2 << " " << A4 << " " << A8 <<endl;
} 
void mission_28(){
    setlocale(LC_ALL,"");
    double A, A2, A3, A5, A10, A15;
    cin >> A;
    A2 = A * A;
	A3 = A2 * A;
	A5 = A3 * A2;
	A10 = A5 * A5;
	A15 = A10 * A5;
    cout << A2 << " " << A3 << " " << A5 << " " << A10 << " " << A15 << endl;
} 
void mission_29(){
    setlocale(LC_ALL,"");
    double a, rad;
    cin >> a;
    rad = M_PI * a / 180;
    cout << rad << endl;
} 
void mission_30(){
    setlocale(LC_ALL,"");
    double a, grad;
    cin >> a;
    grad = 180 * a / M_PI;

} 
void mission_31(){
    setlocale(LC_ALL,"");
    double Tf, Tc;
    cin >> Tf;
    Tc = (Tf - 32) * 5 / 9;
    cout << Tc << endl;
} 
void mission_32(){
    setlocale(LC_ALL,"");
    double Tf, Tc;
    cin >> Tc;
    Tf = (Tc + 32) * 9 / 5;
    cout  << Tf << endl;
} 
void mission_33(){
    setlocale(LC_ALL,"");
    double X, A, Y;
    cout << "Один килограмм:" << A / X << "Y килограмм конфет: " << Y * (A / X) << endl;
}
void mission_34(){
    setlocale(LC_ALL,"");
    double X, A, Y, B;
    cout << "Один килограмм шоколадных конфет:" << A / X << "Один килограмм ирисок:" << B / Y << "Разница:" << (A / X) - (B / Y) << endl;
}
void mission_35(){
    setlocale(LC_ALL,"");
    double V, U, T1, T2;
    cin >> V >> U >> T1 >> T2;
    cout << "Путь:" << (T1 * V) + (T2 * U) << endl;
} 
void mission_36(){
    setlocale(LC_ALL,"");
    double V1, V2, T, S;
    cin >> V1 >> V2 >> T >> S;
    cout << "Расстояние между ними: " << S + V1 * T + V2 * T << endl;
} 
void mission_37(){
    setlocale(LC_ALL,"");
    double V1, V2, T, S, distance;
    cin >> V1 >> V2 >> T >> distance;
    distance = S - (V1 * T + V2 * T);
    cout << distance << endl;
} 
void mission_38(){
    setlocale(LC_ALL,"");
    double X, A, B;
    X = (-1) * B / A;
    cout << X << endl;
} 
void mission_39(){
    setlocale(LC_ALL,"");
    double X1, X2, A, B, C, D;
    cin >> A >> B >> C;
    D = sqrt(B) - 4 * A * C;
    X1 = (-1) * B + sqrt(D) / 2 * A;
    X2 = (-1) * B - sqrt(D) / 2 * A;
    cout << X1 << " " << X2 << endl;
} 
void mission_40(){
    setlocale(LC_ALL,"");
    double X, Y, A1, B1, C1, A2, B2, C2, D;
    cin >> A1 >> B1 >> C1 >> A2 >> B2 >> C2;
    D = A1 * B2 - A2 * B1;
    X = (C1 * B2 - C2 * B1) / D;
    Y = (A1 * C2 - A2 * C1) / D;
    cout << X << " " << Y << endl;
}