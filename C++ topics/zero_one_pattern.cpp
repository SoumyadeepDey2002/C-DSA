#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int value;

    for(int i=1;i<=n;i++){
        value = i % 2;
        for(int j = 1; j<=i; j++){
            cout<<value<<'\t';
            if(value == 1){
                value = 0;
            }
            else if(value == 0){
                value = 1;
            }
        }
        cout<<'\n';
    }

    return 0;
}
