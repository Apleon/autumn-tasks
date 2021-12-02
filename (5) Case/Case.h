#ifndef Case_h
#define Case_h

#include <iostream>
using namespace std;

void case1() {
	system("cls");
	cout << "Case1." << endl;
	int x;
	cout << "Введите число : " << endl;
	cin >> x;
	switch (x)
	{
	case 0:
		break;
	case 1:
		cout << "Понедельник";
		break;
	case 2:
		cout << "Вторник";
		break;
	case 3:
		cout << "Среда";
		break;
	case 4:
		cout << "Четверг";
		break;
	case 5:
		cout << "Пятница";
		break;
	case 6:
		cout << "Суббота";
		break;
	case 7:
		cout << "Воскресение";
		break;
		system("pause");
	}
}

void case2() {
	system("cls");
	cout << "Case2." << endl;
	int x;
	cout << "Введите число : " << endl;
	cin >> x;
	switch (x)
	{
	case 1:
		cout << "Плохо";
		break;
	case 2:
		cout << "Неудовлетворительно";
		break;
	case 3:
		cout << "Удовлетворительно";
		break;
	case 4:
		cout << "Хорошо";
		break;
	case 5:
		cout << "Отлично";
		break;
	case 6:
		cout << "Суббота";
		break;
	default:
		cout << "Ошибка";
		break;
		system("pause");
	}
}

void case3() {
	system("cls");
	cout << "Case3." << endl;
	int x;
	cout << "Введите число : " << endl;
	cin >> x;
	switch (x)
	{
	case 1:
		cout << "Зима";
		break;
	case 2:
		cout << "Зима";
		break;
	case 3:
		cout << "Весна";
		break;
	case 4:
		cout << "Весна";
		break;
	case 5:
		cout << "Весна";
		break;
	case 6:
		cout << "Лето";
		break;
	case 7:
		cout << "Лето";
		break;
	case 8:
		cout << "Лето";
		break;
	case 9:
		cout << "Осень";
		break;
	case 10:
		cout << "Осень";
		break;
	case 11:
		cout << "Осень";
		break;
	case 12:
		cout << "Зима";
		break;
	default:
		cout << "Ошибка";
		break;
		system("pause");
	}
}

void case4() {
	system("cls");
	cout << "Case4." << endl;
	int x;
	cout << "Введите число : " << endl;
	cin >> x;
	switch (x)
	{
	case 1:
		cout << "31";
		break;
	case 2:
		cout << "28";
		break;
	case 3:
		cout << "31";
		break;
	case 4:
		cout << "30";
		break;
	case 5:
		cout << "31";
		break;
	case 6:
		cout << "30";
		break;
	case 7:
		cout << "31";
		break;
	case 8:
		cout << "31";
		break;
	case 9:
		cout << "30";
		break;
	case 10:
		cout << "31";
		break;
	case 11:
		cout << "30";
		break;
	case 12:
		cout << "31";
		break;
	default:
		cout << "Ошибка";
		break;
		system("pause");
	}
}

