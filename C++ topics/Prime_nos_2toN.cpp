#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int a)
{
    for(int i = 2; i * i <= a; i++){
        if(a%i == 0){
            return false;
        }
    }
    return true;
}

void generatePrime(int n)
{
    for(int i = 2; i<=n; i++){
        if(checkPrime(i)){
            cout<<i<<" ";
        }
    }
}

int main()
{
    int n;
    cin>>n;

    generatePrime(n);

    return 0;
}
