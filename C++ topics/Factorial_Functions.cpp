#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    while(n>=1){
        fact *= n;
        n--;
    }
    return fact;
}

int main()
{
    int N;
    cin>>N;

    cout<<factorial(N);

    return 0;
}
