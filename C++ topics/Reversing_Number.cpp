#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int temp = n;

    int counter = 0;
    while(temp>0){
        counter++;
        temp = temp/10;
    }

    int rev;
    int i = pow(10,counter-1);

    while(n>0){
        rev += (n%10)*i;
        i/=10;
        n = n/10;
    }

    cout<<rev;

    return 0;
}
