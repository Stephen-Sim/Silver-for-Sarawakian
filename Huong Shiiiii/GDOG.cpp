#include <iostream> 
#include <algorithm>
using namespace std;

void solve()
{
	int N, K;
	cin >> N >> K;
	int max=0;
	for (size_t i = 1; i <= K; i++)
	{
		if(max < N % i)
			max = N % i;
	}

	cout << max << endl;
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
