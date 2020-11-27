#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int spaces = n-1;
	int lim = 1; 
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=spaces;j++){
			cout<<'\t';
		}
		for(int j=i;j<=lim;j++){
			cout<<j<<'\t';
		}
		for(int j=lim-1;j>=i;j--){
			cout<<j<<'\t';
		}
        cout<<'\n';
		lim+=2;
        spaces--;
	}


	return 0;
}