#include <bits/stdc++.h>
using namespace std;

int main()
{
	int minf,maxf,step;
	cin>>minf>>maxf>>step;

	int cel;

	for(int f=minf;f<=maxf;f+=step){
		cel = (5 * (f-32))/9;
		cout<<f<<" "<<cel<<'\n';
	}

	return 0;
}