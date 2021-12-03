#include "Begin.h"

int main()
{
	system("chcp 1251");
	cout << "1000\n";
	cout << "Выберете раздел от 1 до 10\n" << "> ";
	int p;
	cin >> p;
	switch (p)
	{
	case 1:
	{
		do
		{
			cout << "Выберете задание от 1 до 40\n" << "> ";
			cin >> p;
			switch (p)
			{
			case 1:
			{
				double x;
				cin >> x; 
				cout << perimeterSquare(x);
			}
			case 2:
			{
				cout << "Введите сторону квадрата a\n";
				double a;
				cin >> a;
				cout << squareOfSquare(a);
				break;
			}
			case 3:
			{
				cout << "Введите стороны прямоугольника a и b\n";
				double a, b;
				cin >> a >> b;
				double c = a * b;
				b = 2 + (a * b);
				cout << c << ' ' << b;
				break;
			}
			case 4:
			{
				cout << "Введите диаметр окружности d\n";
				double d;
				cin >> d;
				const double pi = 3.14;
				d *= pi;
				cout << d;
				break;
			}
			case 5:
			{
				cout << "Введите длина ребра куба a\n";
				double a, b;
				cin >> a;
				b = pow(a, 3);
				a = 6 * pow(a, 2);
				cout << b << ' ' << a;
				break;
			}
			case 18:
			{
				cout << "Введите три точки A, B, C\n";
				double a, b, c;
				cin >> a >> b >> c;
				a = c - a;
				b = b - c;
				a *= b;
				cout << a;
				break;
			}
			case 22:
			{
				cout << "Введите  A, B\n";
				double a, b;
				cin >> a >> b;
				changeVeriablescontent(a, b);
				break;
			}
			case 27:
			{

				break;
			}
			case 29:
			{
				cout << "Введите значение угла a в градусах (0 < a < 360)\n";
				double a;
				cin >> a;
				a = a * 3.14 / 180;
				cout << a;
				break;
			}
			case 31:
			{
				cout << "Введите значение температуры T в градусах Фаренгейта\n";
				double t;
				cin >> t;
				t = (t - 32) * 5 / 9;
				cout << t;
				break;
			}
			case 32:
			{
				cout << "Введите значение температуры T в градусах Цельсия\n";
				double a;
				cin >> a;
				a = a * 9 / 5 + 32;
				cout << a;
				break;
			}
			case 33:
			{
				cout << "Введите X кг конфет и A рублей\n";
				double x, a;
				cin >> x >> a;
				a /= x;
				cout << "1 кг стоит: " << a;
				cout << "\nВведите Y кг этих же конфет\n";
				cin >> x;
				x /= a;
				cout << "Y кг стоит: " << x;
				break;
			}
			case 35:
			{
				cout << "Введите скорость лодки в стоячей воде V км/ч, скорость течения реки U км/ч (U < V).Время движения лодки по озеру T1 ч, а по реке(против течения) — T2 ч.\n";
				double v, u, t1, t2;
				cin >> v >> u >> t1;
				t1 *= v;
				v -= u;
				cin >> u;
				v = v * u + t1;
				cout << "Путь S, пройденный лодкой: " << v;
				break;
			}
			case 38:
			{
				cout << "Введите A и B\n";
				double a, b;
				cin >> a >> b;
				a = -b / a;
				cout << a << ' ';
				break;
			}
			case 40:
			{
				cout << "Введите A1, B1, C1, A2, B2, C2\n";
				double A1, B1, C1, A2, B2, C2, D, x, y;
				cin >> A1 >> B1 >> C1 >> A2 >> B2 >> C2;
				D = A1 * B2 - A2 * B1;
				x = (C1 * B2 - C2 * B1) / D;
				y = (A1 * C2 - A2 * C1) / D;
				cout << "x= " << x << ' ' << "y= " << y;
				break;
			}
			default:
			{
				cout << "Такого задания нет\n";
				p = 1;
				continue;
			}
			}
			cout << "\nВаполнить еще раз 1-Да, 2-Нет\n";
			cin >> p;
		} while (p == 1);
		break;
	}
	case 2:
	{
		do
		{
			cout << "Выберете задание от 1 до 40\n" << "> ";
			cin >> p;
			switch (p)
			{
			case 1:
			{
				cout << "Введите расстояние L в сантиметрах\n";
				int L;
				cin >> L;
				L /= 100;
				cout << L;
				break;
			}
			case 2:
			{
				cout << "Введите масса M в килограммах\n";
				int L;
				cin >> L;
				L /= 1000;
				cout << L;
				break;
			}
			case 3:
			{
				cout << "Введите размер файла в байтах\n";
				int L;
				cin >> L;
				L /= 1024;
				cout << L;
				break;
			}
			case 4:
			{
				cout << "Введите A и B (A>B)\n";
				int A, B;
				cin >> A >> B;
				if (B > A)
					swap(A, B);
				A /= B;
				cout << "количество отрезков B, размещенных на отрезке A " << A;
				break;
			}
			case 5:
			{
				cout << "Введите A и B (A>B)\n";
				int A, B;
				cin >> A >> B;
				if (B > A)
					swap(A, B);
				A %= B;
				cout << "длину незанятой части отрезка A " << A;
				break;
			}
			case 6:
			{
				cout << "Введите двузначное число\n";
				int a;
				cin >> a;
				cout << a % 10 << a / 10;
				break;
			}
			case 7:
			{
				cout << "Введите двузначное число\n";
				int a;
				cin >> a;
				int b = a % 10;
				a /= 10;
				a += b;
				cout << "сумму и произведение его цифр " << a;
				a -= b;
				a *= b;
				cout << ", " << a;
				break;
			}
			case 8:
			{
				cout << "Введите двузначное число\n";
				int a;
				cin >> a;
				int b = a % 10;
				b *= 10;
				a /= 10;
				a += b;
				cout << a;
				break;
			}
			case 9:
			{
				cout << "Введите трехзначное число\n";
				int a;
				cin >> a;
				a /= 100;
				cout << a;
				break;
			}
			case 10:
			{
				cout << "Введите трехзначное число\n";
				int a;
				cin >> a;
				cout << a % 10 << (a % 100) / 10;
				break;
			}
			case 11:
			{
				cout << "Введите трехзначное число\n";
				int a;
				cin >> a;
				int sum = 0;
				for (size_t i = 0; i < 3; i++)
				{
					sum = sum + a % 10;
					a /= 10;
				}
				cout << sum;
				break;
			}
			case 12:
			{
				cout << "Введите трехзначное число\n";
				int a;
				cin >> a;
				for (size_t i = 0; i < 3; i++)
				{
					cout << a % 10;
					a /= 10;
				}
				break;
			}
			case 13:
			{
				cout << "Введите трехзначное число\n";
				int a;
				cin >> a;
				cout << (a % 100) / 10 << a % 10 << (a % 1000) / 100;
				break;
			}
			case 14:
			{
				cout << "Введите трехзначное число\n";
				int a;
				cin >> a;
				cout << a % 10 << (a % 1000) / 100 << (a % 100) / 10;
				break;
			}
			case 15:
			{
				cout << "Введите трехзначное число\n";
				int a;
				cin >> a;
				cout << (a % 100) / 10 << (a % 1000) / 100 << a % 10;
				break;
			}
			case 16:
			{
				cout << "Введите трехзначное число\n";
				int a;
				cin >> a;
				cout << (a % 1000) / 100 << a % 10 << (a % 100) / 10;
				break;
			}
			case 17:
			{
				int a = 999 + rand() % 99002;
				cout << (a % 1000) / 100;
				break;
			}
			case 24:
			{
				cout << "Введите K\n";
				int k;
				cin >> k;
				cout << (k+1) % 7;
				break;
			}
			case 25:
			{
				cout << "Введите K\n";
				int k;
				cin >> k;
				cout << (k + 3) % 7;
				break;
			}
			case 29:
			{
				cout << "Введите A,B,C\n";
				int A,B,C;
				cin >> A >> B >> C;
				int S = A * B;
				int S2 = C * C;
				int m = S / S2;
				int o = S - m * S2;
				cout << "Кол-во : " << m << endl << "Остаток : " << o << endl;
			}
			default:
			{
				cout << "Такого задания нет\n";
				p = 1;
				continue;
			}
			}
			cout << endl << "Ваполнить еще раз 1-Да, 2-Нет\n";
			cin >> p;
		} while (p == 1);
		break;
	}
	case 3:
	{
		do
		{

			cout << "Выберете задание от 1 до 40\n" << "> ";
			cin >> p;
			switch (p)
			{
			case 1:
			{

			}
			default:
			{
				cout << "Такого задания нет\n";
				p = 1;
				continue;
			}
			}

			cout << endl << "Ваполнить еще раз 1-Да, 2-Нет\n";
			cin >> p;
		} while (p == 1);
		break;
	}
	case 4:
	{
		do
		{

			cout << "Выберете задание от 1 до 30\n" << "> ";
			cin >> p;
			switch (p)
			{
			case 1:
			{
				cout << "Введите целое число\n";
				int a;
				cin >> a;
				if (a > 0)
					a++;
				cout << a;
				break;
			}
			case 5:
			{
				cout << "Введите три целых числа\n";
				int a, b, c, s = 0;
				cin >> a >> b >> c;
				if (a > 0)
					s++;
				if (b > 0)
					s++;
				if (c > 0)
					s++;
				cout << s;
				break;
			}
			case 6:
			{
				cout << "Введите два числа\n";
				double a, b;
				cin >> a >> b;
				cout << max(a, b);
				break;
			}
			case 12:
			{
				cout << "Введите три числа\n";
				double a, b, c;
				cin >> a >> b >> c;
				a = min(a, b);
				if (a < c)
					cout << a;
				else
					cout << c;
				break;
			}
			case 17:
			{
				cout << "Введите три числа\n";
				double a, b, c;
				cin >> a >> b >> c;
				if (a < b && b < c || a > b && b > c)
				{
					a *= 2;
					b *= 2;
					c *= 2;
				}
				else
				{
					a *= -1;
					b *= -1;
					c *= -1;
				}
				cout << a << ' ' << b << ' ' << c;
				break;
			}
			case 26:
			{
				cout << "Введите вещественное X\n";
				double x;
				cin >> x;
				if (x <= 0)
					x *= -1;
				else if (0 < x && x < 2)
					x = pow(x, 2);
				else
					x = 4;
				cout << x;
				break;
			}
			case 27:
			{
				cout << "Введите вещественное X\n";
				double x;
				cin >> x;
				int f = -1;
				if (x < 0)
					f = 0;
				else
					for (size_t i = 0; i <= x; i += 2)
						if (x >= i && x < i + 1)
						{
							f = 1;
							break;
						}
				cout << f;
			}
			case 30:
			{
				for (size_t i = 0; i < 200; i++)
				{
					int a = 1 + rand() % 999;
					cout << a;
					if (a % 2 == 0)
						cout << " - четное ";
					else
						cout << " - нечетное ";

					if (a / 10 == 0)
						cout << "однозначное";
					else if (a / 100 == 0)
						cout << "двузначное";
					else
						cout << "трехзначное";
					cout << " число\n";
				}
				break;
			}
			default:
			{
				cout << "Такого задания нет\n";
				p = 1;
				continue;
			}
			}

			cout << endl << "Ваполнить еще раз 1-Да, 2-Нет\n";
			cin >> p;
		} while (p == 1);
		break;
	}
	case 5:
	{

	}
	case 6:
	{
		do
		{

			cout << "Выберете задание от 1 до 30\n" << "> ";
			cin >> p;
			switch (p)
			{
			case 1:
			{
				break;
			}
			default:
			{
				cout << "Такого задания нет\n";
				p = 1;
				continue;
			}
			}
			cout << endl << "Ваполнить еще раз 1-Да, 2-Нет\n";
			cin >> p;
		} while (p == 1);
		break;
	}
	default:
	{
		cout << "Такого такого раздела нет\n";
		main();
	}
	}
	return 0;
}


