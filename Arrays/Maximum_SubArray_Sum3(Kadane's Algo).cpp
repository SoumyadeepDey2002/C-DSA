#include<bits/stdc++.h>
using namespace std;

void KadanesAlgo(int a[], int n){

    int maxsum = 0;
    int currentsum = 0;

    for(int i=0;i<n;i++){
        currentsum += a[i];
        if(currentsum < 0){
            currentsum = 0;
        }
        maxsum = max(currentsum, maxsum);
    }
    cout<<maxsum;
}

int main()
{
    int n;
    cin>>n;
    int a[1000];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    KadanesAlgo(a,n);

    return 0;
}