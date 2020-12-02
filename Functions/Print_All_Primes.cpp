#include<bits/stdc++.h>
using namespace std;

bool prime_check(int n)
{
    for(int div = 2;div*div <= n;div++){
        if(n%div == 0){
            return false;
        }
    }
    return true;
}

void print_all_primes(int n)
{
    for(int i=2;i<=n;i++){
        if(prime_check(i)){
            cout<<i<<" ";
        }
    }
}

int main()
{
    int n;
    cin>>n;

    print_all_primes(n);

    return 0;
}