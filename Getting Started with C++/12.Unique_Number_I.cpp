#include <bits/stdc++.h>
using namespace std;

int main() {
    
    // Unique Number - Given a list of numbers where every number occurs twice except one,
    // Example - 1 1 3 5 2 3 6 5 2           Ans - 6
    
    int n,size;

    cin>>size;
    int ans = 0;

    while(size > 0){

        cin>>n;
        ans = ans ^ n; //bit wise xor

        size--;
    }

    cout<<ans<<'\n';

    return 0;
}


// same numbers cancel out in xor