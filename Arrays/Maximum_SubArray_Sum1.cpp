#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[1000];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int maxsum = INT_MIN;
    int left,right;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int currentsum = 0;
            for(int k=i;k<=j;k++){
                currentsum+= a[k];
            }
            if(currentsum > maxsum){
                maxsum = currentsum;
                left = i;
                right = j;
            }
        }
    }

    cout<<"Maximum sum is "<<maxsum<<endl;
    for(int i=left;i<=right;i++){
        cout<<a[i]<<" ";
    }


    return 0;
}