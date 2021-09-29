#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string s = to_string(n);
	int c=1;
	int a[s.length()]={};

	for(auto i: s){
		int j = i - '0';
		a[j-1] = c;
		c++;
	}
	for(auto i : a)
		cout<<i;
	return 0;
}