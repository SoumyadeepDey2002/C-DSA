#include<bits/stdc++.h>
using namespace std;

void display(int a[], int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

bool compare(int a,int b){
    cout<<"comparing "<<a<<" and "<<b<<endl;
    return a>b;
}

int main()
{
    int n;
    cin>>n;
    int a[1000];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);
    display(a,n);
    
    sort(a,a+n,compare);
    display(a,n);
    

    return 0;
}