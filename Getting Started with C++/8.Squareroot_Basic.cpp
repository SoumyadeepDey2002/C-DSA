#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;

    int places;
    cin>>places;

    double squareroot;

    int i;
    for(i=0;i*i<=n;){
        i++;
    }

    squareroot = i-1;

    double increment = 0.1;

    while(places>0){

        for(;squareroot * squareroot <= n;){
            squareroot += increment;
        }

        squareroot = squareroot - increment;

        increment = increment / 10;

        places--;
    }

    cout<<squareroot;

    return 0;
}
