#include <iostream>
#include <vector>
using namespace std;

void solve()
{
	bool result = true;
	int n = 0;
	cin >> n;

	vector <int> vec;

	for (size_t i = 0; i < n * 2; i++)
	{
		int x = 0;
		cin >> x;

		vec.push_back(x);
	}

	for (size_t i = 0; i < vec.size(); i++)
	{
		int c = 1;
		for (size_t j = i + 1; j < vec.size(); j++)
		{
			if (vec[i] == vec[j])
			{
				c++;
			}

			if (c == 3)
			{
				result = false;
				break;
			}
		}

		if (result == false)
		{
			break;
		}
	}

	cout << (result ? "YES" : "NO") << endl;
}

int main()
{
    int t = 1;
	cin >> t;

	while (t--)
	{
		solve();
	}
}
