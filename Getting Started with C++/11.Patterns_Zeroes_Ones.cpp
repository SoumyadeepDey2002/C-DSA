#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int n;
    cin>>n;

    int f;

    for(int i=1;i<=n;i++){
        if(i%2 == 0){
            f = 0;
        }
        else{
            f = 1;
        }
        cout<<f<<'\t';
        for(int j=2;j<=i;j++){
            if(f == 1){
                f=0;
            }
            else{
                f=1;
            }
            cout<<f<<'\t';
        }
        cout<<'\n';
    }

    return 0;
}
