#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int a[], int n){

    for(int i=1;i<n;i++){

        int e = a[i];
        int j = i-1;
        while(j>=0 && a[j]>e){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = e;
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

    insertion_sort(a,n);
    display(a,n);


    return 0;
}