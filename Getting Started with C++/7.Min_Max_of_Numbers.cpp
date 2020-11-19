#include<bits/stdc++.h>
using namespace std;

int main()
{

   int N;
   cin>>N;

   int max = INT_MIN;
   int min = INT_MAX;

   int n;

   while(N!=0){

       cin>>n;
       if(max < n){
           max=n;
       }
       
       if(n < min){
           min=n;
       }

       N--;
   }

   cout<<"Max : "<<max<<'\n';
   cout<<"Min : "<<min<<'\n';

    return 0;
}