#include <iostream>
#include <string>
using namespace std;

bool IsChar(char c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'z'))
	{
		return true;
	}
	return false;
}

int main()
{
	string s1, s2;
	int i;
	while (cin >> s1 >> s2)
	{
		int n = s1.size();
		for (i = 0; i < n; i++)
		{
			if ((s1[i] == '?' || s1[i] == '*') && !IsChar(s2[i]))
			{
				cout << "false" << endl;
				break;
			}
			if (s1[i] == '?')
			{
				continue;
			}
			else if (s1[i] == s2[i])
			{
				continue;
			}
			else if (s1[i] != '*')
			{
				cout << "false" << endl;
				break;
			}

			if (s1[i] == '*' && i < (n - 1))
			{
				continue;
			}
			if (s1[i] == '*' && i == (n - 1))
			{
				continue;
			}
		}
		if (i == n)
		{
			cout << "true" << endl;
		}
	}
	return 0;
}