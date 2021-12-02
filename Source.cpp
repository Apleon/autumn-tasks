#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include "(1) Begin\Begin.h"
#include "(3) Boolean\Boolean.h"
#include "(4) If\If.h"
#include "(2) Integer\Integer.h"
#include "(5) Case\Case.h"


using namespace std;

int main() {
	setlocale(0, "Russian");
	const int size = 5;
	int main_choise;
	int ex_choise;
	string main_array[size] = { "Begin","Integer","Boolean","If","Case" };
	for (int i = 0; i < size; i++) {
		cout << "Chapter " << i + 1 << " ( " << main_array[i] << " ) " << endl;
	}

	cout << "Select a chapter to watch: " << endl;
	cin >> main_choise;
	main_choise = main_choise - 1;

	switch (main_choise) {
	case 0:
		cout << "Select number of exercise: " << endl;
		cin >> ex_choise;
		switch (ex_choise)
		{
		case 0:
			break;
		case 1:
			begin1();
			break;
		case 2:
			begin2();
			break;
		case 3:
			begin3();
			break;
		case 4:
			begin4();
			break;
		case 5:
			begin5();
			break;
		case 6:
			begin6();
			break;
		case 7:
			begin7();
			break;
		case 8:
			begin8();
			break;
		case 9:
			begin9();
			break;
		case 10:
			begin10();
			break;
		case 11:
			begin11();
			break;
		case 12:
			begin12();
			break;
		case 13:
			begin13();
			break;
		case 14:
			begin14();
			break;
		case 15:
			begin15();
			break;
		case 16:
			begin16();
			break;
		case 17:
			begin17();
			break;
		case 18:
			begin18();
			break;
		case 19:
			begin19();
			break;
		case 20:
			begin20();
			break;
		case 21:
			begin21();
			break;
		case 22:
			begin22();
			break;
		case 23:
			begin23();
			break;
		case 24:
			begin24();
			break;
		case 25:
			begin25();
			break;
		case 26:
			begin26();
			break;
		case 27:
			begin27();
			break;
		case 28:
			begin28();
			break;
		case 29:
			begin29();
			break;
		case 30:
			begin30();
			break;
		case 31:
			begin31();
			break;
		case 32:
			begin32();
			break;
		case 33:
			begin33();
			break;
		case 34:
			begin34();
			break;
		case 35:
			begin35();
			break;
		case 36:
			begin36();
			break;
		case 37:
			begin37();
			break;
		case 38:
			begin38();
			break;
		case 39:
			begin39();
			break;
		case 40:
			begin40();
			break;
		default:
			cout << "Error!" << endl;
			break;

		}
	case 1:
		cout << "Select number of exercise: " << endl;
		cin >> ex_choise;
		switch (ex_choise) {
		case 1:
			integer1();
			break;
		case 2:
			integer2();
			break;
		case 3:
			integer3();
			break;
		case 4:
			integer4();
			break;
		case 5:
			integer5();
			break;
		case 6:
			integer6();
			break;
		case 7:
			integer7();
			break;
		case 8:
			integer8();
			break;
		case 9:
			integer9();
			break;
		case 10:
			integer10();
			break;
		case 11:
			integer11();
			break;
		case 12:
			integer12();
			break;
		case 13:
			integer13();
			break;
		case 14:
			integer14();
			break;
		case 15:
			integer15();
			break;
		case 16:
			integer16();
			break;
		case 17:
			integer17();
			break;
		case 18:
			integer18();
			break;
		case 19:
			integer19();
			break;
		case 20:
			integer20();
			break;
		case 21:
			integer21();
			break;
		case 22:
			integer22();
			break;
		case 23:
			integer23();
			break;
		case 24:
			integer24();
			break;
		case 25:
			integer25();
			break;
		case 26:
			integer26();
			break;
		case 27:
			integer27();
			break;
		case 28:
			integer28();
			break;
		case 29:
			integer29();
			break;
		case 30:
			integer30();
			break;
		default:
			cout << "Error!" << endl;
			break;
		}

	case 2:
		cout << "Select number of exercise: " << endl;
		cin >> ex_choise;
		switch (ex_choise) {
		case 1:
			boolean1();
			break;
		case 2:
			boolean2();
			break;
		case 3:
			boolean3();
			break;
		case 4:
			boolean4();
			break;
		case 5:
			boolean5();
			break;
		case 6:
			boolean6();
			break;
		case 7:
			boolean7();
			break;
		case 8:
			boolean8();
			break;
		case 9:
			boolean9();
			break;
		case 10:
			boolean10();
			break;
		case 11:
			boolean11();
			break;
		case 12:
			boolean12();
			break;
		case 13:
			boolean13();
			break;
		case 14:
			boolean14();
			break;
		case 15:
			boolean15();
			break;
		case 16:
			boolean16();
			break;
		case 17:
			boolean17();
			break;
		case 18:
			boolean18();
			break;
		case 19:
			boolean19();
			break;
		case 20:
			boolean20();
			break;
		case 21:
			boolean21();
			break;
		case 22:
			boolean22();
			break;
		case 23:
			boolean23();
			break;
		case 24:
			boolean24();
			break;
		case 25:
			boolean25();
			break;
		case 26:
			boolean26();
			break;
		case 27:
			boolean27();
			break;
		case 28:
			boolean28();
			break;
		case 29:
			boolean29();
			break;
		case 30:
			boolean30();
			break;
		case 31:
			boolean31();
			break;
		case 32:
			boolean32();
			break;
		case 33:
			boolean33();
			break;
		case 34:
			boolean34();
			break;
		case 35:
			boolean35();
			break;
		case 36:
			boolean36();
			break;
		case 37:
			boolean37();
			break;
		case 38:
			boolean38();
			break;
		case 39:
			boolean39();
			break;
		case 40:
			boolean40();
			break;
		default:
			cout << "Error!" << endl;
			break;
		}
	case 3:
		cout << "Select number of exercise: " << endl;
		cin >> ex_choise;
		switch (ex_choise) {
		case 1:
			if1();
			break;
		case 2:
			if2();
			break;
		case 3:
			if3();
			break;
		case 4:
			if4();
			break;
		case 5:
			if5();
			break;
		case 6:
			if6();
			break;
		case 7:
			if7();
			break;
		case 8:
			if8();
			break;
		case 9:
			if9();
			break;
		case 10:
			if10();
			break;
		case 11:
			if11();
			break;
		case 12:
			if12();
			break;
		case 13:
			if13();
			break;
		case 14:
			if14();
			break;
		case 15:
			if15();
			break;
		case 16:
			if16();
			break;
		case 17:
			if17();
			break;
		case 18:
			if18();
			break;
		case 19:
			if19();
			break;
		case 20:
			if20();
			break;
		case 21:
			if21();
			break;
		case 22:
			if22();
			break;
		case 23:
			if23();
			break;
		case 24:
			if24();
			break;
		case 25:
			if25();
			break;
		case 26:
			if26();
			break;
		case 27:
			if27();
			break;
		case 28:
			if28();
			break;
		case 29:
			if29();
			break;
		case 30:
			if30();
			break;
		default:
			cout << "Error!" << endl;
			break;
		}
	case 4:
		cout << "Select number of exercise: " << endl;
		cin >> ex_choise;
		switch (ex_choise) {
		case 1:
			case1();
			break;
		case 2:
			case2();
			break;
		case 3:
			case3();
			break;
		case 4:
			case4();
			break;
		case 5:
			case5();
			break;
		case 6:
			case6();
			break;
		case 7:
			case7();
			break;
		case 8:
			case8();
			break;
		case 9:
			case9();
			break;
		case 10:
			case10();
			break;
		/*case 11:
			case11();
			break;
		case 12:
			case12();
			break;
		case 13:
			case13();
			break;
		case 14:
			case14();
			break;
		case 15:
			case15();
			break;
		case 16:
			case16();
			break;
		case 17:
			case17();
			break;
		case 18:
			case18();
			break;
		case 19:
			case19();
			break;
		case 20:
			case20();
			break; */
		default:
			cout << "Error!" << endl;
			break;
		}

	}
}