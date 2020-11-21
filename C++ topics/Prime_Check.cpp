#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int div=2; div * div <= n; div++){
        if(n % div == 0){
            cout<<"Not Prime";
            return 0;
        }
    }

    cout<<"Prime";

    return 0;
}
