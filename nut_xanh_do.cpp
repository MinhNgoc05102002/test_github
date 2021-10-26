#include <bits/stdc++.h>#define endl '\n'using namespace std;typedef long long ll;typedef unsigned long long ull;
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
int main(){	ios::sync_with_stdio(0); cin.tie(); cout.tie();	long a, b;
	cin >> a >> b;
	solve (a, b);
}
