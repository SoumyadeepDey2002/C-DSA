#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;

    while(T>0){
	int c1,c2,c3,c4;
	cin>>c1>>c2>>c3>>c4;
	int noofrick,noofcabs;
	cin>>noofrick>>noofcabs;
	int rick[noofrick],cab[noofcabs];

	for(int i=0; i <noofrick;i++){
		cin>>rick[i];     //number of times rickshaw number i will be rode
	}
	for(int i=0;i <noofcabs;i++){
		cin>>cab[i];      //number of times cab number i will be rode 
	}

	int minrick=0,mincab=0;

	for(int i=0;i <noofrick;i++){
		minrick += min(rick[i]*c1 , c2);
	}
	for(int i=0;i <noofcabs;i++){
		mincab += min(cab[i]*c1 , c2);
	}

	int ultimatemin_rick = min(minrick , c3);
	int ultimatemin_cab  = min(mincab , c3);

	int ans = min(ultimatemin_rick + ultimatemin_cab , c4);

    cout<<ans<<'\n';

    T--;
    }


	return 0;
}