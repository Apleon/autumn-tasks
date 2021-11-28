#include<iostream>
#include<math.h>

void begin1(double a) {
	std::cout << "��������:" << 4 * a;
}

void begin2(double a) {
	std::cout << "�������:" << a * a;
}

void begin3(double a, double b) {
	std::cout << "�������:" << a * b << "\n��������:" << 2 * (a + b);
}

void begin4(double d) {
	std::cout << "������ ����������:" << d * 3.14;
}

void begin5(double a) {
	std::cout << "����� ����:" << pow(a, 3) << "\n������� �����������:" << 2 * a * a;
}

void begin6(double a, double c, double b) {
	std::cout << "�����:" << a * c * b << "\n������� �����������:" << 2 * (a * b + b * c + c * a);
}

void begin7(double r) {
	std::cout << " ������� �����:" << 3.14 * r * r << "\n������ ����������:" << 2 * 3.14 * r;
}

void begin8(double a, double b) {
	std::cout << "������� ��������������:" << (a + b) / 2;
}

void begin9(double a, double b) {
	std::cout << "������� ��������������:" << pow(a + b, 2);
}

void begin10(double a, double b) {
	double a2 = a * a;
	double b2 = b * b;
	std::cout << "�����:" << a2 + b2 << "\n��������:" << a2 - b2 << "\n������������:" << a2 * b2 << "\n�������:" << a2 / b2;
}

void begin11(double a, double b) {
	double am = abs(a);
	double bm = abs(b);
	std::cout << "�����:" << am + bm << "\n��������:" << am - bm << "\n������������:" << am * bm << "\n�������:" << am / bm;
}

void begin12(double a, double b) {
	double c = sqrt(a * a + b * b);
	std::cout << "���������� �����:" << c << "\n��������:" << a + b + c;
}

void begin13(double r1, double r2) {
	double s1 = r1 * r1 * 3.14;
	double s2 = r2 * r2 * 3.14;
	std::cout << "������� ������� �����:" << s1 << "\n������� ������� �����:" << s2 << "\n������ ������:" << s1 - s2;
}

void begin14(double l) {
	double r = l / (2 * 3.14);
	double s = 3.14 * r * r;
	std::cout << "������:" << r << "\n������� :" << s;
}

void begin15(double s) {
	double d = sqrt(s / (3.14 * 4));
	double l = d / 3.14;
	std::cout << "�������:" << d << "\n������ ����������:" << l;
}

void begin16(double x1, double x2) {
	std::cout << "����������:" << abs(x1 - x2);
}

void begin17(double s) {
	double d = sqrt(s / (3.14 * 4));
	double l = d / 3.14;
	std::cout << "�������:" << d << "\n������ ����������:" << l;
}

void begin18(double a, double b, double c) {
	std::cout << "������������ ��������:" << abs(a - c) * abs(c - b);
}

void begin19(double x1, double y1, double x2, double y2) {
	std::cout << "������� ��������������:" << abs(x1 - x2) * abs(y1 - y1) << "\n�������� ��������������:" << 2 * (abs(x1 - x2) + abs(y1 - y1));
}

void begin20(double x1, double y1, double x2, double y2) {
	std::cout << "���������� ����� �������:" << sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) + (y2 - y1));
}

void begin21(double x1, double y1, double x2, double y2, double x3, double y3) {
	double a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) + (y2 - y1));
	double b = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) + (y3 - y1));
	double c = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) + (y2 - y3));
	double p = (a + b + c) / 2;
	std::cout << "������� ������������:" << sqrt(p * (p - a) * (p - b) * (p - c));
}

void begin22(double a, double b) {
	double c = a;
	a = b;
	b = c;
	std::cout << "A:" << a << "\n B:" << b;
}

void begin23(double a, double b, double c) {
	double i = a;
	a = c;
	c = b;
	b = i;
	std::cout << "A:" << a << "\n B:" << b << "\n C:" << c;
}

void begin24(double a, double b, double c) {
	double i = a;
	a = b;
	b = c;
	c = i;
	std::cout << "A:" << a << "\n B:" << b << "\n C:" << c;
}

void begin25(double x) {
	std::cout << "Y:" << 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
}

void begin26(double x) {
	std::cout << "Y:" << 4 * pow(x - 3, 6) - 7 * pow(x - 3, 3) + 2;
}

void begin27(double a) {
	double aa = a * a;
	std::cout << "A^2:" << aa;
	aa = aa * aa;
	std::cout << "A^4:" << aa;
	aa = aa * aa;
	std::cout << "A^8:" << aa;
}

void begin28(double a) {
	double aa = a * a;
	double aaa = aa * a;
	std::cout << "A^2:" << aa;
	std::cout << "A^3:" << aaa;
	aaa = aaa * aa;
	std::cout << "A^5:" << aaa;
	aa = aaa * aaa;
	std::cout << "A^10:" << aa;
	aa = aaa * aa;
	std::cout << "A^15:" << aa;
}

void begin29(double a) {
	std::cout << " �������:" << a * 180 / 3.14;
}

void begin30(double a) {
	std::cout << " �������:" << a * 3.14 / 180;
}

void begin31(double tf) {
	std::cout << " ������� �������:" << (tf - 32) * 5 / 9.0;
}

void begin32(double tc) {
	std::cout << " ������� �������:" << tc * 9 / 5 + 32;
}

void begin33(double x, double a, double y) {
	double x1 = a / x;

	std::cout << " ���� ��������� ������ �����:" << x1 << "\n��������� Y ������ �����:" << y * x1;
}

void begin34(double x, double a, double y, double b) {
	double x1 = a / x;
	double y1 = b / y;
	std::cout << " ���� ��������� ���������� ������ �����:" << x1 << "\n���� ��������� ���������� ������ �����:" << y1 << "\n������� � ��������� �����:" << abs(x1 - y1);
}

void begin35(double v, double u, double t1, double t2) {
	std::cout << "����� ������ ������� ������ ���������� ������:" << (v - u) * t1 << "\n����� �� ������� ������ ���������� ������" << (v + u) * t2;
}

void begin36(double v1, double v2, double t, double s) {
	std::cout << "���������� ����� �������� ����� T ������� �����:" << (v1 + v2) * t + s;
}

void begin37(double a, double b) {
	std::cout << "X �����:" << (-1) * b / a;
}

void begin38(double a, double b, double c) {
	double d = b * b - 4 * a * c;
	std::cout << "X1 �����:" << (-1) * b - pow(d, 0.5) / (2 * a) << "\nX2 �����:" << (-1) * b + pow(d, 0.5) / (2 * a);
}

void begin39(double a, double b, double c) {
	double d = b * b - 4 * a * c;
	std::cout << "X1 �����:" << (-1) * b - pow(d, 0.5) / (2 * a) << "\nX2 �����:" << (-1) * b + pow(d, 0.5) / (2 * a);
}

void begin40(double a1, double a2, double b1, double b2, double c1, double c2) {
	double d = a1 * b2 - b1 * a2;
	std::cout << "X �����:" << (c1 * b2 - c2 * b2) / d << "\nY �����:" << (a1 * c2 - a2 * c1) / d;
}