#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin>>N;

	int spaces = (2*N)-3;

	for(int i=1;i<=N;i++){
		int lim = i;
		for(int j=1;j<=lim;j++){
			cout<<j<<'\t';
		}
		for(int j=1;j<=spaces;j++){
			cout<<'\t';
		}
		if(i == N){
			lim--;
		}
		for(int j=lim;j>=1;j--){
			cout<<j<<'\t';
		}
		cout<<'\n';

		spaces -= 2;

	}


	return 0;
}