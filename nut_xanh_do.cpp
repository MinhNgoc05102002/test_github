#include <bits/stdc++.h>
void solve(long a, long b)
{
	long res=0;
	while (b>a)
	{
		if (b%2)
			b++;
		else
			b/=2;
		res++;
	}
	res += (a-b);
	cout << res;
}

	cin >> a >> b;
	solve (a, b);
}