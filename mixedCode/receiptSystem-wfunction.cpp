#include <iostream>
#include <iomanip>
using namespace std;

double pencil(double);
double eraser(double);

int main()
{
	double value1, value2, result1, result2, total;
	cout << "\nWelcome to COOP-MART\n";
	cout << "Enter number of item to buy:\n";
	cout << "\t1. Pencil: ";
	cin >> value1;
	result1 = pencil(value1);
	cout << "\t2. Eraser: ";
	cin >> value2;
	result2 = eraser(value2);
	total = result1 + result2;
	
	//Print Receipt
	cout << setfill('X') << setw(35) << "--Receipt of Payment--" << setfill('X') << setw(15) << "" << endl;
	cout << "\tPencil \tQuantity: "<<value1<<" \tRM" << result1 << endl;
	cout << "\tEraser \tQuantity: "<<value2<<" \tRM" << result2 << endl;
	cout << "\tTotal Price: \t\tRM" << total << endl;
	return 0;
}

double pencil(double value1)
{
	double sum = 0;
	sum = 1.20 * value1;
	return sum;
}
double eraser(double value2)
{
	double sum = 0;
	sum = 0.80 * value2;
	return sum;
}
