#ifndef If_h
#define If_h

#include <iostream>
using namespace std;

void if1() {
	system("cls");
	cout << "If1." << endl;
	int x;
	cout << "������� ����� : " << endl;
	cin >> x;

	if (x > 0) {
		x++;
	}


	cout << "Answer: " << x << endl;
	system("pause");
}
void if2() {
	system("cls");
	cout << "If2." << endl;
	int x;
	cout << "������� ����� : " << endl;
	cin >> x;

	if (x > 0) {
		x++;
	}
	else if (x < 0) {
		x = x - 2;
	}


	cout << "Answer: " << x << endl;
	system("pause");
}
void if3() {
	system("cls");
	cout << "If3." << endl;
	int x;
	cout << "������� ����� : " << endl;
	cin >> x;

	if (x > 0) {
		x++;
	}
	else if (x == 0) {
		x = 10;
	}
	else {
		x = x - 2;
	}


	cout << "Answer: " << x << endl;
	system("pause");
}
void if4() {
	system("cls");
	cout << "If4." << endl;
	int x, y, z, l = 0;
	cout << "������� ����� : " << endl;
	cin >> x;
	cout << "������� ����� : " << endl;
	cin >> y;
	cout << "������� ����� : " << endl;
	cin >> z;
	if (x > 0) {
		l++;
	}
	if (y > 0) {
		l++;
	}
	if (z > 0) {
		l++;
	}


	cout << "Answer: " << x << endl;
	system("pause");
}
void if5() {
	system("cls");
	cout << "If5." << endl;
	int x, y, z, l = 0, r = 0;
	cout << "������� ����� : " << endl;
	cin >> x;
	cout << "������� ����� : " << endl;
	cin >> y;
	cout << "������� ����� : " << endl;
	cin >> z;
	if (x > 0) {
		l++;
	}
	else if (x < 0) {
		r++;
	}
	if (y > 0) {
		l++;
	}
	else if (y < 0) {
		r++;
	}
	if (z > 0) {
		l++;
	}
	else if (z < 0) {
		r++;
	}

	cout << "Answer: " << x << endl;
	system("pause");
}
void if6() {
	system("cls");
	cout << "If6." << endl;
	int x, y;
	cout << "������� ����� : " << endl;
	cin >> x;
	cout << "������� ����� : " << endl;
	cin >> y;
	if (x > y) {
		cout << "Answer: " << x << endl;
	}
	if (y > x) {
		cout << "Answer: " << y << endl;
	}
	if (y == x) {
		cout << "Answer: " << x << " = " << y << endl;
	}
	system("pause");
}
void if7() {
	system("cls");
	cout << "If7." << endl;
	int x, y;
	cout << "������� ����� : " << endl;
	cin >> x;
	cout << "������� ����� : " << endl;
	cin >> y;
	if (x > y) {
		cout << "Answer: 1 " << endl;
	}
	if (y > x) {
		cout << "Answer: 2" << endl;
	}
	if (y == x) {
		cout << "Answer: " << x << " = " << y << endl;
	}
	system("pause");
}
void if8() {
	system("cls");
	cout << "If8." << endl;
	int x, y;
	cout << "������� ����� : " << endl;
	cin >> x;
	cout << "������� ����� : " << endl;
	cin >> y;
	if (x > y) {
		cout << "Answer:  " << x << "\t" << y << endl;
	}
	if (y > x) {
		cout << "Answer: " << y << "\t" << x << endl;
	}
	if (y == x) {
		cout << "Answer: " << x << " = " << y << endl;
	}
	system("pause");
}
void if9() {
	system("cls");
	cout << "If9." << endl;
	double A, B, save;
	cout << "������� ����� : " << endl;
	cin >> A;
	cout << "������� ����� : " << endl;
	cin >> B;
	if (A > B) {
		save = B;
		B = A;
		A = save;
		cout << "Answer:  " << A << "\t" << B << endl;
	}
	else if (B > A) {
		cout << "Answer: " << A << "\t" << B << endl;
	}
	system("pause");
}
void if10() {
	system("cls");
	cout << "If10." << endl;
	double A, B, save1, save2;
	cout << "������� ����� : " << endl;
	cin >> A;
	cout << "������� ����� : " << endl;
	cin >> B;
	if (A != B) {
		save1 = B;
		save2 = A;
		B = save1 + save2;
		A = save1 + save2;
		cout << "Answer:  " << A << "\t" << B << endl;
	}
	if (B == A) {
		B = 0;
		A = 0;
		cout << "Answer: " << A << "\t" << B << endl;
	}
	system("pause");
}
void if11() {
	system("cls");
	cout << "If11." << endl;
	double A, B, more, less;
	cout << "������� ����� : " << endl;
	cin >> A;
	cout << "������� ����� : " << endl;
	cin >> B;
	if (A != B) {
		if (A > B) {
			more = A;
			less = B;
		}
		else if (A < B) {
			more = B;
			less = A;
		}
		A = more;
		B = more;
		cout << "Answer:  " << A << "\t" << B << endl;
	}
	else if (B == A) {
		B = 0;
		A = 0;
		cout << "Answer: " << A << "\t" << B << endl;
	}
	system("pause");
}
void if12() {
	system("cls");
	cout << "If12." << endl;
	int x, y, z, Lul = 0;
	cout << "������� ����� : " << endl;
	cin >> x;
	cout << "������� ����� : " << endl;
	cin >> y;
	cout << "������� ����� : " << endl;
	cin >> z;
	if (x > y) {
		if (y > z) {
			Lul = z;
		}
		else if (z >= y) {
			Lul == y;
		}
	}
	else if (x < y) {
		if (x > z) {
			Lul = z;
		}
		else if (z >= x) {
			Lul = x;
		}
	}
	cout << "Answer: " << Lul << endl;
	system("pause");
}
void if13() {
	system("cls");
	cout << "If13." << endl;
	int x, y, z;
	cout << "������� ����� : " << endl;
	cin >> x;
	cout << "������� ����� : " << endl;
	cin >> y;
	cout << "������� ����� : " << endl;
	cin >> z;
	if ((y <= x) && (x <= z) || (y >= x) && (x >= z)) {
		cout << "Answer: " << x << endl;
	}
	else if ((x <= y) && (y <= z) || (x >= y) && (y >= z)) {
		cout << "Answer: " << y << endl;
	}
	else {
		cout << "Answer: " << z << endl;
	}
	system("pause");
}
void if14() {
	system("cls");
	cout << "If14." << endl;
	int x, y, z;
	cout << "������� ����� : " << endl;
	cin >> x;
	cout << "������� ����� : " << endl;
	cin >> y;
	cout << "������� ����� : " << endl;
	cin >> z;
	if ((x > y) && (x > z)) {
		cout << "����������: " << x << endl;
	}
	else if ((y > x) && (y > z)) {
		cout << "����������: " << y << endl;
	}
	else if ((z > y) && (z > x)) {
		cout << "����������: " << z << endl;
	}

	if ((x < y) && (z > x)) {
		cout << "����������: " << x << endl;
	}
	else if ((y < x) && (z > y)) {
		cout << "����������: " << y << endl;
	}
	else if ((z < y) && (x > z)) {
		cout << "����������: " << z << endl;
	}
	system("pause");
}
void if15() {
	system("cls");
	cout << "If15." << endl;
	int x, y, z, sum = 0;
	cout << "������� ����� : " << endl;
	cin >> x;
	cout << "������� ����� : " << endl;
	cin >> y;
	cout << "������� ����� : " << endl;
	cin >> z;
	if ((x > y) && (x > z)) {
		sum = sum + x;
	}
	else if ((y > x) && (y > z)) {
		sum = sum + y;
	}
	else if ((z > y) && (z > x)) {
		sum = sum + z;
	}

	if ((y <= x) && (x <= z) || (y >= x) && (x >= z)) {
		sum = sum + x;
	}
	else if ((x <= y) && (y <= z) || (x >= y) && (y >= z)) {
		sum = sum + y;
	}
	else {
		sum = sum + z;
	}
	cout << "Answer: " << sum << endl;
	system("pause");
}
void if16() {
	system("cls");
	cout << "If16." << endl;
	double A, B, C;
	cout << "������� ����� : " << endl;
	cin >> A;
	cout << "������� ����� : " << endl;
	cin >> B;
	cout << "������� ����� : " << endl;
	cin >> C;
	if ((A <= B) && (B <= C)) {
		A = A * 2;
		B = B * 2;
		C = C * 2;
		cout << "Answer: " << A << "\t" << B << "\t" << C << endl;
	}
	else {
		A = A * (-1);
		B = B * (-1);
		C = C * (-1);
		cout << "Answer: " << A << "\t" << B << "\t" << C << endl;
	}
	system("pause");
}
void if17() {
	system("cls");
	cout << "If17." << endl;
	double A, B, C;
	cout << "������� ����� : " << endl;
	cin >> A;
	cout << "������� ����� : " << endl;
	cin >> B;
	cout << "������� ����� : " << endl;
	cin >> C;
	if (((A <= B) && (B <= C)) || ((A >= B) && (B >= C))) {
		A = A * 2;
		B = B * 2;
		C = C * 2;
		cout << "Answer: " << A << "\t" << B << "\t" << C << endl;
	}
	else {
		A = A * (-1);
		B = B * (-1);
		C = C * (-1);
		cout << "Answer: " << A << "\t" << B << "\t" << C << endl;
	}
	system("pause");
}
void if18() {
	system("cls");
	cout << "If18." << endl;
	double A, B, C;
	cout << "������� ����� : " << endl;
	cin >> A;
	cout << "������� ����� : " << endl;
	cin >> B;
	cout << "������� ����� : " << endl;
	cin >> C;
	if ((A == B) && (A != C)) {
		cout << "Answer: 3" << endl;
	}
	else if ((B == C) && (B != A)) {
		cout << "Answer: 1" << endl;
	}
	else if ((C == A) && (A != B)) {
		cout << "Answer: 2" << endl;
	}
	system("pause");
}
void if19() {
	system("cls");
	cout << "If19." << endl;
	int A, B, C, D;
	cout << "������� ����� : " << endl;
	cin >> A;
	cout << "������� ����� : " << endl;
	cin >> B;
	cout << "������� ����� : " << endl;
	cin >> C;
	cout << "������� ����� : " << endl;
	cin >> D;
	if ((A == B) & (B == D) && (A != C)) {
		cout << "Answer: 3" << endl;
	}
	else if ((B == C) && (D == B) & (B != A)) {
		cout << "Answer: 1" << endl;
	}
	else if ((C == A) && (D == C) & (A != B)) {
		cout << "Answer: 2" << endl;
	}
	else if ((C == A) && (B == C) & (D != B)) {
		cout << "Answer: 4" << endl;
	}
	system("pause");
}
void if20() {
	system("cls");
	cout << "If20." << endl;
	int A, B, C;
	cout << "������� ����� : " << endl;
	cin >> A;
	cout << "������� ����� : " << endl;
	cin >> B;
	cout << "������� ����� : " << endl;
	cin >> C;
	if (A - B > A - C) {
		cout << "Answer: C - �����" << endl;
	}
	else if (A - B < A - C) {
		cout << "Answer: B - �����" << endl;
	}
	else if (A - B == A - C) {
		cout << "Answer: B � C - ������������" << endl;
	}
	system("pause");
}
void if21() {
	system("cls");
	cout << "If21." << endl;
	int x, y;
	cout << "������� ����� : " << endl;
	cin >> x;
	cout << "������� ����� : " << endl;
	cin >> y;
	if (x == 0 && y == 0) {
		cout << "0" << endl;
	}
	else if (x == 0 && y != 0) {
		cout << "1" << endl;
	}
	else if (x != 0 && y == 0) {
		cout << "2" << endl;
	}
	else {
		cout << "3" << endl;
	}

	system("pause");
}
void if22() {
	system("cls");
	cout << "If22." << endl;
	int x, y;
	cout << "������� ����� : " << endl;
	cin >> x;
	cout << "������� ����� : " << endl;
	cin >> y;

	if (x > 0 && y > 0) {
		cout << "������ ��������";
	}
	else if (x < 0 && y>0) {
		cout << "������ ��������";
	}
	else if (x < 0 && y < 0) {
		cout << "������ ��������";
	}
	else {
		cout << "��������� ��������";
	}
	system("pause");
}

