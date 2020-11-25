#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N1,N2;
	cin>>N1>>N2;

    int count = 1;

	for(int i=1;count<=N1;i++){
		int n = (3*i)+2;
		if(n % N2 != 0){
			cout<<n<<'\n';
            count++;
		}
	}


	return 0;
}