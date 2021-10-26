#include <bits/stdc++.h>#define endl '\n'using namespace std;typedef long long ll;typedef unsigned long long ull;map<ll, int> mp;int main(){	ios::sync_with_stdio(0); cin.tie(); cout.tie();
	int n;
	cin >> n;
	ll a[n+5];
	vector<ll> arr;
	for (int i=0; i<n; i++)
	{
		cin >> a[i];
		if (0==mp[a[i]]++)
		{
			arr.push_back(a[i]);
			//mp[a[i]] = 1;
		}
	}
	sort(arr.begin(), arr.end());
	ll k1 = arr[arr.size()/4], k2 = arr[arr.size()*3/4];
	ull s = 0;
	for (int i=0; i<n; i++)
	{
		s += min(abs(a[i]-k1), abs(a[i]-k2));
	}
	cout << s;}
