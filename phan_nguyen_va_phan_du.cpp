#include <bits/stdc++.h>

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

	cin >> x >> y;
	cout << solve(y, x);
}