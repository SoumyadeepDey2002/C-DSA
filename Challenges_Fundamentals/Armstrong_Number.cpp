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

	temp = n;
	int temp2 = 0;

	while(temp>0){
		int lastdigit = temp % 10;
		temp2 += pow(lastdigit , numberofdigits);
		temp/=10;
	}

	if(n == temp2){
		cout<<"true";
	}
	else{
		cout<<"false";
	}

	return 0;
}