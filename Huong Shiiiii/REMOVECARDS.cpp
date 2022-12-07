#include <iostream>
#include <cmath>
using namespace std;

void solve()
{
	int N = 1;
	cin >> N;
	int arr[100] = {};
	int count = 0;
	for (size_t i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	for (size_t i = 0; i < N; i++)
	{
		int c = 0;
		for (size_t j = i; j < N; j++)
		{
			if (arr[i] == arr[j])
				c++;
		}
		if (c > count)
			count = c;
	}	

	if (count == 0)
	{
		cout << N - 1 << endl;
	}
	else
	{
		cout << N - count << endl;
	}
}

int main()
{
	int T = 1;
	cin >> T;
	while (T--)
	{
		solve();
	}
	return 0;
}
