#include<iostream>
#include<math.h>

void integer1(int l) {
	std::cout << "�����:" << l / 100;
}

void integer2(int m) {
	std::cout << "�����:" << m / 1000;
}

void integer3(int b) {
	std::cout << "Kilobyte:" << b / 1024;
}

void integer4(int a, int b) {
	std::cout << "���������� ����������� �������� ������ B �� ������� ������ A:" << a / b;
}

void integer5(int a, int b) {
	std::cout << "��������� ������ �� ������� �:" << a % b;
}

void integer6(int a) {
	std::cout << "�������:" << a / 10 << "\n�������:" << a % 10;
}

void integer7(int a) {
	std::cout << "����� ����:" << (a / 10) + (a % 10) << "\n������������ ����:" << (a / 10) * (a % 10);
}

void integer8(int a) {
	std::cout << "�������������� �����:" << (a / 10) + (a % 10) * 10;
}

void integer9(int a) {
	int a1 = a / 100;
	std::cout << "������ ����� �����:" << a1;
}

void integer10(int a) {
	int a1 = a / 100;
	int a2 = (a % 100) / 10;
	int a3 = a % 10;
	std::cout << "��������� ����� �����:" << a3 << "������� ����� �����:" << a2;
}

void integer11(int a) {
	int a1 = a / 100;
	int a2 = (a % 100) / 10;
	int a3 = a % 10;
	std::cout << "����� ���� �����:" << a1+a2+a3;
}

void integer12(int a) {
	int a1 = a / 100;
	int a2 = (a % 100) / 10;
	int a3 = a % 10;
	std::cout << "������������ �����:" << a1 + a2 * 10 + a3 * 100;
}

void integer13(int a) {
	int a1 = a / 100;
	int a2 = (a % 100) / 10;
	int a3 = a % 10;
	std::cout << "���������� �����:" << a2 * 100 + a3 * 10 + a1;
}

void integer14(int a) {
	int a1 = a / 100;
	int a2 = (a % 100) / 10;
	int a3 = a % 10;
	std::cout << "���������� �����:" << a3 * 100 + a1 * 10 + a2;
}

void integer15(int a) {
	int a1 = a / 100;
	int a2 = (a % 100) / 10;
	int a3 = a % 10;
	std::cout << "���������� �����:" << a2 * 100 + a1 * 10 + a3;
}

void integer16(int a) {
	int a1 = a / 100;
	int a2 = (a % 100) / 10;
	int a3 = a % 10;
	std::cout << "���������� �����:" << a1 * 100 + a3 * 10 + a2;
}

void integer17(int a) {
	std::cout << "������ �����:" << (a/100)%10;
}

void integer18(int a) {
	std::cout << "������ �����:" << (a / 1000) % 10;
}

void integer19(int n) {
	std::cout << "������ �����:" << n / 60;
}

void integer20(int n) {
	std::cout << "������ �����:" << n / 3600;
}

void integer21(int n) {
	std::cout << "������ � ������ ������:" << n % 60;
}

void integer22(int n) {
	std::cout << "������ � ������ ����:" << n % 3600;
}

void integer23(int n) {
	std::cout << "����� � ������ ����:" << (n / 60) % 60;
}

void integer24(int k) {
	std::cout << "����� ������:" << (k+1) % 7 ;
}

void integer25(int k) {
	std::cout << "����� ������:" << (k + 4) % 7;
}

void integer26(int k) {
	std::cout << "����� ������:" << ((k + 2 - 1) % 7) + 1;
}

void integer27(int k) {
	std::cout << "����� ������:" << ((k + 6 - 1 ) % 7) + 1;
}

void integer28(int k, int n) {
	std::cout << "����� ������:" << ((k + n - 1) % 7) + 1;
}

void integer29(int a, int b, int c) {
	int p = a * b;
	int ac = a / c;
	int ab = b / c;
	std::cout << "���������� ���������:" << ab*ac <<"��������� ����������:"<< p - (ab*ac*c*c);
}

void integer30(int g) {
	std::cout << "��������:" << (g - 1) / 100 + 1;
}