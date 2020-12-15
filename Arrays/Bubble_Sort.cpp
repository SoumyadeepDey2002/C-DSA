#include<bits/stdc++.h>
using namespace std;

void Bubble_Sort(int a[], int n){

    for(int i=1;i<=n-1;i++){
        for(int j=0;j<=n-i-1;j++){
            if(a[j] > a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}

void display(int a[], int n){
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;

    int a[1000];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    Bubble_Sort(a,n);
    display(a,n);


    return 0;
}