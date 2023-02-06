#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	int i = 0;
	char str[] = "TEST STRING.\n";
	char c;
	
	while(str[i])
	{
		c = str[i];
		if(isupper(c))
		{
			c = tolower(c);
		}
		cout << c;
		i++;
	}
	return 0;
}
