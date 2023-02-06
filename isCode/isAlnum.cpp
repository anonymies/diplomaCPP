#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	int i;
	char str[] = "c3po...";
	i = 0;
	while(isalnum(str[i])) i++;
	cout << "The first " << i << " characters are alphanumeric.\n";
	return 0;
	
}
