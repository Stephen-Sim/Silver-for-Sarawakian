#include <iostream>
#include <vector>
using namespace std;



void solve()
{
	int N, K, V;
	cin >> N >> K >> V;
	int total = N + K;
	int sum1 = 0;
	for (int i = 0; i < N; i++)
	{
		int x;
		cin >> x;
		sum1 += x;
	}

	int sum = V * total;
	int ans = (sum - sum1) / K;
	if ((sum - sum1) % K == 0 && sum > sum1)
	{

		cout << ans << endl;
	}
	else
		cout << "-1" << endl;

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