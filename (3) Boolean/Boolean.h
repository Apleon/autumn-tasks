#ifndef Boolean_h
#define Boolean_h

#include <iostream>
using namespace std;

void boolean1() {
	system("cls");
	cout << "Boolean1." << endl;
	bool A;
	int x;
	cout << "Введите число : " << endl;
	cin >> x;
	A = x > 0;
	cout << "Число положительное?: " << A << endl;
	system("pause");
}
void boolean2() {
	system("cls");
	cout << "Boolean2." << endl;
	bool A;
	int x;
	cout << "Введите число : " << endl;
	cin >> x;
	A = x % 2 != 0;
	cout << "Число положительное?: " << A << endl;
	system("pause");
}
void boolean3() {
	system("cls");
	cout << "Boolean3." << endl;
	bool A;
	int x;
	cout << "Введите число : " << endl;
	cin >> x;
	A = x % 2 == 0;
	cout << "Число нечетное: " << A << endl;
	system("pause");
}
void boolean4() {
	system("cls");
	cout << "Boolean4." << endl;
	bool x;
	int A, B;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;
	x = A > 2 && B <= 3;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean5() {
	system("cls");
	cout << "Boolean5." << endl;
	bool x;
	int A, B;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;
	x = A >= 0 && B <= -2;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean6() {
	system("cls");
	cout << "Boolean6." << endl;
	bool x;
	int A, B, C;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;
	cout << "Введите число : " << endl;
	cin >> C;
	x = A < B&& B < C;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean7() {
	system("cls");
	cout << "Boolean7." << endl;
	bool x;
	int A, B, C;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;
	cout << "Введите число : " << endl;
	cin >> C;
	x = A < B&& B < C;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean8() {
	system("cls");
	cout << "Boolean8." << endl;
	bool x;
	int A, B;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;

	x = A % 2 != 0 && B % 2 != 0;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean9() {
	system("cls");
	cout << "Boolean9." << endl;
	bool x;
	int A, B;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;

	x = A % 2 != 0 || B % 2 != 0;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean10() {
	system("cls");
	cout << "Boolean10." << endl;
	bool x;
	int A, B;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;

	x = A % 2 != 0 && B % 2 == 0 || A % 2 == 0 && B % 2 != 0;
	x = A % 2 != 0 && B % 2 == 0 || A % 2 == 0 && B % 2 != 0;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean11() {
	system("cls");
	cout << "Boolean11." << endl;
	bool x;
	int A, B;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;

	x = A % 2 != 0 && B % 2 != 0 || A % 2 == 0 && B % 2 == 0;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean12() {
	system("cls");
	cout << "Boolean12." << endl;
	bool x;
	int A, B, C;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;
	cout << "Введите число : " << endl;
	cin >> C;

	x = A > 0 && B > 0 && C > 0;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean13() {
	system("cls");
	cout << "Boolean13." << endl;
	bool x;
	int A, B, C;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;
	cout << "Введите число : " << endl;
	cin >> C;

	x = A > 0 || B > 0 || C > 0;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean14() {
	system("cls");
	cout << "Boolean14." << endl;
	bool x;
	int A, B, C;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;
	cout << "Введите число : " << endl;
	cin >> C;

	x = A > 0 && B <= 0 && C <= 0 || A <= 0 && B > 0 && C <= 0 || A <= 0 && B <= 0 && C > 0;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean15() {
	system("cls");
	cout << "Boolean15." << endl;
	bool x;
	int A, B, C;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;
	cout << "Введите число : " << endl;
	cin >> C;

	x = A > 0 && B > 0 && C <= 0 || A > 0 && B <= 0 && C > 0 || A <= 0 && B > 0 && C > 0;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean16() {
	system("cls");
	cout << "Boolean16." << endl;
	bool x;
	int A;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;


	x = A >= 10 && A < 100 && A % 2 == 0;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean17() {
	system("cls");
	cout << "Boolean17." << endl;
	bool x;
	int A;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;


	x = A >= 100 && A < 1000 && A % 2 != 0;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean18() {
	system("cls");
	cout << "Boolean18." << endl;
	bool x;
	int A, B, C;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;
	cout << "Введите число : " << endl;
	cin >> C;


	x = A == B || A == C || B == C;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean19() {
	system("cls");
	cout << "Boolean19." << endl;
	bool x;
	int A, B, C;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;
	cout << "Введите число : " << endl;
	cin >> C;


	x = A * (-1) == B || A * (-1) == C || C * (-1) == B;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean20() {
	system("cls");
	cout << "Boolean20." << endl;
	bool x;
	int A;
	cout << "Введите число : " << endl;
	cin >> A;
	int i = A / 100;
	int y = (A / 10) % 10;
	int z = A % 10;


	x = i != y || y != z;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean21() {
	system("cls");
	cout << "Boolean21." << endl;
	bool x;
	int A;
	cout << "Введите число : " << endl;
	cin >> A;
	int i = A / 100;
	int y = (A / 10) % 10;
	int z = A % 10;


	x = y - i == z - y && z - (y - i) * 2 == y - i;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean22() {
	system("cls");
	cout << "Boolean22." << endl;
	bool x;
	int A;
	cout << "Введите число : " << endl;
	cin >> A;
	int i = A / 100;
	int y = (A / 10) % 10;
	int z = A % 10;


	x = abs(y - i) == abs(z - y) && abs(z - (y - i) * 2) == abs(y - i);
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean23() {
	system("cls");
	cout << "Boolean23." << endl;
	bool x;
	int A;
	cout << "Введите число : " << endl;
	cin >> A;
	int i = A / 1000;
	int y = (A / 100) % 10;
	int z = (A / 100) % 10;
	int p = A % 10;


	x = i == p && y == z;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean24() {
	system("cls");
	cout << "Boolean24." << endl;
	bool x;
	int A, B, C, D;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;
	cout << "Введите число : " << endl;
	cin >> C;
	D = B * B - 4 * A * C;
	x = D > 0;
	cout << "Неравенство верно?: " << x << endl;
	system("pause");
}
void boolean25() {
	system("cls");
	cout << "Boolean25." << endl;
	bool A;
	int x, y;
	cout << "Введите число : " << endl;
	cin >> x;
	cout << "Введите число : " << endl;
	cin >> y;

	A = x < 0 && y>0;

	cout << "Неравенство верно?: " << A << endl;
	system("pause");
}
void boolean26() {
	system("cls");
	cout << "Boolean26." << endl;
	bool A;
	int x, y;
	cout << "Введите число : " << endl;
	cin >> x;
	cout << "Введите число : " << endl;
	cin >> y;

	A = x > 0 && y < 0;

	cout << "Неравенство верно?: " << A << endl;
	system("pause");
}
void boolean27() {
	system("cls");
	cout << "Boolean27." << endl;
	bool A;
	int x, y;
	cout << "Введите число : " << endl;
	cin >> x;
	cout << "Введите число : " << endl;
	cin >> y;

	A = x < 0 && y>0 || x > 0 && y < 0;

	cout << "Неравенство верно?: " << A << endl;
	system("pause");
}
void boolean28() {
	system("cls");
	cout << "Boolean28." << endl;
	bool A;
	int x, y;
	cout << "Введите число : " << endl;
	cin >> x;
	cout << "Введите число : " << endl;
	cin >> y;

	A = x < 0 && y < 0 || x > 0 && y > 0;

	cout << "Неравенство верно?: " << A << endl;
	system("pause");
}
void boolean29() {
	system("cls");
	cout << "Boolean29." << endl;
	bool A;
	int x, y, x1, y1, x2, y2;
	cout << "Введите число : " << endl;
	cin >> x;
	cout << "Введите число : " << endl;
	cin >> y;
	cout << "Введите число : " << endl;
	cin >> x1;
	cout << "Введите число : " << endl;
	cin >> y1;
	cout << "Введите число : " << endl;
	cin >> x2;
	cout << "Введите число : " << endl;
	cin >> y2;

	A = x >= x1 && x <= x2 && y >= y1 && y <= y2;

	cout << "Неравенство верно?: " << A << endl;
	system("pause");
}
void boolean30() {
	system("cls");
	cout << "Boolean30." << endl;
	bool A;
	int a, b, c;
	cout << "Введите число : " << endl;
	cin >> a;
	cout << "Введите число : " << endl;
	cin >> b;
	cout << "Введите число : " << endl;
	cin >> c;

	A = a == b && b == c;

	cout << "Неравенство верно?: " << A << endl;
	system("pause");
}
void boolean31() {
	system("cls");
	cout << "Boolean31." << endl;
	bool A;
	int a, b, c;
	cout << "Введите число : " << endl;
	cin >> a;
	cout << "Введите число : " << endl;
	cin >> b;
	cout << "Введите число : " << endl;
	cin >> c;

	A = a == b || b == c || a == c;

	cout << "Неравенство верно?: " << A << endl;
	system("pause");
}
void boolean32() {
	system("cls");
	cout << "Boolean32." << endl;
	bool A;
	int a, b, c;
	cout << "Введите число : " << endl;
	cin >> a;
	cout << "Введите число : " << endl;
	cin >> b;
	cout << "Введите число : " << endl;
	cin >> c;

	A = c == sqrt(a * a + b * b) || a == sqrt(c * c + b * b) || b == sqrt(a * a + c * c);

	cout << "Неравенство верно?: " << A << endl;
	system("pause");
}
void boolean33() {
	system("cls");
	cout << "Boolean33." << endl;
	bool A;
	int a, b, c;
	cout << "Введите число : " << endl;
	cin >> a;
	cout << "Введите число : " << endl;
	cin >> b;
	cout << "Введите число : " << endl;
	cin >> c;

	A = c > 0 || a > 0 || b > 0;

	cout << "Неравенство верно?: " << A << endl;
	system("pause");
}
void boolean34() {
	system("cls");
	cout << "Boolean34." << endl;
	bool A;
	int x, y;
	cout << "Введите число : " << endl;
	cin >> x;
	cout << "Введите число : " << endl;
	cin >> y;

	A = (x + y) % 2 != 0;

	cout << "Верно?: " << A << endl;
	system("pause");
}
void boolean35() {
	system("cls");
	cout << "Boolean35." << endl;
	bool A;
	int x1, y1, x2, y2;
	cout << "Введите число : " << endl;
	cin >> x1;
	cout << "Введите число : " << endl;
	cin >> y1;
	cout << "Введите число : " << endl;
	cin >> x2;
	cout << "Введите число : " << endl;
	cin >> y2;

	A = (x1 + y1) % 2 == (x2 + y2) % 2;

	cout << "Верно?: " << A << endl;
	system("pause");
}
void boolean36() {
	system("cls");
	cout << "Boolean36." << endl;
	bool A;
	int x1, y1, x2, y2;
	cout << "Введите число : " << endl;
	cin >> x1;
	cout << "Введите число : " << endl;
	cin >> y1;
	cout << "Введите число : " << endl;
	cin >> x2;
	cout << "Введите число : " << endl;
	cin >> y2;

	A = x1 == x2 || y2 == y1;

	cout << "Верно?: " << A << endl;
	system("pause");
}
void boolean37() {
	system("cls");
	cout << "Boolean37." << endl;
	bool A;
	int x1, y1, x2, y2;
	cout << "Введите число : " << endl;
	cin >> x1;
	cout << "Введите число : " << endl;
	cin >> y1;
	cout << "Введите число : " << endl;
	cin >> x2;
	cout << "Введите число : " << endl;
	cin >> y2;

	A = abs(x1 - x2) <= 1 && abs(y1 - y2) <= 1;

	cout << "Верно?: " << A << endl;
	system("pause");
}
void boolean38() {
	system("cls");
	cout << "Boolean38." << endl;
	bool A;
	int x1, y1, x2, y2;
	cout << "Введите число : " << endl;
	cin >> x1;
	cout << "Введите число : " << endl;
	cin >> y1;
	cout << "Введите число : " << endl;
	cin >> x2;
	cout << "Введите число : " << endl;
	cin >> y2;

	A = abs(x1 - x1) == abs(y1 - y2);

	cout << "Верно?: " << A << endl;
	system("pause");
}
void boolean39() {
	system("cls");
	cout << "Boolean39." << endl;
	bool A;
	int x1, y1, x2, y2;
	cout << "Введите число : " << endl;
	cin >> x1;
	cout << "Введите число : " << endl;
	cin >> y1;
	cout << "Введите число : " << endl;
	cin >> x2;
	cout << "Введите число : " << endl;
	cin >> y2;

	A = abs(x1 - x2) == abs(y1 - y2) || (x1 == x2) || (y1 == y2);

	cout << "Верно?: " << A << endl;
	system("pause");
}
void boolean40() {
	system("cls");
	cout << "Boolean40." << endl;
	bool A;
	int x1, y1, x2, y2;
	cout << "Введите число : " << endl;
	cin >> x1;
	cout << "Введите число : " << endl;
	cin >> y1;
	cout << "Введите число : " << endl;
	cin >> x2;
	cout << "Введите число : " << endl;
	cin >> y2;

	A = (abs(x1 - x2) == 1 && abs(y1 - y2) == 2) || abs(x1 - x2) == 2 && abs(y1 - y2) == 1;

	cout << "Верно?: " << A << endl;
	system("pause");
}






#endif // !Boolean_h