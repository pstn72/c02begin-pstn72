#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main ()
{
int A;
cin >> A;
if (A<0) cout << "OTR" << endl;
if (A>0) cout << "POL" << endl;
if (A==0) cout << "NULL" << endl;

return 0;}