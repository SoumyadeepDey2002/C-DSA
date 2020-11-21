#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    cout<<"power = "<<pow(a,b)<<'\n';
    cout<<"square root of "<<a<<" = "<<sqrt(a)<<'\n';


    int power =1;
    for(int i=0;i<b;i++){
        power*= a;
    }

    cout<<"my power = "<<power;

    return 0;
}
