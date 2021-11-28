#include<iostream>
#include<math.h>

void integer1(int l) {
	std::cout << "Метры:" << l / 100;
}

void integer2(int m) {
	std::cout << "Тонны:" << m / 1000;
}

void integer3(int b) {
	std::cout << "Kilobyte:" << b / 1024;
}

void integer4(int a, int b) {
	std::cout << "Количество разременных отрезком длинны B на отрезке длинны A:" << a / b;
}

void integer5(int a, int b) {
	std::cout << "Незанятый участо на отрезке А:" << a % b;
}

void integer6(int a) {
	std::cout << "Десятки:" << a / 10 << "\nЕдиницы:" << a % 10;
}

void integer7(int a) {
	std::cout << "Сумма цифр:" << (a / 10) + (a % 10) << "\nПроизведение цифр:" << (a / 10) * (a % 10);
}

void integer8(int a) {
	std::cout << "Переставленное число:" << (a / 10) + (a % 10) * 10;
}

void integer9(int a) {
	int a1 = a / 100;
	std::cout << "Первая цифра числа:" << a1;
}

void integer10(int a) {
	int a1 = a / 100;
	int a2 = (a % 100) / 10;
	int a3 = a % 10;
	std::cout << "Последняя цифра числа:" << a3 << "Средняя цифра числа:" << a2;
}

void integer11(int a) {
	int a1 = a / 100;
	int a2 = (a % 100) / 10;
	int a3 = a % 10;
	std::cout << "Сумма цифр числа:" << a1+a2+a3;
}

void integer12(int a) {
	int a1 = a / 100;
	int a2 = (a % 100) / 10;
	int a3 = a % 10;
	std::cout << "Перевернутое число:" << a1 + a2 * 10 + a3 * 100;
}

void integer13(int a) {
	int a1 = a / 100;
	int a2 = (a % 100) / 10;
	int a3 = a % 10;
	std::cout << "Измененное число:" << a2 * 100 + a3 * 10 + a1;
}

void integer14(int a) {
	int a1 = a / 100;
	int a2 = (a % 100) / 10;
	int a3 = a % 10;
	std::cout << "Измененное число:" << a3 * 100 + a1 * 10 + a2;
}

void integer15(int a) {
	int a1 = a / 100;
	int a2 = (a % 100) / 10;
	int a3 = a % 10;
	std::cout << "Измененное число:" << a2 * 100 + a1 * 10 + a3;
}

void integer16(int a) {
	int a1 = a / 100;
	int a2 = (a % 100) / 10;
	int a3 = a % 10;
	std::cout << "Измененное число:" << a1 * 100 + a3 * 10 + a2;
}

void integer17(int a) {
	std::cout << "Разряж сотен:" << (a/100)%10;
}

void integer18(int a) {
	std::cout << "Разряж тысяч:" << (a / 1000) % 10;
}

void integer19(int n) {
	std::cout << "Полных минут:" << n / 60;
}

void integer20(int n) {
	std::cout << "Полных часов:" << n / 3600;
}

void integer21(int n) {
	std::cout << "Секунд с начала минуты:" << n % 60;
}

void integer22(int n) {
	std::cout << "Секунд с начала часа:" << n % 3600;
}

void integer23(int n) {
	std::cout << "Минут с начала часа:" << (n / 60) % 60;
}

void integer24(int k) {
	std::cout << "Номер недели:" << (k+1) % 7 ;
}

void integer25(int k) {
	std::cout << "Номер недели:" << (k + 4) % 7;
}

void integer26(int k) {
	std::cout << "Номер недели:" << ((k + 2 - 1) % 7) + 1;
}

void integer27(int k) {
	std::cout << "Номер недели:" << ((k + 6 - 1 ) % 7) + 1;
}

void integer28(int k, int n) {
	std::cout << "Номер недели:" << ((k + n - 1) % 7) + 1;
}

void integer29(int a, int b, int c) {
	int p = a * b;
	int ac = a / c;
	int ab = b / c;
	std::cout << "Количество квадратов:" << ab*ac <<"Незанятая территория:"<< p - (ab*ac*c*c);
}

void integer30(int g) {
	std::cout << "Столетие:" << (g - 1) / 100 + 1;
}