#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << hex;
	cout << setiosflags (ios::showbase);
	cout << 100 << endl;
	cout << resetiosflags(ios::showbase);
	cout << 100 << endl;
	return 0;
}
