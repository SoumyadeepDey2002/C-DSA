#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin>>N;

	for(int div=2;div*div <= N;div++){
		if(N % div == 0){
			cout<<"Not Prime";
			return 0;
		}
	}

	cout<<"Prime";


	return 0;
}