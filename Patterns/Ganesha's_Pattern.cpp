#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
            bool flag = false;
			if((j==(n/2)+1) || (i==(n/2)+1)){
				cout<<"*";
                flag = true;
			}
			if((i==1 && (j>(n/2)+1)) || (i==n && (j<(n/2)+1))){
				cout<<"*";
                flag = true;
			}
			if((j==1 && (i<(n/2)+1)) || (j==n && (i>(n/2)+1))){
				cout<<"*";
                flag = true;
			}
            if(flag == false){
                cout<<" ";
            }
		}
        cout<<"\n";
	}


	return 0;
}