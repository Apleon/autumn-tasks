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
	std::cout << "Первая цифра числа:" << a / 100;
}

void integer10(int a) {
	std::cout << "Последняя цифра числа:" << a % 10 << "Средняя цифра числа:" << (a % 100) / 10;
}

void integer10(int a) {
	std::cout << "Последняя цифра числа:" << a % 10 << "Средняя цифра числа:" << (a % 100) / 10;
}
