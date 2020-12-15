#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,key;
    cin>>n;

    int a[1000];      //Asuming max array size is 1000
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //Ask for the element we want to search
    cout<<"Enter the element you want to search : ";
    cin>>key;

    //Find out the index of the array by traversing array
    int i;
    for(i=0;i<n;i++){
        if(a[i]==key){
            cout<<key<<" found at "<<i<<"th index";
            break;
        }
    }

    if(i == n){
        cout<<key<<" is not present in the array";
    }


    return 0;
}