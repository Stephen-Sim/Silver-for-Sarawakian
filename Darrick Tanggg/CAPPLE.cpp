#include <iostream>
#include <set>
using namespace std;



void solve()
{
	int n, c = 0;
	cin >> n;
	set<int>v;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v.insert(x);
	}

	cout << v.size() << endl;
	
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