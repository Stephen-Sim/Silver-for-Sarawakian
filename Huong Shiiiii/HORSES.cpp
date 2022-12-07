#include <iostream> 
#include <algorithm>
using namespace std;

void solve()
{
	int N;
	int min_diff;
	cin >> N;
	int S[5000] = {};

	for (size_t i = 0; i < N; i++)
	{
		cin >> S[i];
	}

	for (size_t i = 0; i < N; i++)
	{
		for (size_t j = i + 1; j < N; j++)
		{
			if (S[i] > S[j])
			{
				int temp = S[i];
				S[i] = S[j];
				S[j] = temp;
			}
		}
	}

	for (size_t i = 0; i < N - 1; i++)
	{
		if (i == 0)
		{
			min_diff = S[i + 1] - S[i];
		}

		
		if (min_diff >= S[i + 1] - S[i])
			min_diff = S[i + 1] - S[i];
		
	}
	cout << min_diff << endl;
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
