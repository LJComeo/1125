#include <iostream>
using namespace std;

int main1()
{
	int n;
	while (cin >> n)
	{
		int a = 1, b = 0, c = 0;
		while (--n)
		{
			c += b;
			b = a;
			a = c;
		}
		cout << a + b + c << endl;
	}
	return 0;
}