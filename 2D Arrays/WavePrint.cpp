#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    int a[1000][1000] = {0};

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int j=0;j<n;j++){
        int start, end, inc;
        if(j % 2 == 0){
            for(int i=0;i<m;i++){
                cout<<a[i][j]<<" ";
            }
        }
        else{
            for(int i=m-1;i>=0;i--){
                cout<<a[i][j]<<" ";
            }
        }
    }

    return 0;
}