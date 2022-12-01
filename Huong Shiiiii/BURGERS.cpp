#include <iostream>
using namespace std;

void solve(){
	int arr[2] = {};
	cin >> arr[0] >> arr[1];
	if (arr[0] > arr[1])
		cout << arr[1] << endl;
	else
		cout << arr[0] << endl;
}

int main() {
	int T = 1;
	cin >> T;

	while (T--)
	{
		solve();
	}

	return 0;
}
