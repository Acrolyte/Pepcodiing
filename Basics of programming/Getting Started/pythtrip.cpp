#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;

	a = a*a;
	b = b*b;
	c = c*c;
	if(a+b == c or b+c == a or a+c==b)
		cout<<"true";
	else cout<<"false";
	return 0;
}