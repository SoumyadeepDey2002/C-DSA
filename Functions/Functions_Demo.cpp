#include<bits/stdc++.h>
using namespace std;

void sayHello(){
    cout<<"Hello Everyone!";
}

int factorial(int n){
    int ans = 1;
    for(int i=2;i<=n;i++){
        ans *= i;
    }

    return ans;
}

void factorial_Print(int n){
    int ans = 1;
    for(int i=2;i<=n;i++){
        ans *= i;
    }

    cout<<ans<<"\n";
}

int main()
{
    cout<<"Before function \n";
    sayHello();
    cout<<"\nAfter function \n";

    int n;
    cout<<"Enter a number : ";
    cin>>n;

    cout<<factorial(n)<<endl;
    factorial_Print(n);


    return 0;
}