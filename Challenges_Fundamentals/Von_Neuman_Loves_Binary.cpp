#include<bits/stdc++.h>
using namespace std;

int main()
{
	int testcases;
	cin>>testcases;

	while(testcases!=0)	{

		int n;
		cin>>n;

		int a=1;
		int decimal_num = 0;
		while(n>0){
			int last_digit = n%10;
			decimal_num += last_digit * a;
			a = a*2;
			n/=10;
		}

		cout<<decimal_num<<'\n';


		testcases--;
	}
	return 0;
}