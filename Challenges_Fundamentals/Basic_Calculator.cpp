#include <bits/stdc++.h>
using namespace std;

int main()
{
	char ch;
    cin>>ch;

	while(ch!='x' && ch!='X'){
		int a,b;

		int result;

		if(ch == '*'){
            cin>>a>>b;
			result = a*b;
            cout<<result<<'\n';
		}
		else if(ch == '+'){
            cin>>a>>b;
			result = a+b;
            cout<<result<<'\n';
		}
		else if(ch == '-'){
            cin>>a>>b;
			result = a-b;
            cout<<result<<'\n';
		}
		else if(ch == '/'){
            cin>>a>>b;
			result = a/b;
            cout<<result<<'\n';
		}
		else if(ch == '%'){
            cin>>a>>b;
			result = a%b;
            cout<<result<<'\n';
		}
        else{
            cout<<"Invalid operation. Try again.\n";
        }
        

		cin>>ch;
	}


	return 0;
}