#include <iostream>
using namespace std;

void solve()
{
	int n;
	int weapon[10] = {};
	string s;
	cin >> n;
	for (auto i = 0; i < n; i++)
	{
		cin >> s;
		for (int j = 0; j < 10; j++)
		{

			if (s[j] == '1' && weapon[j] == 1 || s[j] == '0' && weapon[j] == 0)
			{
				weapon[j] = 0;
			}
			else
			{
				weapon[j] = 1;
			}
		}

	}

	for (auto i = 1; i < 10; i++)
	{
		weapon[i] += weapon[i - 1];
	}

	cout << weapon[9] << endl;
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
