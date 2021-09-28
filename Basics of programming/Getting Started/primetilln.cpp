#include <bits/stdc++.h>
using namespace std;

int prime(int n){
	int c=0;
	for(int i=2;i*i<=n;i++)
		if(n%i==0) c++;
	if(c==0 and n!=0) return n;
	return -1;
}

int main()
{
	int low,high;
	cin>>low>>high;
	for(int i=low;i<=high;i++){
		if(prime(i)!=-1)
		cout<<i<<'\n';
	}
	return 0;
}