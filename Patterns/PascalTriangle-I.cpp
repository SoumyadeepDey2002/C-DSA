#include<bits/stdc++.h>
using namespace std;
 
// Function to print the Pascal's Triangle
void print_pascal(int row_num){

	int space = ((row_num-1)*2)+5;
 
    // Loop to print each row
    for(int n = 1; n <= row_num; n++){
 
        // Loop to print spaces for triangular display
        for(int r = 1; r < space; r++)
            cout<<"  ";

		space -=2;	
 
        // Loop to print values using Combinations logic
        int val = 1;
        for(int r = 1; r <= n; r++){
            cout<<val<<"   ";
             
            val = val * (n - r)/r;
        }
        cout<<endl;
    }
}
 
// The main Function
int main(){
 
    // Number of rows for Pascal's Triangle
    int row_num;
	cin>>row_num;
 
    //Function call to print Pascal's Triangle
    print_pascal(row_num);
 
    return 0;
}