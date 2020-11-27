#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int a = (n/2)+1,b = (n/2)+1;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j <= a || j >= b){
				cout<<"*\t";
			}
			else{
				cout<<"\t";
			}
		}
		if(i < (n/2)+1){
			a--;
			b++;
		}
		else{
			a++;
			b--;
		}
		cout<<"\n";
	}


	return 0;
}