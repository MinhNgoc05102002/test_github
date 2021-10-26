#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

ll arr[100005];
ll n, m; // n so luong; m= money

void input()
{
	cin >> n >> m;
	for (int i=0; i<n; i++)
		cin >> arr[i];
}

void solve()
{
	sort(arr, arr+n);
	int res = 0; // result
	int poi = 0; // chi so arr
	while (m>=2*arr[poi] && poi<n)
	{
		m-=(2*arr[poi]);
		res += 2;
		poi++;
	}
	if (poi < n && m>=arr[poi])
	{
		res ++;
		m-=arr[poi];
	}
	if (poi < n && m>=arr[poi]/2)
		res ++;
	
	cout << res;
}

int main()
{
	ios::sync_with_stdio(0); cin.tie(); cout.tie();
	input();
	solve();
}

