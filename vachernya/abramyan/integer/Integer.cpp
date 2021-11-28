#include<iostream>
#include<math.h>

void integer_task_1(int l) {
	std::cout << "Метры:" << l / 100;
}

void integer_task_2(int m) {
	std::cout << "Тонны:" << m / 1000;
}

void integer_task_3(int b) {
	std::cout << "Kilobyte:" << b / 1024;
}

void integer_task_4(int a, int b) {
	std::cout << "Количество разременных отрезком длинны B на отрезке длинны A:" << a / b;
}

void integer_task_5(int a, int b) {
	std::cout << "Незанятый участо на отрезке А:" << a % b;
}

void integer_task_6(int a) {
	std::cout << "Десятки:" << a / 10 << "\nЕдиницы:" << a % 10;
}

void integer_task_7(int a) {
	std::cout << "Сумма цифр:" << (a / 10) + (a % 10) << "\nПроизведение цифр:" << (a / 10) * (a % 10);
}

void integer_task_8(int a) {
	std::cout << "Переставленное число:" << (a / 10) + (a % 10) * 10;
}

void integer_task_9(int a) {
	int a1 = a / 100;
	std::cout << "Первая цифра числа:" << a1;
}

void integer_task_10(int a) {
	int a1 = a / 100;
	int a2 = (a % 100) / 10;
	int a3 = a % 10;
	std::cout << "Последняя цифра числа:" << a3 << "Средняя цифра числа:" << a2;
}

void integer_task_11(int a) {
	int a1 = a / 100;
	int a2 = (a % 100) / 10;
	int a3 = a % 10;
	std::cout << "Сумма цифр числа:" << a1+a2+a3;
}

void integer_task_12(int a) {
	int a1 = a / 100;
	int a2 = (a % 100) / 10;
	int a3 = a % 10;
	std::cout << "Перевернутое число:" << a1 + a2 * 10 + a3 * 100;
}

void integer_task_13(int a) {
	int a1 = a / 100;
	int a2 = (a % 100) / 10;
	int a3 = a % 10;
	std::cout << "Измененное число:" << a2 * 100 + a3 * 10 + a1;
}

void integer_task_14(int a) {
	int a1 = a / 100;
	int a2 = (a % 100) / 10;
	int a3 = a % 10;
	std::cout << "Измененное число:" << a3 * 100 + a1 * 10 + a2;
}

void integer_task_15(int a) {
	int a1 = a / 100;
	int a2 = (a % 100) / 10;
	int a3 = a % 10;
	std::cout << "Измененное число:" << a2 * 100 + a1 * 10 + a3;
}

void integer_task_16(int a) {
	int a1 = a / 100;
	int a2 = (a % 100) / 10;
	int a3 = a % 10;
	std::cout << "Измененное число:" << a1 * 100 + a3 * 10 + a2;
}

void integer_task_17(int a) {
	std::cout << "Разряж сотен:" << (a/100)%10;
}

void integer_task_18(int a) {
	std::cout << "Разряж тысяч:" << (a / 1000) % 10;
}

void integer_task_19(int n) {
	std::cout << "Полных минут:" << n / 60;
}

void integer_task_20(int n) {
	std::cout << "Полных часов:" << n / 3600;
}

void integer_task_21(int n) {
	std::cout << "Секунд с начала минуты:" << n % 60;
}

void integer_task_22(int n) {
	std::cout << "Секунд с начала часа:" << n % 3600;
}

void integer_task_23(int n) {
	std::cout << "Минут с начала часа:" << (n / 60) % 60;
}

void integer_task_24(int k) {
	std::cout << "Номер недели:" << (k+1) % 7 ;
}

void integer_task_25(int k) {
	std::cout << "Номер недели:" << (k + 4) % 7;
}

void integer_task_26(int k) {
	std::cout << "Номер недели:" << ((k + 2 - 1) % 7) + 1;
}

void integer_task_27(int k) {
	std::cout << "Номер недели:" << ((k + 6 - 1 ) % 7) + 1;
}

void integer_task_28(int k, int n) {
	std::cout << "Номер недели:" << ((k + n - 1) % 7) + 1;
}

void integer_task_29(int a, int b, int c) {
	int p = a * b;
	int ac = a / c;
	int ab = b / c;
	std::cout << "Количество квадратов:" << ab*ac <<"Незанятая территория:"<< p - (ab*ac*c*c);
}

void integer_task_30(int g) {
	std::cout << "Столетие:" << (g - 1) / 100 + 1;
}
