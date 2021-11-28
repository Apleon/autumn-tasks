#include<iostream>
#include<math.h>

void begin_task_1(double a) {
	std::cout << "Периметр:" << 4 * a;
}

void begin_task_2(double a) {
	std::cout << "Площадь:" << a * a;
}

void begin_task_3(double a, double b) {
	std::cout << "Площадь:" << a * b << "\nПериметр:" << 2 * (a + b);
}

void begin_task_4(double d) {
	std::cout << "Длинна окружности:" << d * 3.14;
}

void begin_task_5(double a) {
	std::cout << "Обьем куба:" << pow(a, 3) << "\nПлощадь поверхности:" << 2 * a * a;
}

void begin_task_6(double a, double c, double b) {
	std::cout << "Обьем:" << a * c * b << "\nПлощадь поверхности:" << 2 * (a * b + b * c + c * a);
}

void begin_task_7(double r) {
	std::cout << " Площадь круга:" << 3.14 * r * r << "\nДлинна окружности:" << 2 * 3.14 * r;
}

void begin_task_8(double a, double b) {
	std::cout << "Среднее арифметическое:" << (a + b) / 2;
}

void begin_task_9(double a, double b) {
	std::cout << "Среднее геометрическое:" << pow(a + b, 2);
}

void begin_task_10(double a, double b) {
	double a2 = a * a;
	double b2 = b * b;
	std::cout << "Сумма:" << a2 + b2 << "\nРазность:" << a2 - b2 << "\nПроизведение:" << a2 * b2 << "\nЧастное:" << a2 / b2;
}

void begin_task_11(double a, double b) {
	double am = abs(a);
	double bm = abs(b);
	std::cout << "Сумма:" << am + bm << "\nРазность:" << am - bm << "\nПроизведение:" << am * bm << "\nЧастное:" << am / bm;
}

void begin_task_12(double a, double b) {
	double c = sqrt(a * a + b * b);
	std::cout << "Гипотенуза равна:" << c << "\nПериметр:" << a + b + c;
}

void begin_task_13(double r1, double r2) {
	double s1 = r1 * r1 * 3.14;
	double s2 = r2 * r2 * 3.14;
	std::cout << "Площадь первого круга:" << s1 << "\nПлощадь второго курга:" << s2 << "\nПлощаь кольца:" << s1 - s2;
}

void begin_task_14(double l) {
	double r = l / (2 * 3.14);
	double s = 3.14 * r * r;
	std::cout << "Радиус:" << r << "\nПлощадь :" << s;
}

void begin_task_15(double s) {
	double d = sqrt(s / (3.14 * 4));
	double l = d / 3.14;
	std::cout << "Диаметр:" << d << "\nДлинна окружности:" << l;
}

void begin_task_16(double x1, double x2) {
	std::cout << "Расстояние:" << abs(x1 - x2);
}

void begin_task_17(double s) {
	double d = sqrt(s / (3.14 * 4));
	double l = d / 3.14;
	std::cout << "Диаметр:" << d << "\nДлинна окружности:" << l;
}

void begin_task_18(double a, double b, double c) {
	std::cout << "Произведение отрезков:" << abs(a - c) * abs(c - b);
}

void begin_task_19(double x1, double y1, double x2, double y2) {
	std::cout << "Площадь прямоугольника:" << abs(x1 - x2) * abs(y1 - y1) << "\nПериметр прямоугольника:" << 2 * (abs(x1 - x2) + abs(y1 - y1));
}

void begin_task_20(double x1, double y1, double x2, double y2) {
	std::cout << "Расстояние между точками:" << sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) + (y2 - y1));
}

void begin_task_21(double x1, double y1, double x2, double y2, double x3, double y3) {
	double a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) + (y2 - y1));
	double b = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) + (y3 - y1));
	double c = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) + (y2 - y3));
	double p = (a + b + c) / 2;
	std::cout << "Площадь треугольника:" << sqrt(p * (p - a) * (p - b) * (p - c));
}

void begin_task_22(double a, double b) {
	double c = a;
	a = b;
	b = c;
	std::cout << "A:" << a << "\n B:" << b;
}

void begin_task_23(double a, double b, double c) {
	double i = a;
	a = c;
	c = b;
	b = i;
	std::cout << "A:" << a << "\n B:" << b << "\n C:" << c;
}

void begin_task_24(double a, double b, double c) {
	double i = a;
	a = b;
	b = c;
	c = i;
	std::cout << "A:" << a << "\n B:" << b << "\n C:" << c;
}

void begin_task_25(double x) {
	std::cout << "Y:" << 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
}

void begin_task_26(double x) {
	std::cout << "Y:" << 4 * pow(x - 3, 6) - 7 * pow(x - 3, 3) + 2;
}

void begin_task_27(double a) {
	double aa = a * a;
	std::cout << "A^2:" << aa;
	aa = aa * aa;
	std::cout << "A^4:" << aa;
	aa = aa * aa;
	std::cout << "A^8:" << aa;
}

void begin_task_28(double a) {
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

void begin_task_29(double a) {
	std::cout << " Градусы:" << a * 180 / 3.14;
}

void begin_task_30(double a) {
	std::cout << " Радианы:" << a * 3.14 / 180;
}

void begin_task_31(double tf) {
	std::cout << " Градусы Цельсия:" << (tf - 32) * 5 / 9.0;
}

void begin_task_32(double tc) {
	std::cout << " Градусы Цельсия:" << tc * 9 / 5 + 32;
}

void begin_task_33(double x, double a, double y) {
	double x1 = a / x;

	std::cout << " Один килограмм конфет стоит:" << x1 << "\nКилограмм Y конфет стоит:" << y * x1;
}

void begin_task_34(double x, double a, double y, double b) {
	double x1 = a / x;
	double y1 = b / y;
	std::cout << " Один килограмм шоколадных конфет стоит:" << x1 << "\nОдин килограмм шоколадных конфет стоит:" << y1 << "\nРазница в стоймости равна:" << abs(x1 - y1);
}

void begin_task_35(double v, double u, double t1, double t2) {
	std::cout << "Лодка против течения прошла расстояние равное:" << (v - u) * t1 << "\nлодка по течения прошла расстояние равное" << (v + u) * t2;
}

void begin_task_36(double v1, double v2, double t, double s) {
	std::cout << "Расстояние между машинами после T времени равно:" << (v1 + v2) * t + s;
}

void begin_task_37(double a, double b) {
	std::cout << "X равно:" << (-1) * b / a;
}

void begin_task_38(double a, double b, double c) {
	double d = b * b - 4 * a * c;
	std::cout << "X1 равно:" << (-1) * b - pow(d, 0.5) / (2 * a) << "\nX2 равно:" << (-1) * b + pow(d, 0.5) / (2 * a);
}

void begin_task_39(double a, double b, double c) {
	double d = b * b - 4 * a * c;
	std::cout << "X1 равно:" << (-1) * b - pow(d, 0.5) / (2 * a) << "\nX2 равно:" << (-1) * b + pow(d, 0.5) / (2 * a);
}

void begin_task_40(double a1, double a2, double b1, double b2, double c1, double c2) {
	double d = a1 * b2 - b1 * a2;
	std::cout << "X равно:" << (c1 * b2 - c2 * b2) / d << "\nY равно:" << (a1 * c2 - a2 * c1) / d;
}
