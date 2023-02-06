#include <iostream>
using namespace std;

void totalminus(int&, int&, int&, int&);

int main()
{
	int add, minus;
	int num1 = 2;
	int num2 = 3;
	
	totalminus(num1, num2, add, minus);
	cout << "Total num1 + num2: " << add << endl;
	cout << "Total num1 - num2: " << minus << endl << endl;
}
void totalminus(int& num1, int& num2, int& add, int& minus)
{
	add = num1 + num2;
	minus = num1 - num2;
}
