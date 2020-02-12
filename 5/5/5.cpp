#include <iostream>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main() {
	int y;
	cin >> y;
	switch (y)
	{
	case 0:
		cout << "ZERO" << endl;
		break;
	case 1:
		cout << "ONE" << endl;
		break;
	case 2:
		cout << "TWO" << endl;
		break;
	case 3:
		cout << "THREE" << endl;
		break;
	case 4:
		cout << "FOUR" << endl;
		break;
	case 5:
		cout << "FIVE" << endl;
		break;
	case 6:
		cout << "SIX" << endl;
		break;
	case 7:
		cout << "SEVEN" << endl;
		break;
	case 8:
		cout << "EIGHT" << endl;
		break;
	case 9:
		cout << "NINE" << endl;
		break;
	default: cout << "error" << endl;
	}

	system("pause");
	return 0;
}