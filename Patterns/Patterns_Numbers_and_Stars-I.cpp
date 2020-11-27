#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int star = -1;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i+1;j++){
			cout<<j<<" ";
		}
		for(int j=1;j<=star;j++){
			cout<<"* ";
		}
		star += 2;
		cout<<"\n";
	}


	return 0;
}