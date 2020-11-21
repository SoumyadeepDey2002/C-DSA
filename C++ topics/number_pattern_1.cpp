#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int lim = 1;

    int i = 1;
    while(i<=n){
        int j = 1;
        while(j <= (n-i)){
            cout<<'\t';
            j++;
        }
        j=1;
        while(j<=lim){
            cout<<j<<'\t';
            j++;
        }
        lim+=2;
        cout<<'\n';

        i++;
    }

    return 0;
}
