#include <iostream>
using namespace std;

int main()
{
	int num1, num2, choose, add, minus;
	double totalADD, totalMINUS;
	
	int addition(int, int);
	int subtraction(int, int);
	void both(int, int, double&, double&);
	
	cout << "Enter num1: ";
	cin >> num1;
	cout << "\nEnter num2: ";
	cin >> num2;
	cout << "\nPlease choose operation: ";
	cout << "\n1. Add\n2. Minus\n3. Both" << endl;
	cin >> choose;
	
	if(choose==1)
	{
		add = addition(num1,num2);
		cout << "Total = " << add << endl;
	}
	else if(choose==2)
	{
		minus = subtraction(num1,num2);
		cout << "Total = " << minus << endl;
	}
	else if(choose==3)
	{
		both(num1,num2, totalADD, totalMINUS);
		cout << "Total + = " << totalADD << endl;
		cout << "Total - = " << totalMINUS << endl;
	}
	else
	{
		return 0;
	}
}
int addition(int num1, int num2)
{
	int add;
	add = num1 + num2;
	return add;
}
int subtraction(int num1, int num2)
{
	int minus;
	minus = num1 - num2;
	return minus;
}
void both(int num1, int num2, double& totalADD, double& totalMINUS)
{
	totalADD = num1 + num2;
	totalMINUS = num1 - num2;
}
