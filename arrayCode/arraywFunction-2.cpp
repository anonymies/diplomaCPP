#include <iostream>
using namespace std;

void display(int marks[4]);

int main()
{
	int marks[4] = {50, 80, 75, 24};
	display(marks);
}
void display(int marks[4])
{
	cout << "Student Marks:" << endl;
	int total = 0, j = 1;
	for(int i=0; i<4; i++)
	{
		cout << "Student " << j << ":" << marks[i] << endl;
		total += marks[i];
		j++;
	}
	cout << "\nTotal: " << total << endl << endl;
}
