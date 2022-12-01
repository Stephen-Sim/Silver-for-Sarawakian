#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
	// a, b, c
	// a > b + c

	int arr[3] = {};

	cin >> arr[0] >> arr[1] >> arr[2];

	// solution 1
	// loop, find max value
	// sum of the rest


	// solution 2
	// sort the arr, 1, 2, 4
	// 4, 2, 1 

	sort(begin(arr), end(arr), greater<int>());

	cout << (arr[0] > arr[1] + arr[2] ? "Yes" : "No") << endl;

	// compare values, then print output
}

int main()
{
    int c = 1;
    cin >> c;

	while (c--)
	{
		solve();
	}
}