#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	char str[] = "1776ad";
	int year;
	if (isdigit(str[0]))
	{
		year = atoi (str);
		cout << "The year that followed " << year << " was " << year + 1;
	}
	return 0;
}
