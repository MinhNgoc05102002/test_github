#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main()
{
	ios::sync_with_stdio(0); cin.tie(); cout.tie();
	int a[5] = {};
	int tmp;
	for(int i=0; i<10; i++)
		{
			cin >> tmp;
			a[i%5] += tmp;
		}
	for (int i=0; i<5; i++)
		if (a[i]!=1)
			{
				cout << "N";
				return 0;
			}
	cout << "Y";
}
