#include <bits/stdc++.h>
using namespace std;

int gcd(int n,int n2)
{
	if(n == n2) return n;
	int rem;
	while(n % n2 != 0){
		rem = n % n2;
		n = n2;
		n2 = rem;
	}
	return rem;
}
int main()
{
	int n,n2;
	cin>>n>>n2;
	int g = gcd(n,n2);

	cout<<g<<'\n';
	int lcm = (n*n2)/g;
	cout<<lcm;
	return 0;
}