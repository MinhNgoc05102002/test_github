#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main()
{
	ios::sync_with_stdio(0); cin.tie(); cout.tie();
	int n;
	cin >> n;
	int a[n+5];
	ll sum[n+5] = {};
	for (int i=1; i<=n; i++)
	{
		cin >> a[i];
	}
	sort (a+1, a+n+1);
	
	for (int i=1; i<=n; i++)
	{
		sum[i] = sum[i-1] + a[i];
	}
	
	ll res = 1e10, tmp = a[1];
	int dem = 1;
	while (tmp<=a[n])
	{
		while (a[dem+1]<tmp && dem<n)
			dem ++;
		ll sum_distan = (dem*tmp - sum[dem]) + (sum[n] - sum[dem] - tmp*(n-dem));
		if (sum_distan<res)
			res = sum_distan;
		tmp ++;
	}
	
	cout << res;
}

