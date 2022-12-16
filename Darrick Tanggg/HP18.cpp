#include <iostream>
#include <vector>
#define ll long long
using namespace std;

void solve()
{
	ll num, a, b;
	cin >> num >> a >> b;
	ll x = 0, y = 0, z;
	while (num--)
	{
		cin >> z;
		if (z % a == 0)
			x++;
		else if (z % b == 0)
			y++;

	}
	if (x <= y)
	{
		cout << "ALICE" << endl;
	}
	else
		cout << "BOB" << endl;
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
