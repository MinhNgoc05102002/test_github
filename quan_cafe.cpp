#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main()
{
	ios::sync_with_stdio(0); cin.tie(); cout.tie();
	int n, h, m, res = 1;
	int a[24][60] = {};
	
	cin >> n;
	for (int i=0; i<n; i++)
	{
		cin >> h >> m;
		a[h][m] ++;
		if (a[h][m]>res)
			res = a[h][m];
	}	
	cout << res;
}
