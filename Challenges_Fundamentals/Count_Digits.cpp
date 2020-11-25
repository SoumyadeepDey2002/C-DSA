#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N,digit;
	cin>>N>>digit;

	int count = 0;

	while(N>0){
		if((N%10)==digit){
			count++;
		}
		N=N/10;
	}

	cout<<count;

	
	return 0;
}