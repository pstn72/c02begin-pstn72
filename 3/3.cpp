#include <iostream>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main() {
	int x;
	cin >> x;
	if ((x >= 1582 && x <= 2200) && (x % 4 == 0)) {
		if ((x % 100 == 0) && (x % 400 != 0)) {
			cout << "NORMALL" << endl;
			return 0;
		}
		cout << "LEAP" << endl;
	}
	if ((x < 1582) || (x>2200)) cout << "error" << endl;
	system("pause");
	return 0;
}