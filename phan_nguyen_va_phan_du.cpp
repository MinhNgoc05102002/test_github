#include <bits/stdc++.h>#define endl '\n'using namespace std;typedef long long ll;typedef unsigned long long ull;

ll solve(const ll &x, const ll &y)
{
	ll a = x;
	ll res = 0;
		while (a+1>y)
		{
			a--;
		}
		while (a*a-1>y)
		{
			int k = y/(a+1);
			res+=k;
			a--;
		}
		res+= (a*(a-1)/2);
		return res;
}
int main(){	ios::sync_with_stdio(0); cin.tie(); cout.tie();	ll x , y;
	cin >> x >> y;
	cout << solve(y, x);
}
