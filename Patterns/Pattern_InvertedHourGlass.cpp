#include<bits/stdc++.h>
using namespace  std;

int main()
{
	int n;
	cin>>n;

	int limit = n;
	int spaces = (2*n)-1;
    bool flag=false;

	for(int i=1;i<=(2*n)+1;i++){
		for(int j=n;j>=limit;j--){
			cout<<j<<" ";
		}
		for(int j=1;j<=spaces;j++){
			cout<<"  ";
		}
		for(int j=limit;j<=n;j++){
            if(j!=0){
			cout<<j<<" ";
            }
		}

		if(limit>0 && flag == false){
			limit--;
			spaces-=2;
		}
		else{
            flag = true;
			limit++;
			spaces+=2;
		}

		cout<<'\n';

	}


	return 0;
}