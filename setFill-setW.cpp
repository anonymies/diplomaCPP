#include <iostream>
#include <iomanip>
#include <ctype.h>
using namespace std;

int main()
{
	string name, idnum;
	int i = 0;
	
	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter your id number: ";
	cin >> idnum;
	cout << "Your name is: " << setfill('X') << setw(15) << name << endl;
	cout << "Your id number is: " << setfill('X') << setw(15) << idnum << endl;
	
	char str[] = "\nYour name here!\n";
	char c;
	c = str[i];

	while (str[i])
	{
		c = str[i];
		if (isupper(c)) c = tolower(c);
		putchar(c);
		i++;
	} 
	return 0;
}
