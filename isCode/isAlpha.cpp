#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	int i;
	char str[] = "C++";
	
	while(str[i])
	{
		if(isalpha(str[i]))
		{
			cout << "Character " << str[i] << " is alphabetic.\n";
		}
		else
		{
			cout << "Character " << str[i] << " is not alphabetic.\n";
		}
		i++;
	}
	
	return 0;
	
}
