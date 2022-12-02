#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() 
{
	int n = 0;
	cin >> n;

	vector<int> vec;

	for (size_t i = 0; i < n; i++)
	{
		int x = 0; cin >> x;
		vec.push_back(x);
	}

	bool isRainbow = true;

	for (size_t i = 0; i <= vec.size() / 2; i++)
	{
		if (vec[i] != vec[vec.size() - 1 - i] || vec[i] > 7)
		{
			isRainbow = false;
			break;
		}
	}

	int arr[7] = {1, 2, 3, 4, 5, 6, 7};
	
	int i = 0, j = 0;

	while (i < 7)
	{
		if (vec[j] == vec[j + 1])
		{
			j++;
			continue;
		}

		if (vec[j] != arr[i])
		{
			isRainbow = false;
			break;
		}
		j++;
		i++;
	}
	cout << (isRainbow ? "yes" : "no") << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t = 1;

	cin >> t;

	while (t--)
	{
		solve();
	}

    return 0;
}
