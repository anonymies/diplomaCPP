#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	int i = 0;
	char str[] = "String literate.\n";
	char c;
	
	while (str[i])
	{
		c = str[5];
		if (islower(c))
		{
			c = toupper(c);
		}
		cout << c;
		i++;
	}
	
	return 0;
}
