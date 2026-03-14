#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

// 8
// 1 2 3 2 1 5 3 3

void solve()
{
    map<int, int> mp;
    int n, t;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        mp[t]++;
    }
    for (auto i = mp.begin(); i != mp.end(); i++)
    {
        cout << i->first << " " << i->second << endl;
    }
    cout << "=============================" << endl;
    vector<pair<int, int>> vp;
    for (auto i = mp.begin(); i != mp.end(); i++)
    {
        vp.push_back({i->second, i->first});
    }
    sort(vp.begin(), vp.end(), [](const pair<int, int> a, const pair<int, int> b)
         {
		if (a.first == b.first){
			return a.second < b.second;
		}else{
			return a.first > b.first;
		} });
    for (auto i = vp.begin(); i != vp.end(); i++)
    {
        cout << i->second << " " << i->first << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}