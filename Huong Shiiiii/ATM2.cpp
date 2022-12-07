#include <iostream>
#include <cmath>
using namespace std;

void solve()
{
	int K, N;
	cin >> N >> K;
	int arr[100] = {};
	for (size_t i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	
	for (size_t i = 0; i < N; i++)
	{	
		if (arr[i] <= K)
		{
			cout << "1";
			K = K - arr[i];
		}
		else
			cout << "0";
	}
	cout << endl;
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
