#include <bits/stdc++.h>
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

	cin >> n;
	Try(0);
	cout << res;