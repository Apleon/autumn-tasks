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
	std::cout << "������ ����� �����:" << a / 100;
}

void integer10(int a) {
	std::cout << "��������� ����� �����:" << a % 10 << "������� ����� �����:" << (a % 100) / 10;
}

void integer10(int a) {
	std::cout << "��������� ����� �����:" << a % 10 << "������� ����� �����:" << (a % 100) / 10;
}
