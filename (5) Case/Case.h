#ifndef Case_h
#define Case_h

#include <iostream>
using namespace std;

void case1() {
	system("cls");
	cout << "Case1." << endl;
	int x;
	cout << "������� ����� : " << endl;
	cin >> x;
	switch (x)
	{
	case 0:
		break;
	case 1:
		cout << "�����������";
		break;
	case 2:
		cout << "�������";
		break;
	case 3:
		cout << "�����";
		break;
	case 4:
		cout << "�������";
		break;
	case 5:
		cout << "�������";
		break;
	case 6:
		cout << "�������";
		break;
	case 7:
		cout << "�����������";
		break;
		system("pause");
	}
}

void case2() {
	system("cls");
	cout << "Case2." << endl;
	int x;
	cout << "������� ����� : " << endl;
	cin >> x;
	switch (x)
	{
	case 1:
		cout << "�����";
		break;
	case 2:
		cout << "�������������������";
		break;
	case 3:
		cout << "�����������������";
		break;
	case 4:
		cout << "������";
		break;
	case 5:
		cout << "�������";
		break;
	case 6:
		cout << "�������";
		break;
	default:
		cout << "������";
		break;
		system("pause");
	}
}

void case3() {
	system("cls");
	cout << "Case3." << endl;
	int x;
	cout << "������� ����� : " << endl;
	cin >> x;
	switch (x)
	{
	case 1:
		cout << "����";
		break;
	case 2:
		cout << "����";
		break;
	case 3:
		cout << "�����";
		break;
	case 4:
		cout << "�����";
		break;
	case 5:
		cout << "�����";
		break;
	case 6:
		cout << "����";
		break;
	case 7:
		cout << "����";
		break;
	case 8:
		cout << "����";
		break;
	case 9:
		cout << "�����";
		break;
	case 10:
		cout << "�����";
		break;
	case 11:
		cout << "�����";
		break;
	case 12:
		cout << "����";
		break;
	default:
		cout << "������";
		break;
		system("pause");
	}
}

void case4() {
	system("cls");
	cout << "Case4." << endl;
	int x;
	cout << "������� ����� : " << endl;
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
		cout << "������";
		break;
		system("pause");
	}
}

void case5() {
	system("cls");
	cout << "Case5." << endl;
	int x;
	double A, B;
	cout << "������� ����� : " << endl;
	cin >> x;
	cout << "������� ����� : " << endl;
	cin >> A;
	cout << "������� ����� : " << endl;
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
		cout << "������";
		break;
		system("pause");
	}
}
void case6() {
	system("cls");
	cout << "Case6." << endl;
	int x;
	double A;
	cout << "������� ����� : " << endl;
	cin >> x;
	cout << "������� ����� : " << endl;
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
		cout << "������";
		break;
		system("pause");
	}
}
void case7() {
	system("cls");
	cout << "Case7." << endl;
	int x;
	double A;
	cout << "������� ����� : " << endl;
	cin >> x;
	cout << "������� ����� : " << endl;
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
		cout << "������";
		break;
		system("pause");
	}
}
void case8() {
	system("cls");
	cout << "Case8." << endl;
	int M, D;
	cout << "������� ����� ������ : " << endl;
	cin >> M;
	cout << "������� ����� : " << endl;
	cin >> D;
	D--;
	if (D == 0) {
		M = M - 1;
	}
	switch (M)
	{
	case 1:
		D = 31;
		cout << "����: " << D << "." << M << endl;
		break;
	case 2:
		D = 28;
		cout << "����: " << D << "." << M << endl;
		break;
	case 3:
		D = 31;
		cout << "����: " << D << "." << M << endl;
		break;
	case 4:
		D = 30;
		cout << "����: " << D << "." << M << endl;
		break;
	case 5:
		D = 31;
		cout << "����: " << D << "." << M << endl;
		break;
	case 6:
		D = 30;
		cout << "����: " << D << "." << M << endl;
		break;
	case 7:
		D = 31;
		cout << "����: " << D << "." << M << endl;
		break;
	case 8:
		D = 31;
		cout << "����: " << D << "." << M << endl;
		break;
	case 9:
		D = 30;
		cout << "����: " << D << "." << M << endl;
		break;
	case 10:
		D = 31;
		cout << "����: " << D << "." << M << endl;
		break;
	case 11:
		D = 30;
		cout << "����: " << D << "." << M << endl;
		break;
	case 12:
		D = 31;
		cout << "����: " << D << "." << M << endl;
		break;
	default:
		cout << "������";
		break;
		system("pause");
	}
}
void case9() {
	system("cls");
	cout << "Case9." << endl;
	int M, D, Max;
	cout << "������� ����� ������ : " << endl;
	cin >> M;
	cout << "������� ����� : " << endl;
	cin >> D;
	D++;
	switch (M)
	{
	case 1:
		Max = 31;
		cout << "����: " << D << "." << M << endl;
		break;
	case 2:
		Max = 29;
		cout << "����: " << D << "." << M << endl;
		break;
	case 3:
		Max = 31;
		cout << "����: " << D << "." << M << endl;
		break;
	case 4:
		Max = 30;
		cout << "����: " << D << "." << M << endl;
		break;
	case 5:
		Max = 31;
		cout << "����: " << D << "." << M << endl;
		break;
	case 6:
		Max = 30;
		cout << "����: " << D << "." << M << endl;
		break;
	case 7:
		Max = 31;
		cout << "����: " << D << "." << M << endl;
		break;
	case 8:
		Max = 31;
		cout << "����: " << D << "." << M << endl;
		break;
	case 9:
		Max = 30;
		cout << "����: " << D << "." << M << endl;
		break;
	case 10:
		Max = 31;
		cout << "����: " << D << "." << M << endl;
		break;
	case 11:
		Max = 30;
		cout << "����: " << D << "." << M << endl;
		break;
	case 12:
		Max = 31;
		cout << "����: " << D << "." << M << endl;
		break;
	default:
		cout << "������";
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
	cout << "������ �����: " << D << "." << M;
	system("pause");

}

void case10() {
	system("cls");
	cout << "Case10." << endl;
	int n;
	char c;

	cout << "�����������:";
	cin >> c;
	cout << "�������:";
	cin >> n;

	switch (c) {
	case '�':
		switch (n) {
		case 1:
			c = '�';
			break;
		case 0:
			c = '�';
			break;
		case -1:
			c = '�';
			break;
		}
		break;
	case '�':
		switch (n) {
		case 1:
			c = '�';
			break;
		case 0:
			c = '�';
			break;
		case -1:
			c = '�';
			break;
		}
	case '�':
		switch (n) {
		case 1:
			c = '�';
			break;
		case 0:
			c = '�';
			break;
		case -1:
			c = '�';
			break;
		}
		break;
	case '�':
		switch (n) {
		case 1:
			c = '�';
			break;
		case 0:
			c = '�';
			break;
		case -1:
			c = '�';
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
	cout << "������� ������" << endl;
	cin >> c;
	cout << "������� �����" << endl;
	cin >> x;

	switch (c) {
		case '�':
			
	}
	system("pause");
}






#endif // !Case_h