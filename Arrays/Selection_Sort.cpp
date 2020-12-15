#include<bits/stdc++.h>
using namespace std;

void selection_sort(int a[], int n){

    for(int i=0;i<n-1;i++){

        //find out the smallest element index in unsorted part

        int min_index = i;
        for(int j=i;j<n;j++){
            if(a[j] < a[min_index]){
                min_index = j;
            }
        }

        //After this loop we can swap finally
        swap(a[i], a[min_index]);
    }

}

void display(int a[], int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;

    int arr[1000];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    display(arr,n);
    selection_sort(arr,n);
    display(arr,n);

    return 0;
}