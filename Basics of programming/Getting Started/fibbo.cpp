#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int a=0,b=1,c=0;
	cout<<a<<'\n'<<b<<'\n';
	for(int i=2;i<n;i++){
		c=a+b;
		cout<<c<<'\n';
		a = b;
		b = c;
	}
	return 0;
}