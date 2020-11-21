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

int main()
{
    int n;
    cin>>n;

    if(checkPrime(n)){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }

    return 0;
}
