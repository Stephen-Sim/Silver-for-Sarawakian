#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define ll long long
using namespace std;

bool myComparison(const pair<int, int>& a, const pair<int, int>& b)
{
	return a.second < b.second;
}

void solve()
{
	ll num, cat;
	cin >> num >> cat;
	vector <ll> a, b;
	map <ll, ll> map1;
	for (ll i = 0; i < num; i++)
	{
		ll x;
		cin >> x;
		a.push_back(x);
		
	}
	for (ll i = 0; i < num; i++)
	{
		ll x;
		cin >> x;
		b.push_back(x);
	}
	vector<pair<ll, ll>> vp;
	for (ll i = 0; i < num; i++)
	{
		vp.push_back({ a[i], b[i] });
	}
	
	sort(vp.begin(), vp.end());
	

	copy(vp.begin(), vp.end(), inserter(map1, map1.begin()));
	/*
	for (const auto& entry : map1) {
		cout << "{" << entry.first << ", " << entry.second << "}" << endl;
	}*/
	
	vector <int> v;
	for (const auto& s : map1)
		v.push_back(s.second);


	sort(v.begin(), v.end());
	
	if (v.size() < cat)
	{
		cout << "-1" << endl;
	}
	else
	{
		ll total = 0;
		for (ll i = 0; i < cat; i++)
		{
			total += v[i];
		}
		cout << total << endl;
	}
		
}

int main()
{
	int x = 0;
	cin >> x;
	while (x--)
	{
		solve();
	}
	return 0;
}S