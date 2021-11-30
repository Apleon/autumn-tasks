#include <iostream>
#include <math.h>
#define bln(a) ((a) ? ("True") : ("False")) //преобразует значение bool в одноименные строки для удобного восприятия при выводе

void boolean_task_1(int a) {
	std::cout << "\nЧисло А является положительным:" << bln(a>=0);
}

void boolean_task_2(int a) {
	std::cout << "\nЧисло А является нечетным:" << bln(a % 2 != 0);
}

void boolean_task_3(int a) {
	std::cout << "\nЧисло А является четным:" << bln(a % 2 == 0);
}

void boolean_task_4(int a, int b) {
	std::cout << "\nСправедливы неравенства A > 2 и B <= 3:" << bln(a > 2 && b <= 3);
}

void boolean_task_5(int a, int b) {
	std::cout << "\nСправедливы неравенства A >= 0 или B < -2:" << bln(a >= 0 || b < -2);
}

void boolean_task_6(int a, int b, int c) {
	std::cout << "\nСправедливы неравенства A < B < C:" << bln((a < b) && (b < c));
}

void boolean_task_7(int a, int b, int c) {
	std::cout << "\nСправедливы неравенства, что B находится между A и C :" << bln((a < b&& b < c)||(c < b&& b < a));
}

void boolean_task_8(int a, int b) {
	std::cout << "\nСправедливы неравенства, что A и B нечетны :" << bln((a % 2 != 0)&&(b % 2 != 0));
}

void boolean_task_9(int a, int b) {
	std::cout << "\nСправедливы неравенства, что A или B нечетны :" << bln((a % 2 != 0) || (b % 2 != 0));
}

void boolean_task_10(int a, int b) {
	std::cout << "\nСправедливы неравенства, что ровно одно из A и B нечетны :" << bln(!(a % 2 == 0) ^ !(b % 2 == 0));
}

void boolean_task_11(int a, int b) {
	std::cout << "\nСправедливы неравенства, что числа A и B имеют одинаковую четность :" << bln(!((a % 2 != 0) ^ (b % 2 != 0)));
}

void boolean_task_12(int a, int b, int c) {
	std::cout << "\nСправедливы неравенства A, B и С положительны:" << bln((a > 0) && (b >0) && (c>0));
}

void boolean_task_13(int a, int b, int c) {
	std::cout << "\nСправедливы неравенства, хотя бы одно из чисел A, B и С положительно:" << bln((a > 0) || (b > 0) || (c > 0));
}

void boolean_task_14(int a, int b, int c) {
	bool x = (!((a > 0) || (b > 0)) && (c > 0)) ||
		(!((c > 0) || (b > 0)) && (a > 0)) ||
		(!((a > 0) || (c > 0)) && (b > 0));
	std::cout << "\nСправедливы неравенства, ровно одно из чисел A, B и С положительно:" << bln(x);
}

void boolean_task_15(int a, int b, int c) {
	bool x = (((a > 0) && (b > 0)) && !(c > 0)) ||
		(((c > 0) && (b > 0)) && !(a > 0)) ||
		(((a > 0) && (c > 0)) && !(b > 0));
	std::cout << "\nСправедливы неравенства, ровно два из чисел A, B и С положительно:" << bln(x);
}

void boolean_task_16(int a) {
	bool x = (a % 2 == 0) && (a < 100 && a > 9);
	std::cout << "\nСправедливы неравенства A двухзначно четное:" << bln(x);
}

void boolean_task_17(int a) {
	bool x = (a % 2 != 0) && (a < 1000 && a > 99);
	std::cout << "\nСправедливы неравенства A трехзначным нечетное:" << bln(x);
}

void boolean_task_18(int a, int b, int c) {
	std::cout << "\nСправедливы неравенства, есть хотя бы одна пара совпадающих чисел:" << bln(a == b || a == c || b == c);
}

void boolean_task_19(int a, int b, int c) {
	std::cout << "\nСправедливы неравенства, есть хотя бы одна пара взаимно противоположных чисел:" << bln(abs(a) == abs(b) || abs(a) == abs(c) || abs(b) == abs(c));
}

void boolean_task_20(int a) {
	int a1 = a / 100;
	int a2 = (a % 100) / 10;
	int a3 = a % 10;
	std::cout << "\nСправедливы неравенства, все цифры числа различны:" << bln(a1 != a2 || a2 != a3 || a3 != a1);
}

void boolean_task_21(int a) {
	int a1 = a / 100;
	int a2 = (a % 100) / 10;
	int a3 = a % 10;
	std::cout << "\nСправедливы неравенства, цифры числа образуют возрастающую последовательность:" << bln(a1 < a2 && a2 <	 a3);
}

