#ifndef Integer_h
#define Integer_h

#include <iostream>
using namespace std;

void integer1() {
	system("cls");
	cout << "Integer1." << endl;
	int delimoe, raznost;
	cout << "Введите L: " << endl;
	cin >> delimoe;
	raznost = delimoe / 100;
	cout << "Ответ: " << raznost << endl;
	system("pause");
}
void integer2() {
	system("cls");
	cout << "Integer2." << endl;
	int M, raznost;
	cout << "Введите M: " << endl;
	cin >> M;
	raznost = M / 1000;
	cout << "Ответ: " << raznost << endl;
	system("pause");
}
void integer3() {
	system("cls");
	cout << "Integer3." << endl;
	int M, raznost;
	cout << "Введите M: " << endl;
	cin >> M;
	raznost = M / 1024;
	cout << "Ответ: " << raznost << endl;
	system("pause");
}
void integer4() {
	system("cls");
	cout << "Integer4." << endl;
	int A, B, raznost;
	cout << "Введите A: " << endl;
	cin >> A;
	cout << "Введите B: " << endl;
	cin >> B;
	raznost = A / B;
	cout << "Ответ: " << raznost << endl;
	system("pause");
}
void integer5() {
	system("cls");
	cout << "Integer5." << endl;
	int A, B, raznost;
	cout << "Введите A: " << endl;
	cin >> A;
	cout << "Введите B: " << endl;
	cin >> B;
	raznost = A % B;
	cout << "Ответ: " << raznost << endl;
	system("pause");
}
void integer6() {
	system("cls");
	cout << "Integer6." << endl;
	int A;
	cout << "Введите A: " << endl;
	cin >> A;
	int ost = A % 10;
	int cel = A / 10;
	cout << "Ответ: " << cel << "\t" << ost << endl;
	system("pause");
}
void integer7() {
	system("cls");
	cout << "Integer7." << endl;
	int A;
	cout << "Введите A: " << endl;
	cin >> A;
	int ost = A % 10;
	int cel = A / 10;
	cout << "Ответ: " << cel + ost << endl;
	system("pause");
}
void integer8() {
	system("cls");
	cout << "Integer8." << endl;
	int A;
	cout << "Введите A: " << endl;
	cin >> A;
	int ost = A % 10;
	int cel = A / 10;
	cout << "Ответ: " << ost << cel << endl;
	system("pause");
}
void integer9() {
	system("cls");
	cout << "Integer9." << endl;
	int A;
	cout << "Введите A: " << endl;
	cin >> A;
	int x = A / 100;
	cout << "Ответ: " << x << endl;
	system("pause");
}
void integer10() {
	system("cls");
	cout << "Integer10." << endl;
	int A;
	cout << "Введите A: " << endl;
	cin >> A;
	int y = A / 10;
	int z = A % 10;

	cout << "Ответ: " << z << "\t" << y << endl;
	system("pause");
}
void integer11() {
	system("cls");
	cout << "Integer11." << endl;
	int A;
	cout << "Введите A: " << endl;
	cin >> A;
	int x = A / 100;
	int y = A / 10;
	int z = A % 10;
	cout << "Произведение : " << x * y * z << endl;
	cout << "Сумма : " << x + y + z << endl;
	system("pause");
}
void integer12() {
	system("cls");
	cout << "Integer12." << endl;
	int A;
	cout << "Введите A: " << endl;
	cin >> A;
	int x = A / 100;
	int y = A / 10;
	int z = A % 10;
	cout << "Answer : " << z << y << x << endl;
	system("pause");
}
void integer13() {
	system("cls");
	cout << "Integer13." << endl;
	int A;
	cout << "Введите A: " << endl;
	cin >> A;
	int x = A / 100;
	int y = A / 10;
	int z = A % 10;
	cout << "Answer : " << z << y << x << endl;
	system("pause");
}
void integer14() {
	system("cls");
	cout << "Integer14." << endl;
	int A;
	cout << "Введите A: " << endl;
	cin >> A;
	int x = A / 100;
	int y = A / 10;
	int z = A % 10;
	cout << "Answer : " << z << x << y << endl;
	system("pause");
}
void integer15() {
	system("cls");
	cout << "Integer15." << endl;
	int A;
	cout << "Введите A: " << endl;
	cin >> A;
	int x = A / 100;
	int y = A / 10;
	int z = A % 10;
	cout << "Answer : " << y << x << z << endl;
	system("pause");
}
void integer16() {
	system("cls");
	cout << "Integer16." << endl;
	int A;
	cout << "Введите A: " << endl;
	cin >> A;
	int x = A / 100;
	int y = A / 10;
	int z = A % 10;
	cout << "Answer : " << x << z << y << endl;
	system("pause");
}
void integer17() {
	system("cls");
	cout << "Integer17." << endl;
	int A;
	cout << "Введите A: " << endl;
	cin >> A;
	int x = A / 1000;
	x = x % 1;
	cout << "Answer : " << x << endl;
	system("pause");
}
void integer18() {
	system("cls");
	cout << "Integer18." << endl;
	int A;
	cout << "Введите A: " << endl;
	cin >> A;
	int x = A / 10000;
	x = x % 1;
	cout << "Answer : " << x << endl;
	system("pause");
}
void integer19() {
	system("cls");
	cout << "Integer19." << endl;
	int T;
	cout << "Введите T: " << endl;
	cin >> T;
	int x = T / 60;
	cout << "Answer : " << x << endl;
	system("pause");
}
void integer20() {
	system("cls");
	cout << "Integer20." << endl;
	int T;
	cout << "Введите T: " << endl;
	cin >> T;
	int x = T / 3600;
	cout << "Answer : " << x << endl;
	system("pause");
}
void integer21() {
	system("cls");
	cout << "Integer21." << endl;
	int T;
	cout << "Введите T: " << endl;
	cin >> T;
	int x = T / 60;
	x = T - x * 60;
	cout << "Answer : " << x << endl;
	system("pause");
}
void integer22() {
	system("cls");
	cout << "Integer22." << endl;
	int T;
	cout << "Введите T: " << endl;
	cin >> T;
	int x = T / 60;
	x = T - x * 60;
	cout << "Answer : " << x << endl;
	system("pause");
}
void integer23() {
	system("cls");
	cout << "Integer23." << endl;
	int T;
	cout << "Введите T: " << endl;
	cin >> T;
	int x = T / 3600;
	x = T - x * 3600;
	x = x / 60;
	cout << "Answer : " << x << endl;
	system("pause");
}
void integer24() {
	system("cls");
	cout << "Integer24." << endl;
	int T;
	cout << "Введите число: " << endl;
	cin >> T;
	int x = T % 7;
	cout << "Answer : " << x << endl;
	system("pause");
}
void integer25() {
	system("cls");
	cout << "Integer25." << endl;
	int T;
	cout << "Введите число : " << endl;
	cin >> T;
	int x = (T + 3) % 7;
	cout << "Ответ : " << x << endl;
	system("pause");
}
void integer26() {
	system("cls");
	cout << "Integer26." << endl;
	int T;
	cout << "Введите число: " << endl;
	cin >> T;
	int x = (T + 1) % 7;
	cout << "Answer : " << x << endl;
	system("pause");
}
void integer27() {
	system("cls");
	cout << "Integer27." << endl;
	int T;
	cout << "Введите число: " << endl;
	cin >> T;
	int x = (T + 5) % 7;
	cout << "Answer : " << x << endl;
	system("pause");
}
void integer28() {
	system("cls");
	cout << "Integer28." << endl;
	int T, N;
	cout << "Введите число: " << endl;
	cin >> T;
	cout << "Введите число N: " << endl;
	cin >> N;
	int x = (T + N - 1) % 7;
	cout << "Answer : " << x << endl;
	system("pause");
}
void integer29() {
	system("cls");
	cout << "Integer29." << endl;
	int A, B, C;
	cout << "Введите число A: " << endl;
	cin >> A;
	cout << "Введите число B: " << endl;
	cin >> B;
	cout << "Введите число C: " << endl;
	cin >> C;
	int S = A * B;
	int S2 = C * C;
	int max = S / S2;
	int ost = S - max * S2;
	cout << "Кол-во : " << max << endl;
	cout << "Остаток : " << ost << endl;
	system("pause");
}
void integer30() {
	system("cls");
	cout << "Integer30." << endl;
	int A;
	cout << "Введите число год: " << endl;
	cin >> A;
	int St = ((A - 1) / 100) + 1;

	cout << "Столетие: " << St << endl;
	system("pause");
}








#endif // !Integer_h