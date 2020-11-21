#include <bits/stdc++.h>
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

int ncr(int n, int r)
{
    return (factorial(n)/(factorial(n-r)*factorial(r)));
}

int main()
{
    int N,R;
    cin>>N>>R;

    cout<<ncr(N,R);

    return 0;
}
