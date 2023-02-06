#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	char c;
	int i = 0;
	char str[] = "Example sentence to test isblank\n";
	while (str[i])
	{ 
		c = str[i];
		if(isblank(c))
		{
			c = '\n';
		}
		cout << c;
		i++;
	}
	return 0;
}
