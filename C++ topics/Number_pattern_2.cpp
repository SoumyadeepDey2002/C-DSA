#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int b =1;

    for(int i=1;i<=n;i++){
        int j = 1;
        while(j<=(n-i)){
            cout<<'\t';
            j++;
        }
        j = i;
        while(j<=b){
            cout<<j<<'\t';
            j++;
        }
        j-=2;
        while(j>=i){
            cout<<j<<'\t';
            j--;
        }
        cout<<'\n';
        b+=2;
    }

    return 0;
}