void boolean_task_22(int a) {
	int a1 = a / 100;
	int a2 = (a % 100) / 10;
	int a3 = a % 10;
	std::cout << "\nСправедливы неравенства, цифры числа образуют возрастающую или убывающую последовательность:" << bln((a1 < a2&& a2 < a3) || (a1 > a2 && a2 > a3));
}

void boolean_task_23(int a) {
	int a1 = a / 1000;
	int a2 = (a % 1000) / 100;
	int a3 = (a / 10) % 10;
	int a4 = a % 10;
	std::cout << "\nСправедливы неравенства, число одинаково читаеться слева и справа:" << bln(a1==a4 && a2==a3);
}

void boolean_task_24(int a,int b,int c) {
	int d = b * b - 4 * a * c;
	std::cout << "\nСправедливы неравенства, квадратное уравнение имеет решение:" << bln(d>=0);
}

void boolean_task_25(int x, int y) {
	std::cout << "\nСправедливы неравенства, точка лежит во второй кординатной четверти:" << bln((x<0)&&(y>0));
}

void boolean_task_26(int x, int y) {
	std::cout << "\nСправедливы неравенства, точка лежит в четвертой кординатной четверти:" << bln((x > 0) && (y < 0));
}

void boolean_task_27(int x, int y) {
	std::cout << "\nСправедливы неравенства, точка лежит во второй или третий кординатной четверти:" << bln(x < 0);
}

void boolean_task_28(int x, int y) {
	std::cout << "\nСправедливы неравенства, точка лежит во первой или третий кординатной четверти:" << bln(!((x > 0) ^ (y > 0)));
}

void boolean_task_29(int x, int y, int x1, int y1, int x2, int y2) {
	std::cout << "\nСправедливы неравенства, точка лежит внутри прямоугольника:" << bln(x1 < x && x < x2 && y1 > y && y > y2);
}

void boolean_task_30(int a, int b, int c) {
	std::cout << "\nСправедливы неравенства, треугольник равносторонний:" << bln(a == b && b == c);
}

void boolean_task_31(int a, int b, int c) {
	std::cout << "\nСправедливы неравенства, треугольник равнобедренный:" << bln(a == b || b == c || c == a);
}

void boolean_task_32(int a, int b, int c) {
	bool x = ((a * a + b * b) == (c * c)) ||
		((a * a + c * c) == (b * b)) ||
		((b * b + c * c) == (a * a));
	std::cout << "\nСправедливы неравенства, треугольник прямоугольный:" << bln(x);
}

void boolean_task_33(int a, int b, int c) {
	bool x = (a + b > c) && (a + c > b) && (b + c > a);
	std::cout << "\nСправедливы неравенства, треугольник существует:" << bln(x);
}

void boolean_task_34(int x, int y) {
	std::cout << "\nСправедливы неравенства, данное поле шахматной доски является белым:" << bln((x + y) % 2 == 0);
}

void boolean_task_35(int x1, int y1, int x2,int y2) {
	std::cout << "\nСправедливы неравенства, данные поля шахматной доски имеют одинаковый цвет:" << bln(((x1 + y1) % 2) == ((x2 + y2) % 2));
}

void boolean_task_36(int x1, int y1, int x2, int y2) {
	std::cout << "\nСправедливы неравенства, ладья может походить на данное поле:" << bln(x1==x2 || y1==y2);
}

void boolean_task_37(int x1, int y1, int x2, int y2) {
	std::cout << "\nСправедливы неравенства, король может походить на данное поле:" << bln(abs(x1 - x2) <= 1 && abs(y1 - y2) <= 1);
}

void boolean_task_38(int x1, int y1, int x2, int y2) {
	std::cout << "\nСправедливы неравенства, слон может походить на данное поле:" << bln(abs(x1 - x2) == abs(y1 - y2));
}

void boolean_task_39(int x1, int y1, int x2, int y2) {
	bool x = abs(x1 - x2) == abs(y1 - y2) ||
		(abs(x1 - x2) <= 1 && abs(y1 - y2) <= 1) ||
		(x1 == x2 || y1 == y2);
	std::cout << "\nСправедливы неравенства, ферзь может походить на данное поле:" << bln(x);
}

void boolean_task_40(int x1, int y1, int x2, int y2) {
	bool x = (abs(x1 - x2) == 2 && abs(y1 - y2) == 1) || (abs(x1 - x2) == 1 && abs(y1 - y2) == 2);
	std::cout << "\nСправедливы неравенства, ферзь может походить на данное поле:" << bln(x);
}
