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
} 
void mission_15(){
    setlocale(LC_ALL,"");
} 
void mission_16(){
    setlocale(LC_ALL,"");
} 
void mission_17(){
    setlocale(LC_ALL,"");
} 
void mission_18(){
    setlocale(LC_ALL,"");
} 
void mission_19(){
    setlocale(LC_ALL,"");
} 
void mission_20(){
    setlocale(LC_ALL,"");
} 
void mission_21(){
    setlocale(LC_ALL,"");
} 
void mission_22(){
    setlocale(LC_ALL,"");
} 
void mission_23(){
    setlocale(LC_ALL,"");
} 
void mission_24(){
    setlocale(LC_ALL,"");
} 
void mission_25(){
    setlocale(LC_ALL,"");
} 
void mission_26(){
    setlocale(LC_ALL,"");
}
void mission_27(){
    setlocale(LC_ALL,"");
} 
void mission_28(){
    setlocale(LC_ALL,"");
} 
void mission_29(){
    setlocale(LC_ALL,"");
} 
void mission_30(){
    setlocale(LC_ALL,"");
} 
void mission_31(){
    setlocale(LC_ALL,"");
} 
void mission_32(){
    setlocale(LC_ALL,"");
} 
void mission_33(){
    setlocale(LC_ALL,"");
}
void mission_34(){
    setlocale(LC_ALL,"");
}
void mission_35(){
    setlocale(LC_ALL,"");
} 
void mission_36(){
    setlocale(LC_ALL,"");
} 
void mission_37(){
    setlocale(LC_ALL,"");
} 
void mission_38(){
    setlocale(LC_ALL,"");
} 
void mission_39(){
    setlocale(LC_ALL,"");
} 
void mission_40(){
    setlocale(LC_ALL,"");
} 

 
