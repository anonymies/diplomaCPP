#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	int i = 0;
	char str[] = "Test String.\n";
	char c;
	
	while(str[i])
	{
		c = tolower(str[i]);
		cout << c;
		i++;
	}
	return 0;
}
