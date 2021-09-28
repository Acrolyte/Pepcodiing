#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string s = to_string(n);
	reverse(s.begin(), s.end());
	for(auto i: s)
		cout<<i<<'\n';
	return 0;
}