#include <iostream>
#include <cmath>
using namespace std;



void solve()
{
	int n, x1, y1, x2, y2;
	cin >> n >> x1 >> y1 >> x2 >> y2;
	int max1, min1, max2, min2;
	if (x1 > y1)
	{
		max1 = x1;
		min1 = y1;
	}
	else
	{
		max1 = y1;
		min1 = x1;
	}
	if (x2 > y2)
	{
		max2 = x2;
		min2 = y2;
	}
	else
	{
		max2 = y2;
		min2 = x2;
	}

	int normal = abs(x1 - x2) + abs(y1 - y2);
	int Min1 = min(min1, (n - max1 + 1));
	int Min2 = min(min2, (n - max2 + 1));
	int sum = Min1 + Min2;
	int compare = min(normal, sum);
	cout << compare << endl;
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