void if23() {
	system("cls");
	cout << "If23." << endl;
	int x, y, x2, y2, x3, y3;
	cout << "������� ����� : " << endl;
	cin >> x;
	cout << "������� ����� : " << endl;
	cin >> y;
	cout << "������� ����� : " << endl;
	cin >> x2;
	cout << "������� ����� : " << endl;
	cin >> y2;
	cout << "������� ����� : " << endl;
	cin >> x3;
	cout << "������� ����� : " << endl;
	cin >> y3;

	if (x2 == x3)
		cout << "x4:" << x << endl;
	else
		if (x3 == x)
			cout << "x4:" << x2 << endl;
		else
			cout << "x4:" << x3 << endl;

	if (y2 == y3)
		cout << "y4:" << y;
	else
		if (y3 == y)
			cout << "y4:" << y2;
		else
			cout << "y4:" << y2;
	system("pause");
}


void if24() {
	system("cls");
	cout << "If24." << endl;
	int x;
	cout << "������� ����� : " << endl;
	cin >> x;

	if (x > 0) {
		cout << "Answer: " << 2 * sin(x);
	}
	else if (x <= 0) {
		cout << "Answer: " << 6 - x;
	}
	system("pause");
}
void if25() {
	system("cls");
	cout << "If25." << endl;
	int x;
	cout << "������� ����� : " << endl;
	cin >> x;

	if (x < (-2) || x>2) {
		cout << "Answer: " << 2 * x;
	}
	else {
		cout << "Answer: " << -3 * x;
	}
	system("pause");
}

