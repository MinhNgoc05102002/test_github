#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
typedef unsigned long long ull;


int main()
{
	ios::sync_with_stdio(0); cin.tie(); cout.tie();
	int n, k;
	cin >> n >> k;
	int  a[n+5];
	for (int i=0; i<n; i++)
		cin >> a[i];
	sort(a, a+n);
	int max = -9999;
	for (int i=0; i<k; i++)
		if (a[n-(k-i)]-a[i]>max)
			max  = a[n-(k-i)]-a[i];
	cout << max;
}

