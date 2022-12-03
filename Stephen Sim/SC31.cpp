#include <iostream>
using namespace std;

void solve()
{
	int n;
	int weapon[10] = {0};
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		for (int j = 0; j < 10; j++)
		{
			if (s[j] == '1' && weapon[j] == 1 || 
				s[j] == '0' && weapon[j] == 0)
			{
				weapon[j] = 0;
			}
			else
			{
				weapon[j] = 1;
			}
		}
	}

	int count = 0;

	for (int i = 0; i < 10; i++)
	{
		if (weapon[i] == 1)
		{
			count++;
		}
	}

	cout << count << endl;
}

int main()
{
	int x = 1;
	cin >> x;
	while (x--)
	{
		solve();

	}
	return 0;
}
