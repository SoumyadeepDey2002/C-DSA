#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int product = 0;

    for(int i=0; i<b; i++){
        product+= a;
    }

    cout<<a<<" * "<<b<<" = "<<product;

    return 0;
}
