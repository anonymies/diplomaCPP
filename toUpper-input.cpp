#include <iostream>
#include <ctype.h>
#include <conio.h>
using namespace std;

int main()
{
	string name;
	
	cout << "Enter name in lowercase." << endl;
	
	cin >> name;
	
	for (int i = 0; i < name.length(); i++)
	{
		name[i] = toupper(name[i]);
	}
	
	cout << name << endl;
	
	return 0;
}
