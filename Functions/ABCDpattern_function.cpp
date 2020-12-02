/*
ABCDE
ABCD
ABC
AB
A
*/

#include<bits/stdc++.h>
using namespace std;

void printABCDPattern(int n){
    for(int i=1;i<=n;i++){
        char letter = 'A';
        for(int j=1;j<=n-i+1;j++){
            cout<<letter;
            letter = letter + 1;  // 'A' + 1 = 65 + 1 = 66 stored as char in letter
        }
        cout<<'\n';
    }
}

int main()
{
    int n;
    cin>>n;

    printABCDPattern(n);


    return 0;
}