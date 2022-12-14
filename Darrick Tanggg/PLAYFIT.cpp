#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;



void solve()
{
    int n, e; cin >> n >> e;
    int mn = e;
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        cin >> e;
        ans = max(ans, e - mn);
        mn = min(mn, e);
    }

    if (ans == 0)
        cout << "UNFIT" << endl;
    else
        cout << ans << endl;
}

int main()
{
    int t; 
    cin >> t;
    while (t--)
        solve();
    return 0;
}