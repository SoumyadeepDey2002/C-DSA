#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    cin>>c;

    if((c >= 'A') && (c <= 'Z')){
        c = c + 32;
        cout<<c<<'\n';
    }
    else if((c >= 'a') && (c <= 'z')){
        c = c - 32;
        cout<<c;
    }
    else {
        cout<<"invalid input";
    }

    return 0;
}

