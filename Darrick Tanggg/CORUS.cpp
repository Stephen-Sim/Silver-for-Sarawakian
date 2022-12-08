#include <iostream>
#include <algorithm>
using namespace std;



void solve()
{
	int N, Q;
	cin >> N >> Q;
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	int t;
	
	while (Q--)
	{
		cin >> t;
		int count = 0;
		
		

		
		int i = 0;
			for (t; t < N; t++)
			{
				
				if (s[t] == s[i])
				{
					count++;
					
				}
				i+=1;
			}
			
		cout << count << endl;
	}

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