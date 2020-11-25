#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int S;
	int prev,curr;
    cin>>S;

	cin>>prev;
	S--;
	bool decreasing = true;

	//Assuming it was decreasing in the beginning
	while(S>0){
		cin>>curr;

		if(prev == curr){      //if this happens it's neither inc nor dec
			cout<<"false";
			return 0;
		}
		if(curr > prev){
			decreasing = false; 
		}
		if(decreasing == false && prev > curr){
			cout<<"false";
			return 0;
		}

		prev = curr;


		S--;
	}

	cout<<"true";


	return 0;
}