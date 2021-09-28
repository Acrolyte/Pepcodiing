#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string s = to_string(n);
	int c=s.length();
	int a[s.length()]={};
	for(auto i: s){
		int j = i - '0';
		a[s.length()-j] = c;
		c--;
	}
	for(auto i : a)
		cout<<i;
	return 0;
}