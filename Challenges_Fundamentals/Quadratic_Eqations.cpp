#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;

	int D = (b*b) - (4*a*c);
	if(D == 0){
		int roots = (-1*b)/(2*a);
		cout<<"Real and Equal\n"<<roots<<" "<<roots;
	}
	else if(D > 0){
		int root1 =  ((-1)*b - sqrt(b*b - 4*a*c))/2*a;
		int root2 =  ((-1)*b + sqrt(b*b - 4*a*c))/2*a;
		cout<<"Real and Distinct\n"<<root1<<" "<<root2;
	}
	else {
		cout<<"Imaginary";
	}



	return 0;
}