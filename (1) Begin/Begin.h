#ifndef Begin_h
#define Begin_h

#include <iostream>
using namespace std;

void begin1() {
	system("cls");
	double a;
	cout << "Begin1. Дана сторона квадрата a. Найти его периметр P=4*a" << endl;
	cout << "Введите значение a: ";
	cin >> a;
	double P = 4 * a;
	cout << "Периметр квадрата равен: " << P << endl;
	system("pause");
	
}
void begin2() {
	system("cls");
	double a;
	cout << "Begin2. Дана сторона квадрата a. Найти его площадь S=a^2" << endl;
	cout << "Введите значение a: ";
	cin >> a;
	double S = pow(a, 2);
	cout << "Площадь квадрата равна : " << S << endl;
	system("pause");
}
void begin3() {
	system("cls");
	double a, b;
	cout << "Begin3. Даны стороны прямоугольника a и b. Найти его площадь S=a*b и периметр P=2*(a+b)" << endl;
	cout << "Введите значение a: ";
	cin >> a;
	cout << "Введите значение b: ";
	cin >> b;
	double S = a * b;
	double P = 2 * (a + b);
	cout << "Площадь прямоугольника равна : " << S << endl;
	cout << "Периметр прямоугольника равен : " << P << endl;
	system("pause");
}
void begin4() {
	system("cls");
	double d;
	cout << "Begin4. Дан диаметр окружности d. НАйти ее длину. В качестве значения пи использовать 3.14" << endl;
	cout << "Введите значение d: ";
	cin >> d;
	double L = 3.14 * d;
	cout << "Длина окружности равна : " << L << endl;
	system("pause");
}
void begin5() {
	system("cls");
	double a;
	cout << "Begin5. Дана длина ребра куба a. Найти объем куба V=a^3 и площадь его поверхности S=6*a^2" << endl;
	cout << "Введите значение a: ";
	cin >> a;
	double V = pow(a, 3);
	double S = 6 * pow(a, 2);
	cout << "Объем куба : " << V << endl;
	cout << "Площадь его поверхности : " << S << endl;
	system("pause");
}
void begin6() {
	system("cls");
	double a, b, c;
	cout << "Begin6." << endl;
	cout << "Введите значение a: ";
	cin >> a;
	cout << "Введите значение b: ";
	cin >> b;
	cout << "Введите значение c: ";
	cin >> c;
	double V = a * b * c;
	double S = 2 * (a * b + b * c + a * c);
	cout << "Объем параллелепипеда : " << V << endl;
	cout << "Площадь поверхности параллелепипеда : " << S << endl;
	system("pause");
}
void begin7() {
	system("cls");
	double R;
	cout << "Begin7." << endl;
	cout << "Введите значение R: ";
	cin >> R;
	double L = 2 * 3.14 * R;
	double S = 3.14 * pow(R, 2);
	cout << "Длина окружности : " << L << endl;
	cout << "Площадь круга : " << S << endl;
	system("pause");
}
void begin8() {
	system("cls");
	double a, b;
	cout << "Begin8." << endl;
	cout << "Введите значение a: ";
	cin >> a;
	cout << "Введите значение b: ";
	cin >> b;
	double x = (a + b) / 2;
	cout << "Среднее арифметическое : " << x << endl;
	system("pause");
}
void begin9() {
	system("cls");
	double a, b;
	cout << "Begin9." << endl;
	cout << "Введите значение a: ";
	cin >> a;
	cout << "Введите значение b: ";
	cin >> b;
	double x = sqrt(a * b);
	cout << "Среднее геометрическое : " << x << endl;
	system("pause");
}
void begin10() {
	system("cls");
	double a, b;
	cout << "Begin10." << endl;
	cout << "Введите значение a: ";
	cin >> a;
	cout << "Введите значение b: ";
	cin >> b;
	cout << "Квадрат суммы : " << a * a + 2 * a * b + b * b << endl;
	cout << "Квадрат разности : " << a * a - 2 * a * b + b * b << endl;
	cout << "Произведение квадратов : " << (a * a) * (b * b) << endl;
	cout << "Частное квадратов : " << (a * a) / (b * b) << endl;
	system("pause");
}
void begin11() {
	system("cls");
	double a, b;
	cout << "Begin11." << endl;
	cout << "Введите значение a: ";
	cin >> a;
	cout << "Введите значение b: ";
	cin >> b;
	cout << " Сумма модулей : " << abs(a) + abs(b) << endl;
	cout << "Разность модулей : " << abs(a) - abs(b) << endl;
	cout << "Произведение модулей : " << abs(a) * abs(b) << endl;
	cout << "Частное модулей : " << abs(a) / abs(b) << endl;
	system("pause");
}
void begin12() {
	system("cls");
	double a, b;
	cout << "Begin12." << endl;
	cout << "Введите значение a: ";
	cin >> a;
	cout << "Введите значение b: ";
	cin >> b;
	double c = sqrt(pow(a, 2) + pow(b, 2));
	cout << "Длинна гиппотинузы : " << c << endl;
	cout << "Периметр : " << a + b + c << endl;
	system("pause");
}
void begin13() {
	system("cls");
	double R1, R2;
	cout << "Begin13." << endl;
	cout << "Введите значение R1: ";
	cin >> R1;
	cout << "Введите значение R2: ";
	cin >> R2;
	double S1 = M_PI * pow(R1, 2);
	double S2 = M_PI * pow(R2, 2);
	double S3 = S1 - S2;
	cout << "S1 : " << S1 << endl;
	cout << "S2 : " << S2 << endl;
	cout << "S2 : " << S3 << endl;
	system("pause");
}
void begin14() {
	system("cls");
	double L;
	cout << "Begin14." << endl;
	cout << "Введите значение L: ";
	cin >> L;

	double R = L / (2 * 3.14);
	double S = 3.14 * pow(R, 2);
	cout << "R : " << R << endl;
	cout << "S : " << S << endl;
	system("pause");
}
void begin15() {
	system("cls");
	double S;
	cout << "Begin15." << endl;
	cout << "Введите значение S: ";
	cin >> S;
	double D = sqrt(4 * S / 3.14);
	double L = 3.14 * D;
	cout << "L : " << L << endl;
	cout << "D : " << D << endl;
	system("pause");
}
void begin16() {
	system("cls");
	double x1, x2;
	cout << "Begin16." << endl;
	cout << "Введите значение x1: ";
	cin >> x1;
	cout << "Введите значение x2: ";
	cin >> x2;
	cout << "Расстояние : " << abs(x2 - x1) << endl;
	system("pause");
}
void begin17() {
	system("cls");
	double a, b, c;
	cout << "Begin17." << endl;
	cout << "Введите значение a: ";
	cin >> a;
	cout << "Введите значение b: ";
	cin >> b;
	cout << "Введите значение c: ";
	cin >> c;
	cout << "Расстояние AC : " << c - a << endl;
	cout << "Расстояние BC : " << c - b << endl;
	cout << "Их сумма : " << (c - a) + (c - b) << endl;
	system("pause");
}
void begin18() {
	system("cls");
	double a, b, c;
	cout << "Begin18." << endl;
	cout << "Введите значение a: ";
	cin >> a;
	cout << "Введите значение b: ";
	cin >> b;
	cout << "Введите значение c: ";
	cin >> c;
	cout << "Расстояние AC : " << c - a << endl;
	cout << "Расстояние BC : " << c - b << endl;
	cout << "Их произведение : " << (c - a) * (c - b) << endl;
	system("pause");
}
void begin19() {
	system("cls");
	double x1, x2, y1, y2;
	cout << "Begin19." << endl;
	cout << "Введите значение x1: ";
	cin >> x1;
	cout << "Введите значение x2: ";
	cin >> x2;
	cout << "Введите значение y1: ";
	cin >> y1;
	cout << "Введите значение y2: ";
	cin >> y2;
	cout << "S = : " << abs(x2 - x1) * abs(y2 - y1) << endl;
	system("pause");
}
void begin20() {
	system("cls");
	double x1, x2, y1, y2;
	cout << "Begin20." << endl;
	cout << "Введите значение x1: ";
	cin >> x1;
	cout << "Введите значение x2: ";
	cin >> x2;
	cout << "Введите значение y1: ";
	cin >> y1;
	cout << "Введите значение y2: ";
	cin >> y2;
	cout << "Расстояние = : " << sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) << endl;
	system("pause");
}
void begin21() {
	system("cls");
	double x1, x2, x3, y1, y2, y3;
	cout << "Begin21." << endl;
	cout << "Введите значение x1: ";
	cin >> x1;
	cout << "Введите значение x2: ";
	cin >> x2;
	cout << "Введите значение x3: ";
	cin >> x3;
	cout << "Введите значение y1: ";
	cin >> y1;
	cout << "Введите значение y2: ";
	cin >> y2;
	cout << "Введите значение y3: ";
	cin >> y3;
	double a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	double b = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	double c = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	double P = a + b + c;
	double p = (a + b + c) / 2;
	double S = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "Расстояние = : " << sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) << endl;
	system("pause");
}
void begin22() {
	system("cls");
	double A, B, x;
	cout << "Begin22." << endl;
	cout << "Введите значение A: ";
	cin >> A;
	cout << "Введите значение B: ";
	cin >> B;
	x = A;
	A = B;
	B = x;
	cout << "A : " << A << endl;
	cout << "B : " << A << endl;
	system("pause");
}
void begin23() {
	system("cls");
	double A, B, C, x, y;
	cout << "Begin23." << endl;
	cout << "Введите значение A: ";
	cin >> A;
	cout << "Введите значение B: ";
	cin >> B;
	cout << "Введите значение C: ";
	cin >> C;
	x = A;
	y = B;
	B = A;
	A = C;
	C = y;
	cout << "A : " << A << endl;
	cout << "B : " << A << endl;
	cout << "C : " << A << endl;
	system("pause");
}
void begin24() {
	system("cls");
	double A, B, C, x, y;
	cout << "Begin24." << endl;
	cout << "Введите значение A: ";
	cin >> A;
	cout << "Введите значение B: ";
	cin >> B;
	cout << "Введите значение C: ";
	cin >> C;
	x = A;
	y = C;
	A = B;
	B = y;
	C = x;
	cout << "A : " << A << endl;
	cout << "B : " << A << endl;
	cout << "C : " << A << endl;
	system("pause");
}
void begin25() {
	system("cls");
	double x;
	cout << "Begin25." << endl;
	cout << "Введите значение x: ";
	cin >> x;
	cout << "y = " << 3 * pow(x, 6) - 6 * x * x - 7 << endl;
	system("pause");
}
void begin26() {
	system("cls");
	double x;
	cout << "Begin26." << endl;
	cout << "Введите значение x: ";
	cin >> x;
	cout << "y = " << 4 * pow(x - 3, 6) - 7 * pow(x - 3, 3) + 2 << endl;
	system("pause");
}
void begin27() {
	system("cls");
	double A, A2, A4, A8;
	cout << "Begin27." << endl;
	cout << "Введите значение A: ";
	cin >> A;
	A2 = A * A;
	A4 = A2 * A2;
	A8 = A4 * A4;
	cout << "A^2" << A2 << " A^4= " << A4 << "  A^8= " << A8 << endl;
	system("pause");
}
void begin28() {
	system("cls");
	double A, A2, A3, A5, A10, A15;
	cout << "Begin28." << endl;
	cout << "Введите значение A: ";
	cin >> A;
	A2 = A * A;
	A3 = A2 * A;
	A5 = A3 * A2;
	A10 = A5 * A5;
	A15 = A10 * A5;
	cout << "A^2" << A2 << " A^3= " << A3 << " A^5= " << A5 << "A^10" << A10 << " A^15= " << A15 << endl;
	system("pause");
}
void begin29() {
	system("cls");
	double a;
	cout << "Begin29." << endl;
	cout << "Введите значение a: ";
	cin >> a;
	cout << "Answer " << (3.14 * a) / 180 << endl;
	system("pause");
}
void begin30() {
	system("cls");
	double a;
	cout << "Begin30." << endl;
	cout << "Введите значение a: ";
	cin >> a;
	cout << "Answer " << (180 * a) / 3.14 << endl;
	system("pause");
}
void begin31() {
	system("cls");
	double T;
	cout << "Begin31." << endl;
	cout << "Введите значение Т: ";
	cin >> T;
	cout << "Answer " << (T - 32) * 5 / 9 << endl;
	system("pause");
}
void begin32() {
	system("cls");
	double T;
	cout << "Begin32." << endl;
	cout << "Введите значение Т: ";
	cin >> T;
	cout << "Answer " << (T * 1.8) + 32 << endl;
	system("pause");
}
void begin33() {
	system("cls");
	double x, A, Y;
	cout << "Begin33." << endl;
	cout << "Введите значение X: ";
	cin >> x;
	cout << "Введите значение A: ";
	cin >> A;
	cout << "Введите значение Y: ";
	cin >> Y;
	double chena_kg = A / x;
	double chena_Y = chena_kg * Y;

	cout << "Answer (1kg) " << chena_kg << endl;
	cout << "Answer (Y - kg) " << chena_Y << endl;
	system("pause");
}
void begin34() {
	system("cls");
	double x, A, Y, B;
	cout << "Begin34." << endl;
	cout << "Введите значение X: ";
	cin >> x;
	cout << "Введите значение A: ";
	cin >> A;
	cout << "Введите значение Y: ";
	cin >> Y;
	cout << "Введите значение B: ";
	cin >> B;
	double chena_konf = A / x;
	double chena_iris = B / Y;


	cout << "Answer (konf) " << chena_konf << endl;
	cout << "Answer (iris) " << chena_iris << endl;
	cout << "Answer (konf/iris) " << chena_konf / chena_iris << endl;
	system("pause");
}
void begin35() {
	system("cls");
	double V, U, T1, T2;
	cout << "Begin35." << endl;
	cout << "Введите значение V: ";
	cin >> V;
	cout << "Введите значение U: ";
	cin >> U;
	cout << "Введите значение T1: ";
	cin >> T1;
	cout << "Введите значение T2: ";
	cin >> T2;
	cout << "S= " << (T1 * V) + (T2 * (V - U)) << endl;
	system("pause");
}
void begin36() {
	system("cls");
	double V1, V2, T, S;
	cout << "Begin36." << endl;
	cout << "Введите значение V1: ";
	cin >> V1;
	cout << "Введите значение V2: ";
	cin >> V2;
	cout << "Введите значение T: ";
	cin >> T;
	cout << "Введите значение S: ";
	cin >> S;

	cout << "S= " << S + V1 * T + V2 * T << endl;
	system("pause");
}
void begin37() {
	system("cls");
	double V1, V2, T, S;
	cout << "Begin37." << endl;
	cout << "Введите значение V1: ";
	cin >> V1;
	cout << "Введите значение V2: ";
	cin >> V2;
	cout << "Введите значение T: ";
	cin >> T;
	cout << "Введите значение S: ";
	cin >> S;

	cout << "S= " << abs(S - (V1 * T + V2 * T)) << endl;
	system("pause");
}
void begin38() {
	system("cls");
	double A, B;
	cout << "Begin38." << endl;
	cout << "Введите значение A: ";
	cin >> A;
	cout << "Введите значение B: ";
	cin >> B;
	cout << "x= " << -B / A << endl;
	system("pause");
}
void begin39() {
	system("cls");
	double A, B, C;
	cout << "Begin39." << endl;
	cout << "Введите значение A: ";
	cin >> A;
	cout << "Введите значение B: ";
	cin >> B;
	cout << "Введите значение C: ";
	cin >> C;
	double D = B * B - 4 * A * C;
	double x1 = (-B + sqrt(D)) / (A * 2);
	double x2 = (-B - sqrt(D)) / (A * 2);
	cout << "x1= " << x1 << endl;
	cout << "x2= " << x2 << endl;
	system("pause");
}
void begin40() {
	system("cls");
	double A, B, C;
	double A2, B2, C2;
	cout << "Begin40." << endl;
	cout << "Введите значение A: ";
	cin >> A;
	cout << "Введите значение B: ";
	cin >> B;
	cout << "Введите значение C: ";
	cin >> C;
	cout << "Введите значение A2: ";
	cin >> A2;
	cout << "Введите значение B2: ";
	cin >> B2;
	cout << "Введите значение C2: ";
	cin >> C2;
	double D = A * B2 - A2 * B;
	double x = (C * B2 - C2 * B) / D;
	double y = (A * C2 - A2 * C) / D;
	cout << "x= " << x << endl;
	cout << "y= " << y << endl;
	system("pause");
}








#endif // !Begin_h
