#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;

	string s = to_string(n);
	int l = s.length();

	k = k % l;

	for(int i=l-k, j=0;j<l;j++){
		i = i%l;
		cout<<s[i];
		i++;
	}
	return 0;
}