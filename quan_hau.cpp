#include <bits/stdc++.h>#define endl '\n'using namespace std;typedef long long ll;typedef unsigned long long ull;bool xuatHien[15]; // hang da co quan hau
int n, res = 0, arr[15];

bool kiemTra(int k)
{
	for (int j=0; j<k; j++)
		if (abs(arr[k]-arr[j]) == abs(k-j))
			return false;
	return true;
}

void Try(int k)
{
	if (k==n)
	{
		//if (kiemTra())
			res ++;
		return;
	}
	for (int i=0; i<n; i++)
	{
		if (!xuatHien[i])
		{
			if (i!=k && i+k!=n-1)
			{
				arr[k] = i;
				if (kiemTra(k))
				{
					xuatHien[i] = 1;
					Try(k+1);
					xuatHien[i] = 0;
				}

			}
		}

	}
}
int main(){	ios::sync_with_stdio(0); cin.tie(); cout.tie();
	cin >> n;
	Try(0);
	cout << res;}
