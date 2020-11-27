#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int lim = (n/2)+1;
	int last = 1;
	int spaces = n-1;
	int innerspace = -2;
    bool flag = false;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=spaces;j++){
			cout<<"  ";
		}
		if(i == 1 || i == n){
			cout<<1<<" ";
		}
		else{
			for(int j=last;j>=1;j--){
				cout<<j<<" ";
			}
			for(int j=1;j<=innerspace;j++){
				cout<<" ";
			}
			for(int j=1;j<=last;j++){
				cout<<j<<" ";
			}
		}
		if(last < lim && flag == false){
				last++;
				innerspace+=4;
				spaces-=2;
			}
		else{
                flag = true;
				last--;
				innerspace-=4;
				spaces+=2;
			}
			cout<<'\n';
	}


	return 0;
}