#include <iostream>
using namespace std;

struct stuDetail
{
	char name[20];
	char id[8];
} stud_1, stud_2;

int main ()
{
	stuDetail stud_1, stud_2;
	cout << "Please enter name: ";
	cin >> stud_1.name;
	cout << "Please enter ID: ";
	cin >> stud_1.id;
	cout << stud_1.name << endl;
	cout << stud_1.id;
}
