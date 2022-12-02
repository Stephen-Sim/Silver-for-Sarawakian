#include <iostream>
using namespace std;

void solve() {
	bool result = true;
	int N = 0;
	cin >> N;

	int arr[100000] = {};
	int A = 2 * N;
	for (size_t i = 0; i < A; i++)
	{
		cin >> arr[i];
	}

	for (size_t i = 0; i < A; i++)
	{
		int c = 1;
		for (size_t j = i + 1; j < A; j++)
		{
			if (arr[i] == arr[j]) {
				c++;
			}
			if (c == 3) {
				result = false;
				break;
			}
		}
		if (result == false) {
			break;
		}
	}
	cout << (result ? "Yes" : "No") << endl;
}

int main() {
	int T = 1;
	cin >> T;
	while (T--) {
		solve();
	}
}