void if26() {
	system("cls");
	cout << "If26." << endl;
	double x;
	cout << "������� ����� : " << endl;
	cin >> x;

	if (x <= 0) {
		cout << "Answer: " << (-1) * x;
	}
	else if (0 < x && x < 2) {
		cout << "Answer: " << x * x;
	}
	else if (x >= 2) {
		cout << "Answer: 4";
	}
	system("pause");
}
void if27() {
	system("cls");
	cout << "If27." << endl;
	int x;
	cout << "������� ����� : " << endl;
	cin >> x;

	if (x < 0) {
		cout << "Answer: " << x * 0;
	}
	else if (x % 2 == 0) {
		cout << "Answer: 1";
	}
	else {
		cout << "Answer: 4";
	}
	system("pause");
}
void if28() {
	system("cls");
	cout << "If28." << endl;
	int x;
	cout << "������� ��� : " << endl;
	cin >> x;

	if (x % 100 == 0) {
		if (x % 400 == 0) { cout << "366 days"; }
		else { cout << "365 days"; }
	}
	else if (x % 4 == 0) {
		cout << "366 days";
	}
	else {
		cout << "365 days";
	}
	system("pause");
}
void if29() {
	system("cls");
	cout << "If29." << endl;
	int x;
	cout << "������� ����� : " << endl;
	cin >> x;
	if (x == 0) { cout << "������� "; }
	else { cout << " �� ������� "; }
	if (x > 0) { cout << " ������������� "; }
	else if (x < 0) { cout << " ������������� "; }

	if (x % 2 == 0 && x != 0) { cout << " ������ "; }
	else if (x % 2 != 0 && x != 0) { cout << " �������� "; }
	system("pause");
}
void if30() {
	system("cls");
	cout << "If30." << endl;
	int x;
	cout << "������� ����� : " << endl;
	cin >> x;
	if (x == 0) { cout << "������� "; }
	else { cout << " �� ������� "; }
	if (x > 0) { cout << " ������������� "; }
	else if (x < 0) { cout << " ������������� "; }

	if (x % 2 == 0 && x != 0) { cout << " ������ "; }
	else if (x % 2 != 0 && x != 0) { cout << " �������� "; }
	if (x >= 100) { cout << " ����������� ����� "; }
	else if (x >= 10) { cout << " ���������� ����� "; }
	else { cout << "�����"; }
	system("pause");
}







#endif // !If_h