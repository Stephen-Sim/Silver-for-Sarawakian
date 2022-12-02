#include <iostream>
#include <cmath>
using namespace std;

void solve()
{
	long long N, A, B;
	long long x = 0;
	
	cin >> N >> A >> B;
	
	//log base 2 N
	x = log(N) / log(2);
	
	cout << (x * A) + (x - 1) * B << endl;
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
