#include <iostream>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cin >> n;
	if ((n % 10 == 1 && n != 11) && (n >=1 && n<=100)) cout << " ВАМ " << n << " GOD " << endl;
	if ((n % 10 == 2 || n % 10 == 3 || n % 10 == 4) && (n != 12 && n != 13 && n != 14) && (n >= 1 && n<=100)) cout << " VAM " << n << " GODA " << endl;
	if ((n >= 1 && n <= 100)&&(n % 10 != 1 && n % 10 != 2 && n % 10 != 3 && n % 10 != 4) || (n == 12 || n == 13 || n == 14 || n == 11) ) cout << " VAM " << n << " LET " << endl;
	if (n < 1 || n>100) cout << "error" << endl;

	system("pause");

	return 0;
}