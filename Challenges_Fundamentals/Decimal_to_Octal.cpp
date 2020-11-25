#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,rv = 0;
	cin>>n;

	int p = 1;
	while(n>0){
		rv += (n%8) * p;
		n/=8;
		p*=10;
	}

	cout<<rv;

	return 0;
}