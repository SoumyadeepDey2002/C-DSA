#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	ll N,m,n;

	cin>>N;

	if(N<2){
		cout<<-1;
	}
	else if(N % 2 == 0)
	{
		m = N/2;
		n = 1;
		cout<<m*m-n*n<<" "<<m*m+n*n<<endl;
	}
	else{
		m = (N + 1)/2;
		n = (N - 1)/2;
		cout<<2*m*n<<" "<<m*m+n*n<<endl;
	}

	return 0;
}