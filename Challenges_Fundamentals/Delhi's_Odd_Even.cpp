#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;

	while(T>0){
        int N;
		cin>>N;
		int sumodd=0,sumeven=0;

		while(N>0){
			int digit = N%10;
			if(digit % 2 == 0){
				sumeven += digit;
			}
			else{
				sumodd += digit;
			}
            N/=10;
		}

		if(sumodd % 3 == 0 || sumeven % 4 == 0){
			cout<<"Yes\n";
		}
		else{
			cout<<"No\n";
		}


		T--;
	}


	return 0;
}