#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	for(int i=1;i<=n;i++)
	{
		if(i == 1){
			cout<<1<<'\n';
		}
		else{
			cout<<i-1;
			for(int j=1;j<=i-2;j++){
				cout<<0;
			}
			cout<<i-1<<'\n';
		}
	}


	return 0;
}