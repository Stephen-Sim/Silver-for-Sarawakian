#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
	string S, substring2;
	cin >> S;
	string substring = S.substr(0, S.length() / 2);
	
	if (S.length() % 2 == 0)
		substring2 = S.substr(S.length() / 2, S.length());
	else
		substring2 = S.substr((S.length() / 2) +1, S.length());
	
	sort(substring.begin(), substring.end());
	
	sort(substring2.begin(), substring2.end());
	if (substring == substring2)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
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
