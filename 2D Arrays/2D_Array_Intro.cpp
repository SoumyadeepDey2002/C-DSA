#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[1000][1000] = {{1,2,3},{4,5,6}};

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n*************************\n";

    int b[1000][1000] = {0}; //to initialize all elements to zero
    int m,n;
    cin>>m>>n;

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


    return 0;
}