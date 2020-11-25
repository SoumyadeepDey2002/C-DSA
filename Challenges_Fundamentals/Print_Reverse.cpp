#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int temp = n;
	int numberofdigits = 0;

	while(temp>0){
		numberofdigits++;
		temp/=10;
	}

	int p = pow(10,numberofdigits-1);

	while(p>0){
		temp+=((n%10)*p);
		p/=10;
		n/=10;
	}

	cout<<temp;


	return 0;
}