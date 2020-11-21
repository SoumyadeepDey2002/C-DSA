#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum = 0;

    int i=2;
    while(i<=n){
        sum += i;
        cout<<i<<" ";
        i+=2;
    }

    cout<<'\n'<<sum;

    return 0;
}
