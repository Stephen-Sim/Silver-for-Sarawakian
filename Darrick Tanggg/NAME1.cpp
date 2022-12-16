#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#define ll long long
using namespace std;



string solve()
{
	string a, b;
	cin >> a >> b;
	string p = a + b;
	ll num;
	cin >> num;
	vector <string> c(num);
	string child;
	for (ll i = 0; i < num; i++)
	{
		cin >> c[i];
		child += c[i];
	}

	if (child.size() > p.size())
	{
		return "NO";
	}
	else
	{
		vector <ll> ap(26, 0), ac(26, 0);
		for (auto i : p)
			ap[i - 'a']++;
		for (auto i : child)
			ac[i - 'a']++;
		for (auto i : child)
		{
			if ((!ap[i - 'a']) || ap[i - 'a'] < ac[i - 'a'])
				return "YES";
		}
		return "NO";

	}
	
}

int main()
{
	ll x = 1;
	cin >> x;
	while (x--)
	{
		
		cout << solve() << endl;

	}
	return 0;
}
