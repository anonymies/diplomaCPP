#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a, b;
	double hypotenuse = 0;
	
	cout << "Please enter side a: ";
	cin >> a;
	cout << "Please enter side b: ";
	cin >> b;
	
	hypotenuse = hypot(a, b);
	
	cout << "\nHypotenuse is :" << hypotenuse << endl;
	
	
	return 0;
}