void case5() {
	system("cls");
	cout << "Case5." << endl;
	int x;
	double A, B;
	cout << "Введите число : " << endl;
	cin >> x;
	cout << "Введите число : " << endl;
	cin >> A;
	cout << "Введите число : " << endl;
	cin >> B;
	switch (x)
	{
	case 1:
		cout << A + B;
		break;
	case 2:
		cout << A - B;
		break;
	case 3:
		cout << A * B;
		break;
	case 4:
		cout << A / B;
		break;
	default:
		cout << "Ошибка";
		break;
		system("pause");
	}
}
void case6() {
	system("cls");
	cout << "Case6." << endl;
	int x;
	double A;
	cout << "Введите число : " << endl;
	cin >> x;
	cout << "Введите число : " << endl;
	cin >> A;

	switch (x)
	{
	case 1:
		cout << A / 10;
		break;
	case 2:
		cout << A * 1000;
		break;
	case 3:
		cout << A;
		break;
	case 4:
		cout << A / 1000;
		break;
	case 5:
		cout << A / 100;
		break;
	default:
		cout << "Ошибка";
		break;
		system("pause");
	}
}
void case7() {
	system("cls");
	cout << "Case7." << endl;
	int x;
	double A;
	cout << "Введите число : " << endl;
	cin >> x;
	cout << "Введите число : " << endl;
	cin >> A;

	switch (x)
	{
	case 1:
		cout << A;
		break;
	case 2:
		cout << A / 1000000;
		break;
	case 3:
		cout << A / 1000;
		break;
	case 4:
		cout << A * 1000;
		break;
	case 5:
		cout << A * 100;
		break;
	default:
		cout << "Ошибка";
		break;
		system("pause");
	}
}
void case8() {
	system("cls");
	cout << "Case8." << endl;
	int M, D;
	cout << "Введите номер месяца : " << endl;
	cin >> M;
	cout << "Введите число : " << endl;
	cin >> D;
	D--;
	if (D == 0) {
		M = M - 1;
	}
	switch (M)
	{
	case 1:
		D = 31;
		cout << "Дата: " << D << "." << M << endl;
		break;
	case 2:
		D = 28;
		cout << "Дата: " << D << "." << M << endl;
		break;
	case 3:
		D = 31;
		cout << "Дата: " << D << "." << M << endl;
		break;
	case 4:
		D = 30;
		cout << "Дата: " << D << "." << M << endl;
		break;
	case 5:
		D = 31;
		cout << "Дата: " << D << "." << M << endl;
		break;
	case 6:
		D = 30;
		cout << "Дата: " << D << "." << M << endl;
		break;
	case 7:
		D = 31;
		cout << "Дата: " << D << "." << M << endl;
		break;
	case 8:
		D = 31;
		cout << "Дата: " << D << "." << M << endl;
		break;
	case 9:
		D = 30;
		cout << "Дата: " << D << "." << M << endl;
		break;
	case 10:
		D = 31;
		cout << "Дата: " << D << "." << M << endl;
		break;
	case 11:
		D = 30;
		cout << "Дата: " << D << "." << M << endl;
		break;
	case 12:
		D = 31;
		cout << "Дата: " << D << "." << M << endl;
		break;
	default:
		cout << "Ошибка";
		break;
		system("pause");
	}
}
void case9() {
	system("cls");
	cout << "Case9." << endl;
	int M, D, Max;
	cout << "Введите номер месяца : " << endl;
	cin >> M;
	cout << "Введите число : " << endl;
	cin >> D;
	D++;
	switch (M)
	{
	case 1:
		Max = 31;
		cout << "Дата: " << D << "." << M << endl;
		break;
	case 2:
		Max = 29;
		cout << "Дата: " << D << "." << M << endl;
		break;
	case 3:
		Max = 31;
		cout << "Дата: " << D << "." << M << endl;
		break;
	case 4:
		Max = 30;
		cout << "Дата: " << D << "." << M << endl;
		break;
	case 5:
		Max = 31;
		cout << "Дата: " << D << "." << M << endl;
		break;
	case 6:
		Max = 30;
		cout << "Дата: " << D << "." << M << endl;
		break;
	case 7:
		Max = 31;
		cout << "Дата: " << D << "." << M << endl;
		break;
	case 8:
		Max = 31;
		cout << "Дата: " << D << "." << M << endl;
		break;
	case 9:
		Max = 30;
		cout << "Дата: " << D << "." << M << endl;
		break;
	case 10:
		Max = 31;
		cout << "Дата: " << D << "." << M << endl;
		break;
	case 11:
		Max = 30;
		cout << "Дата: " << D << "." << M << endl;
		break;
	case 12:
		Max = 31;
		cout << "Дата: " << D << "." << M << endl;
		break;
	default:
		cout << "Ошибка";
		break;
		system("pause");
	}
	D++;
	if (D > Max) {
		if (M + 1 <= 12) {
			M++;
			D = 1;
		}
		else {
			M = 1;
			D = 1;
		}
	}
	cout << "Завтра будет: " << D << "." << M;
	system("pause");

}

void case10() {
	system("cls");
	cout << "Case10." << endl;
	int n;
	char c;

	cout << "Направление:";
	cin >> c;
	cout << "Команда:";
	cin >> n;

	switch (c) {
	case 'С':
		switch (n) {
		case 1:
			c = 'З';
			break;
		case 0:
			c = 'С';
			break;
		case -1:
			c = 'В';
			break;
		}
		break;
	case 'В':
		switch (n) {
		case 1:
			c = 'С';
			break;
		case 0:
			c = 'В';
			break;
		case -1:
			c = 'Ю';
			break;
		}
	case 'Ю':
		switch (n) {
		case 1:
			c = 'В';
			break;
		case 0:
			c = 'Ю';
			break;
		case -1:
			c = 'З';
			break;
		}
		break;
	case 'З':
		switch (n) {
		case 1:
			c = 'Ю';
			break;
		case 0:
			c = 'З';
			break;
		case -1:
			c = 'С';
			break;
		}
	}
	cout << c;
	system("pause");

}
void case10() {
	system("cls");
	cout << "Case10." << endl;

	int x;
	char c;
	cout << "Введите символ" << endl;
	cin >> c;
	cout << "Введите число" << endl;
	cin >> x;

	switch (c) {
		case 'С':
			
	}
	system("pause");
}






#endif // !Case_h