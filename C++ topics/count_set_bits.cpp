#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int sum = 0;

    while(n!=0){
        sum+= n & 1;
        n = n >> 1;
    }

    cout<<sum;

    return 0;
}
