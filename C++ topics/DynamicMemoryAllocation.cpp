#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *p = new int;
    *p = 10;

    cout<<p<<'\n';
    cout<<*p<<'\n';

    double *d = new double;
    char *c = new char;

    //Largest element in array

    int n;
    cin>>n;

    int *arr = new int[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest = arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<"Largest element in the array : "<<largest;

    return 0;
}
