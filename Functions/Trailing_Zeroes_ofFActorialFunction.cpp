#include<bits/stdc++.h>
using namespace std;

int trailingZeroes(int n){
    int temp = 0;
    int value = 5;

    while((n/value) != 0){
        temp += (n/value);
        value *= 5;
    }

    return temp;
}

int main()
{
    int n;
    cin>>n;

    cout<<trailingZeroes(n);

    return 0;
}