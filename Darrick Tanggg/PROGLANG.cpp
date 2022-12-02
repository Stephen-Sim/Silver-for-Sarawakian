#include <iostream>
using namespace std;

void solve()
{
	int arr[6] = {};
	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i];
		
	}

	if (arr[3] == arr[0])
	{
		
		if (arr[2] == arr[1])
		{
			cout << "1" << endl;
			
		}

	}
	else if (arr[3] == arr[1])
	{
	
		if (arr[2] == arr[0])
		{
			cout << "1" << endl;
			
		}

	}
	else if (arr[5] == arr[0])
	{
		
		if (arr[4] == arr[1])
			cout << "2" << endl;
	}
	else if (arr[5] == arr[1])
	{
		
		if (arr[4] == arr[0])
			cout << "2" << endl;
	}
	else
		cout << "0" << endl;

	
		
}

int main()
{
	int x = 1;
	cin >> x;
	while (x --)
	{
		solve();
		
	}
	return 0;
}