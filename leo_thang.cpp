#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(){
	ios::sync_with_stdio(0); cin.tie(); cout.tie();
	int n;
	cin >> n;
	int a[100];
	a[1] = 1; a[2] = 2; a[3] = 4;
	for (int i=4; i<=n; i++)
		a[i] = a[i-1] + a[i-2] + a[i-3];
	cout << a[n];
}
