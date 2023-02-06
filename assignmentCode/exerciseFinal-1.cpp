#include <iostream>
using namespace std;

int GETNUMBER (int);
double OPERATION (int);
void display();

double total=0;

int main()
{
	int number, user_input;
	
	user_input = GETNUMBER(number);
	total = OPERATION(user_input);
	display();
	
}
int GETNUMBER(int number)
{
	cout << "Enter an integer:";
	cin >> number;
		
	return number;
}
double OPERATION(int user_input)
{
	int counter = user_input;
	for (int i = 0; i < counter; i++)
	{
		if (user_input % 2 != 0)
		{
			total = user_input + total;
		}
		else
		{
			
		}
		user_input--;
	}
	return total;
}
void display()
{
	cout << "Total of odd numbers is: " << total << endl;
}
