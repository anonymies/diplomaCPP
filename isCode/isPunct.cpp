#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	int i = 0;
	int cx = 0;
	char str[] = "Hello!!!! any body home!!!";
	
	while(str[i])
	{
		if(ispunct(str[i]))
		{
			cx++;
		}
		i++;
	}
	cout << "Sentence contains " << cx << " punctuation characters.\n";
	return 0;
}
