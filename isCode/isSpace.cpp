#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	char c;
	int i = 0;
	char str[] = "Example\tsentence to\vtest isspace\n";
	
	while(str[i])
	{
		c = str[i];
		if (isspace(c))
		{
			c = '\n';
		}
		cout << c;
		i++;
	}
	return 0;
}
