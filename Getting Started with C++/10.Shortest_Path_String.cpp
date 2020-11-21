#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int ch;

    ch = cin.get();

    int x = 0, y = 0;

    while(ch != '\n'){
        if(ch == 'N'){
            y++;
        }
        else if(ch == 'S'){
            y--;
        }
        else if(ch == 'E'){
            x++;
        }
        else if(ch == 'W'){
            x--;
        }
        ch = cin.get();
    }

    cout<<'('<<x<<','<<y<<')';

    return 0;
}
