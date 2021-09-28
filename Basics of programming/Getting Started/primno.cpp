#include <bits/stdc++.h>
using namespace std;

string prime(int n){
	int c=0;
	for(int i=2;i<=n/2;i++)
		if(n%i==0) c++;
	if(c==0 and n!=0) return "prime";
	return "not prime";
}

int main()
{
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<prime(n)<<'\n';
	}
	return 0;
}