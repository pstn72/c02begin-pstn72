#include <iostream>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main() {
	char q;
	cin >> q;
	if ((q>='0') && (q<='9')) cout << "DIGIT" << endl;
	else if ((q >= 'A') && (q <= 'Z')) cout << "CAPITAL" << endl;
	else if ((q >= 'a') && (q <= 'z')) cout << "LOWERCASE" << endl;
	else cout<<"NON_ALPHANUMERIC"<<endl;

	system("pause");

	return 0;
}