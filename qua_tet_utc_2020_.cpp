#include <bits/stdc++.h>#define endl '\n'
using namespace std;typedef long long ll;typedef unsigned long long ull;ull mod = 10e9+7;
bool ghep_duoc(char a, char b)
{
	if(a>'2' || (a=='2' && b>'6'))
		return 0;
	return 1;
}
int main(){	ios::sync_with_stdio(0); cin.tie(); cout.tie();
	string s;
	cin >> s;
	int cnt = 0;
	map<int, int> mp; //dem so luong bo
	for (int i=0; i<s.length(); i++)
	{
		if(s[i]=='0' && s[i-1]>'2')
		{
			cout << 0;
			return 0;
		}
		if (ghep_duoc(s[i-1], s[i]))
		{
			cnt++;
		}
		else
		{
			mp[cnt] ++;
			cnt=1;
		}
	}
	mp[cnt]++;
	ull res = 0;
	for (auto &x:mp)
	{
		res = res%mod + (x.second)*(((pow(1+sqrt(5),x.first+1)-pow(1-sqrt(5), x.first+1))/(pow(2, x.first+1)*sqrt(5))));
		res %= mod;
	}
	cout << res%1000000007;}
